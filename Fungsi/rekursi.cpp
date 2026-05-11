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
    cout << "Nilai dari " << angka << "! adalah: " << faktorial(angka) << endl;

    return 0;
}