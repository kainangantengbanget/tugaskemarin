#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tas = {"pedang kayu", "prisai besi"};
    tas.insert(tas.begin(), "potion darah");
    tas.insert(tas.begin() +2, "busur panah");
    tas.pop_back();
    cout << "isi tas: ";

    for(string item : tas) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}