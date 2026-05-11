#include <iostream>
using namespace std;

int main() {

    // Deklarasi dan inisialisasi variabel
    int i = 1;

    // Perulangan dari 1 s.d 5
    while (i <= 5) {
        cout << "Perulangan ke-" << i << endl;
        i++; // Increment i untuk menghindari infinite loop
    }

    return 0;
}