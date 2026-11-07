
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    // 1. Mencari nilai 0
    bool ditemukan = false;

    for (int i = 0; i < suhu.size(); i++) {
        if (suhu[i] == 0) {
            cout << "Nilai 0 ditemukan pada index ke-" << i << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Nilai 0 tidak ditemukan" << endl;
    }

    // 2. Filter suhu positif
    cout << "\nSuhu positif:" << endl;

    for (int i = 0; i < suhu.size(); i++) {
        if (suhu[i] > 0) {
            cout << suhu[i] << " ";
        }
    }

    return 0;
}
