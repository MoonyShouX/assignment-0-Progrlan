#include <iostream>
#include <string>


using namespace std;

int main() {
    string nama;

    cout << "Silahkan masukkan nama anda: ";
    getline(cin, nama);

    cout << "Hello " << nama << endl;

    return 0;
}