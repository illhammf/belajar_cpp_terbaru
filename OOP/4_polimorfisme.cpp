#include <iostream>
using namespace std;

// Kelas induk
class Universitas
{
public:
    // Fungsi virtual data
    virtual void data()
    {
        cout << "Data Universitas" << endl;
    }
};

// Kelas turunan
class Mahasiswa : public Universitas
{
public:
    // Override fungsi data() kelas Universitas
    void data() override
    {
        cout << "Data Mahasiswa" << endl;
    }
};

int main()
{

    // Pointer ke objek kelas Universitas dan Mahasiswa
    Universitas *Universitas1 = new Universitas();
    Universitas *Universitas2 = new Mahasiswa();

    // Pemanggilan fungsi
    Universitas1->data();
    Universitas2->data();

    // Menghapus objek yang dialokasikan secara dinamis
    delete Universitas1;
    delete Universitas2;

    return 0;
}                                                                