#include <iostream>
using namespace std;

float luasPersegi(float p, float l) {
    return p * l;
}

float luasLingkaran(float r) {
    return 3.14 * r * r;
}

float luasSegitiga(float a, float t) {
    return 0.5 * a * t;
}


int main() {

    ///system("cls"); ///membersihkan terminal scr otomatis

    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    do {
        cout << "=====================" << endl;
        cout << "====== M E N U ======" << endl;
        cout << "=====================" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Luas Segitiga" << endl;
        cout << "4. Exit" << endl;
        cout << "\nPilihan (1/2/3/4) : ";
        cin >> pilihan;


        switch (pilihan) {
        case 1:
            cout << "Masukkan panjang = ";
            cin >> panjang;
            cout << "Masukkan lebarnya = ";
            cin >> lebar;
            cout << "\n1Luas persegipanjang = " << luasPersegi(panjang, lebar);
            break;
        case 2:
            cout << "Masukkan jari-jari = ";
            cin >> jejari;
            cout << "\nLuas lingkaran = " << luasLingkaran(jejari);
            break;
        case 3:
            cout << "Masukkan alas = ";
            cin >> alas;
            cout << "Masukkan tinggi = ";
            cin >> tinggi;
            cout << "\nLuas Segitiga = " << luasSegitiga(alas, tinggi);
            break;
        case 4:
            break;
        default:
            cout << "Pilihan salah !";
            break;

        }
    } while (pilihan != 4);
}