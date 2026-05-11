#include <iostream>
#include <cstdlib> // Menyediakan fungsi-fungsi utilitas umum seperti pengacakan, konversi angka, dll
using namespace std;

int main() {
    srand(static_cast < unsigned int >(time(nullptr))); // memberika waktu saat ini jadi seed / patokan
    int angkaAcak = rand();

    cout << angkaAcak << endl;
    return 0;
}
