#include <iostream>

using namespace std;

int main()
{
    int jari, luas, keliling;
    int phi = 3.14;

    cout << "PERHITUNGAN LINGKARAN"<< endl;
    cout << "masukkan bilangan untuk jari - jari" <<endl;
    cout << "jari - jari lingkaran = ";
    cin >> jari;
    cout << "diketahui sebuah lingkaran dengan jari-jari = "<< jari << endl;

    luas = phi*jari*jari;
    cout << "luas lingkaran= "<< luas<< endl;

    keliling = 2 * jari;
    cout << "keliling lingkaran= "<< keliling << endl;

    return 0;
}
