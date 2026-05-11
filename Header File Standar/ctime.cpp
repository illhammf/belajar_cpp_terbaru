#include <iostream>
#include <ctime> // Menyediakan fungsi untuk operasi Waktu dan Tanggal
using namespace std;

int main() {
    time_t now = time(0);
    char* dt = ctime(&now);
    
    cout << " Tanggal dan Waktu saat ini: " << dt << endl;
    return 0;
}