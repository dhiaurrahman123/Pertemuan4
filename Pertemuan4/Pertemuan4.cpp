// Pertemuan4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
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