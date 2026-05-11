#include <iostream>
using namespace std;

int main() {
    
    // Deklarasi dan inisialisasi variabel
    bool nilaiA = true, nilaiB = false;
    
    // Deklarasi variabel
    bool nilaiC;

    // Menampilkan nilai
    cout << "Nilai A: " << nilaiA << endl;
    cout << "Nilai B: " << nilaiB << endl;
    
    // AND
    nilaiC = nilaiA && nilaiB;
    cout << "Nilai A && Nilai B: " << nilaiC << endl;

    // OR
    nilaiC = nilaiA || nilaiB;
    cout << "Nilai A || Nilai B: " << nilaiC << endl;

    // NOT
    nilaiC = !nilaiA;
    cout << "Nilai !Nilai A: " << nilaiC << endl;

    return 0;
}