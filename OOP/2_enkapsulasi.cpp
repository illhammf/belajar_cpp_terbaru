#include <iostream>
using namespace std;

// Definisi kelas
class Mahasiswa {
    private:
    // Data angggota private
    string nama;
    int umur;
    float ipk;

    public:
        // Setter
        void setNama(string n) {
            nama = n;
        }
        void setUmur(int u) {
            umur = u;
        }
        void setIpk(float i) {
            ipk = i;
        }

        // Getter
        string getNama() {
            return nama;
        }
        int getUmur() {
            return umur;
        }
        float getIpk() {
            return ipk;
        }

        // Fungsi anggota
        void dataMahasiswa() {
            cout << "--------------------------" << endl;
            cout << "Data Mahasiswa" << endl;
            cout << "--------------------------" << endl;
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "IPK: " << ipk << endl;
        }
};

// Fungsi utama
int main() {
    // Mmebuat objek dari kelas mahasiswa
    Mahasiswa mhs;

    // Mengisi data anggota objek menggunakan setter
    mhs.setNama("Ilham Firmansyah");
    mhs.setUmur(19);
    mhs.setIpk(3.73);

    // Memanggil fungsi anggota
    mhs.dataMahasiswa();

    return 0;
}
