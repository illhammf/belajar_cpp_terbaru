#include <iostream>
using namespace std;

// Definisi fungsi Faktorial
int faktorial(int n)
{
    // kondisi jika n <= 1
    if (n <= 1)
    {
        // Mengembalikan niali 1
        return 1;
    }
    // Jika tidak
    else
    {
        // Rekursi dan mengembalikan nilai hasil n * faktorial(n - 1)
        return n * faktorial(n - 1);
    }
}

// Fungsi utama
int main()
{

    // Deklarasi dan inisialisasi variabel
    int angka = 5;

    // Memanggil fungsi faktorial
    cout << "\n=== Faktorial ===" << endl;
    cout << "Angka: " << angka << endl;
    cout << "Cara menghitung faktorial dari " << angka << " adalah: " << angka << " * " << angka - 1 << " * " << angka - 2 << " * " << angka - 3 << " * " << angka - 4 << endl;
    cout << "\nNilai dari " << angka << "! adalah: " << faktorial(angka) << endl;
    cout << "---------------------------------" << endl;

    return 0;
}