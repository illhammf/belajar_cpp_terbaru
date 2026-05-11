#include <iostream>
using namespace std;

int main()
{

    // Alokasi memori untuk array dengan 5 elemen
    int *p = new int[5];

    // Perulangan for untuk inisialisasi array
    for (int i = 0; i < 5; i++)
    {
        // Inisialisasi array
        p[i] = i + 1;
    }

    // Perulangan for untuk mengakses elemen array
    for (int i = 0; i < 5; i++)
    {
        // Mengakses elemen array
        cout << "p[" << i << "] = " << p[i] << endl;
    }

    // Dealokasi memori untuk array
    delete[] p;

    return 0;
}