
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> produk = {
        "Laptop", "Mouse", "Keyboard", "Monitor", "Headset"
    };

    // 1. Mencari produk Keyboard
    bool ditemukan = false;

    for (int i = 0; i < produk.size(); i++) {
        if (produk[i] == "Keyboard") {
            cout << "Keyboard ditemukan pada index ke-" << i << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Keyboard tidak ditemukan" << endl;
    }

    // 2. Filter nama produk lebih dari 5 karakter
    cout << "\nProduk dengan lebih dari 5 karakter:" << endl;

    for (int i = 0; i < produk.size(); i++) {
        if (produk[i].length() > 5) {
            cout << produk[i] << endl;
        }
    }

    return 0;
}
