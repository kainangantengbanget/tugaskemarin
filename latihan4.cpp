#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Data awal nilai ujian siswa[cite: 1]
    vector<int> nilaiUjian = {60, 85, 40, 90, 75, 50, 95};
    int target = 85;
    
    // 1. Mencari apakah nilai 85 ada dan menampilkan posisi index-nya[cite: 1]
    int indexDitemukan = -1;
    for (size_t i = 0; i < nilaiUjian.size(); i++) {
        if (nilaiUjian[i] == target) {
            indexDitemukan = i;
            break;
        }
    }
    
    if (indexDitemukan != -1) {
        cout << "Nilai " << target << " ditemukan pada index ke-" << indexDitemukan << "." << endl;
    } else {
        cout << "Nilai " << target << " tidak ditemukan dalam data." << endl;
    }
    
    // 2. Menyaring nilai yang lulus (>= 75) ke dalam array/vektor baru[cite: 1]
    vector<int> nilaiLulus;
    for (int nilai : nilaiUjian) {
        if (nilai >= 75) {
            nilaiLulus.push_back(nilai);
        }
    }
    
    // Mencetak daftar nilai yang lulus ke terminal[cite: 1]
    cout << "Daftar nilai yang lulus (>= 75): ";
    for (size_t i = 0; i < nilaiLulus.size(); i++) {
        cout << nilaiLulus[i] << (i == nilaiLulus.size() - 1 ? "" : ", ");
    }
    cout << endl;

    return 0;
}