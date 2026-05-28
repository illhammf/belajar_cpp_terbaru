#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Struktur Data untuk Barang
struct Barang {
    string id;
    string nama;
    int stok;
    double harga;
};

// --- FUNGSI-FUNGSI MODULAR ---

// 1. Fungsi untuk menampilkan menu (Pass-by-Value)
void tampilkanMenu() {
    cout << "\n===================================" << endl;
    cout << "   SISTEM MANAJEMEN INVENTARIS     " << endl;
    cout << "===================================" << endl;
    cout << "1. Tambah Barang" << endl;
    cout << "2. Tampilkan Daftar Barang" << endl;
    cout << "3. Update Stok Barang" << endl;
    cout << "4. Hitung Total Nilai Inventaris" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilihan Anda (1-5): ";
}

// 2. Fungsi untuk menambah barang (Pass-by-Reference & Return Value)
Barang inputBarangBaru() {
    Barang temp;
    cout << "\n--- Tambah Barang Baru ---" << endl;
    cout << "ID Barang   : ";
    cin >> temp.id;
    cout << "Nama Barang : ";
    cin.ignore();
    getline(cin, temp.nama);
    cout << "Stok Awal   : ";
    cin >> temp.stok;
    cout << "Harga Satuan: ";
    cin >> temp.harga;
    return temp;
}

// 3. Fungsi untuk menampilkan data (Pass-by-Constant-Reference)
void tampilkanDaftarBarang(const vector<Barang>& daftarBarang) {
    cout << "\n---------------------------------------------------" << endl;
    cout << left << setw(10) << "ID" << setw(20) << "Nama Barang" << setw(10) << "Stok" << setw(15) << "Harga" << endl;
    cout << "---------------------------------------------------" << endl;
    for (const auto& b : daftarBarang) {
        cout << left << setw(10) << b.id 
             << setw(20) << b.nama 
             << setw(10) << b.stok 
             << "Rp " << setw(12) << b.harga << endl;
    }
    cout << "---------------------------------------------------" << endl;
}

// 4. Fungsi untuk update stok barang (Pass-by-Reference)
void updateStok(vector<Barang>& daftarBarang) {
    string idCari;
    cout << "\nMasukkan ID Barang yang akan di-update: ";
    cin >> idCari;

    for (auto& b : daftarBarang) {
        if (b.id == idCari) {
            int tambahanStok;
            cout << "Barang ditemukan (" << b.nama << "). Masukkan jumlah tambahan stok (bisa minus untuk pengurangan): ";
            cin >> tambahanStok;
            
            if (b.stok + tambahanStok < 0) {
                cout << "Error: Stok tidak boleh kurang dari 0!" << endl;
            } else {
                b.stok += tambahanStok;
                cout << "Stok berhasil diupdate. Stok saat ini: " << b.stok << endl;
            }
            return;
        }
    }
    cout << "Error: Barang dengan ID " << idCari << " tidak ditemukan!" << endl;
}

// 5. Fungsi menghitung total nilai (Pass-by-Constant-Reference & Return Value)
double hitungTotalInventaris(const vector<Barang>& daftarBarang) {
    double total = 0;
    for (const auto& b : daftarBarang) {
        total += (b.stok * b.harga);
    }
    return total;
}

// --- FUNGSI UTAMA ---
int main() {
    vector<Barang> inventaris;
    int pilihan;

    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inventaris.push_back(inputBarangBaru());
                cout << "\nBarang berhasil ditambahkan!" << endl;
                break;
            case 2:
                if (inventaris.empty()) {
                    cout << "\nDaftar barang masih kosong." << endl;
                } else {
                    tampilkanDaftarBarang(inventaris);
                }
                break;
            case 3:
                if (inventaris.empty()) {
                    cout << "\nDaftar barang masih kosong." << endl;
                } else {
                    updateStok(inventaris);
                }
                break;
            case 4:
                if (inventaris.empty()) {
                    cout << "\nDaftar barang masih kosong." << endl;
                } else {
                    cout << "\nTotal Nilai Seluruh Inventaris: Rp " << fixed << setprecision(2) << hitungTotalInventaris(inventaris) << endl;
                }
                break;
            case 5:
                cout << "\nTerima kasih telah menggunakan sistem ini." << endl;
                break;
            default:
                cout << "\nPilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
