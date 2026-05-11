// Akses elemen array menggunakan pointer
#include <iostream>
using namespace std;

int main()
{

    // Inisialisasi array
    int angka[5] = {1, 2, 3, 4, 5};

    // Pointer p menunjuk ke elemen array pertama angka
    int *p = angka;

    // Perulangan for
    for (int i = 0; i < 5; i++)
    {
        // Mengakses elemen array
        cout << "Angka[" << i << "] = " << *(p + i) << endl;
    }

    return 0;
}