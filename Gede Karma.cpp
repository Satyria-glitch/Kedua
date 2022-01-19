// Nama : I Gede Karma Santiyasa
// Nim : 2101010041
// Kelas : SI Malam


#include <iostream>

using namespace std;

void garis()
{
    cout << "=======================" << endl;
}

int kalkulator(int pilihan1, int pilihan2, int angka1)
{
    float hasil;

    if (pilihan1 == 1)
    {
        switch (pilihan2)
        {
        case 2:
            hasil = angka1 * 1.8 + 32;
            break;

        case 3:
            hasil = angka1 * 0.8;
            break;

        case 4:
            hasil = angka1 + 273.15;
            break;

        default:
            hasil = angka1;
            break;
        }
    }

    if (pilihan1 == 2)
    {
        switch (pilihan2)
        {
        case 1:
            hasil = (angka1 - 32) / 1.8;
            break;

        case 3:
            hasil = (angka1 - 32) / 2.25;
            break;

        case 4:
            hasil = (angka1 + 456.67) / 1.8;
            break;

        default:
            hasil = angka1;
            break;
        }
    }

    if (pilihan1 == 3)
    {
        switch (pilihan2)
        {
        case 1:
            hasil = angka1 / 0.8;
            break;

        case 2:
            hasil = angka1 * 2.25 + 32;
            break;

        case 4:
            hasil = angka1 / 0.8 + 273.15;
            break;

        default:
            hasil = angka1;
            break;
        }
    }

    if (pilihan1 == 4)
    {
        switch (pilihan2)
        {
        case 1:
            hasil = angka1 - 273.15;
            break;

        case 2:
            hasil = angka1 * 1.8 - 459.67;
            break;

        case 3:
            hasil = (angka1 - 273.15) * 0.8;
            break;

        default:
            hasil = angka1;
            break;
        }
    }

    return hasil;
}

void kalkulasiMenu(int pilihan1, int pilihan2, int angka1)
{
    
    int hasil = 0;
    string suhu[4] = {"Celcius", "Farenheit", "Reamur", "Kelvin"};
    garis();
    string text_pilihan_1 = (pilihan1 > 0) ? suhu[pilihan1 - 1] : " ";
    string text_pilihan_2 = (pilihan2 > 0) ? suhu[pilihan2 - 1] : " ";

    int angka_pilihan_1 = (angka1 > -1) ? angka1 : 0;
    float angka_pilihan_2 = 0;

    if (angka1 >= 0)
    {
        angka_pilihan_2 = kalkulator(pilihan1, pilihan2, angka1);
    }

    cout << "Hasil Kalkulasi : " << angka_pilihan_1 << " " << text_pilihan_1 << " = " << angka_pilihan_2 << " " << text_pilihan_2 << endl;
    garis();

    cout << "1. Celcius " << endl;
    cout << "2. Farenheit " << endl;
    cout << "3. Reamur " << endl;
    cout << "4. Kelvin \n" << endl;
    cout << "5. Keluar " << endl;
}

void kalkulasi()
{
    int pilih, angka1, angka2;

    kalkulasiMenu(0, 0, 0);
    garis();

    do
    {
        cout << "Masukan pilihan suhu : ";
        cin >> pilih;

        if (pilih != 5)
        {
            kalkulasiMenu(pilih, 0, -1);
            cout << "Masukan nilai suhu : ";
            cin >> angka1;
            kalkulasiMenu(pilih, 0, angka1);

            int pilih1 = pilih;
            
            int pilih2;

            cout << "Masukan pilihan suhu kedua : ";
            cin >> pilih2;

            kalkulasiMenu(pilih1, pilih2, angka1);
        }

    } while (pilih < 5);
}

int main()
{

    int pilih;

    do
    {

        cout << "1. Kalkulasi " << endl;
        cout << "2. Keluar " << endl;

        garis();

        cout << "Pilih menu : ";
        cin >> pilih;

        if (pilih == 1)
        {
            
            kalkulasi();
            pilih = 2;
        }

    } while (pilih != 2);
}