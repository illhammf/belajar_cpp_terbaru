#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Jika file berhasil.txt ada
    if (remove("berhasil.txt") == 0)
    {
        cout << "File berhasil dihapus." << endl;
    }
    // Jika tidak ada file berhasil.txt
    else
    {
        cout << "Gagal menghapus file." << endl;
    }

    return 0;
}
