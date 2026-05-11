#include <iostream>
#include <algorithm> // Menyediakan fungsu-fungsi algoritma umum, seperti sort, search, transform
#include <vector>
using namespace std;

int main() {
    vector<int> v = {3, 1, 2};
    sort(v.begin(), v.end());
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
