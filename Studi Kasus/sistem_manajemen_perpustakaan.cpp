#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Struktur untuk menyimpan informasi buku
struct Book
{
    string id;
    string title;
    string author;
    bool isAvailable;
};

// Struktur untuk menyimpan informasi pengguna
struct User
{
    string id;
    string name;
};

// Struktur untuk menyimpan transaksi informasi
struct Transaction
{
    string bookId;
    string userId;
    string date;
};

class Library
{
private:
    vector<Book> books;
    unordered_map<string, User> users;
    vector<Transaction> transaction;

public:
    // Menambahkan pengguna ke sistem
    void addBook(string id, string title, string author)
    {
        books.push_back({id, title, author, true});
    }

    // Menambahkan pengguna ke sistem
    void addUser(string id, string name)
    {
        users[id] = {id, name};
    }

    // Memeriksa ketersediaan buku
    bool checkAvailability(string bookId)
    {
        for (auto &book : books)
        {
            if (book.id == bookId && book.isAvailable)
            {
                return true;
            }
        }
        return false;
    }

    // Meminjam buku
    string borrowBook(string bookId, string userId, string date)
    {
        if (checkAvailability(bookId))
        {
            for (auto &book : books)
            {
                if (book.id == bookId)
                {
                    book.isAvailable = false;
                    transaction.push_back({bookId, userId, date});
                    return "Peminjaman Berhasil";
                }
            }
        }
        return "Buku tidak tersedia";
    }

    // Mengembalikan buku
    string returnBook(string bookId, string userId, string date)
    {
        for (auto &book : books)
        {
            if (book.id == bookId && !book.isAvailable)
            {
                book.isAvailable = true;
                transaction.push_back({bookId, userId, date});
                return "Pengembalian Berhasil";
            }
        }
        return "Pengembalian gagal";
    }

    // Menampilkan semua buku
    void displayBooks()
    {
        for (auto &book : books)
        {
            cout << "ID: " << book.id << ", Judul: " << book.title << ", Penulis: " << book.author << ", Tersedia: " << (book.isAvailable ? "Ya" : "Tidak") << endl;
        }
    }
};

int main()
{
    Library library;
    int choice;
    string id, title, author, userId, userName, date;

    while (true)
    {
        cout << "\n---- Menu ----" << endl;
        cout << "1. Tambah Buku" << endl;
        cout << "2. Tambah Pengguna" << endl;
        cout << "3. Pinjam Buku" << endl;
        cout << "4. Kembalikan Buku" << endl;
        cout << "5. Tampilkan Semua Buku" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Masukkan ID Buku: ";
            cin >> id;
            cout << "Masukkan Judul Buku: ";
            cin.ignore();
            getline(cin, title);
            cout << "Masukkan Penulis Buku: ";
            getline(cin, author);
            library.addBook(id, title, author);
            break;

        case 2:
            cout << "Masukkan ID Pengguna: ";
            cin >> userId;
            cout << "Masukkan Nama Pengguna: ";
            cin.ignore();
            getline(cin, userName);
            library.addUser(userId, userName);
            break;

        case 3:
            cout << "Masukkan ID Buku: ";
            cin >> id;
            cout << "Masukkan ID Pengguna: ";
            cin >> userId;
            cout << "Masukkan Tanggal Peminjaman (YYYY-MM-DD): ";
            cin >> date;
            cout << library.borrowBook(id, userId, date) << endl;
            break;

        case 4:
            cout << "Masukkan ID Buku: ";
            cin >> id;
            cout << "Masukkan ID Pengguna: ";
            cin >> userId;
            cout << "Masukkan Tanggal Pengembalian (YYYY-MM-DD): ";
            cin >> date;
            cout << library.returnBook(id, userId, date) << endl;
            break;

        case 5:
            library.displayBooks();
            break;

        case 6:
            return 0;

        default:
            cout << "Opsi tidak valid!" << endl;
        }
    }

    return 0;
}