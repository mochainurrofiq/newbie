#include <iostream>

using namespace std;

int main()
{
    int waktu, jam, kode;
    cout << "1. pesan" << endl;
    cout << "2. main" << endl;
    cout << "masukkan pilihan: ";
    cin >> kode;

    switch (kode){
    case 1:
        cout << "pesan untuk main jam berapa?" <<endl;
        cin >> jam;
        cout << "lama waktu: ";
        cin >> waktu;
        break;
    case 2:
        cout << "lama waktu: ";
        cin >> waktu;
        break;
    default:
        cout << "maaf kode yang anda masukkan tidak valid!" <<endl;
        break;
    }
    return 0;
}
