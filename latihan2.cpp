#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> daftarlagu = {"ini abadi", "monokrom"};
    daftarlagu.insert(daftarlagu.begin() +1, "everything you are");
    daftarlagu.push_back("aitakatta");
    daftarlagu.erase(daftarlagu.begin());
    cout << "hasil akhir: ";
    for(string item : daftarlagu){
        cout << item << " ";
    }
    cout << endl;

    return 0;
}