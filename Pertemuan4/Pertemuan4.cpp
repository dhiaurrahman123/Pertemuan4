#include <iostream>
using namespace std;

float LuasPersegipanjang(float p, float l) {
    return p * l;
}

float LuasLingkaran(float r) {
    return  3.14 * r * r;
}

float LuasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

int main() {
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;

    cout << "=================" << endl;
    cout << "==== M E N U ====" << endl;
    cout << "=================" << endl;
    cout << "1. Luas Persegi Panjang" << endl;
    cout << "2. Luas Lingkaran" << endl;
    cout << "3. Luas Segitiga" << endl;
    cout << "4. Exit" << endl;

    cout << "Masukkan pilihan : ";

    do {
        switch (pilihan) {
        case 1:
            cout << "Masukkan panjang = ";
            cin >> panjang;
            cout << "Masukkan lebarnya = ";
            cin >> lebar;
            cout << "\nLuas PersegiPanjang = " << LuasPersegipanjang(panjang, lebar);
            break;

        case 2:
            cout << "Masukkan jari-jari =  ";
            cin >> jejari;
            cout >> "\nLuas Lingkaran = " << LuasLingkaran(jejari);
            break;

        case 3:
            cout << "Masukkan alas = ";
            cin >> alas;
            cout << "Masukkan tinggi = ";
            cin >> tinggi;
            cout << "\nLuas Segitiga = " << LuasSegitiga(alas, tinggi);
            break;

        }
    }
}

        case 4:
            break;
        default:
            cout << "Pilihan salah !";
            break;

        }
    } while (pilihan != 4);