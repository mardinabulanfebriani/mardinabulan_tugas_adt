#include <iostream>

using namespace std;

// Mardina Bulan Febriani
//　1121031051
// Kelas A
// Nama File main.cpp
// Deskripsi :　Memasukan jam, menit, dan detik lalu di validasi dengan fungsi isValid, jika benar akan menampilkan kata "Benar", jika salah akan menampilkan kata "Salah"


struct clock{
    int jam;
    int menit;
    int detik;
};


int getJam(int jam){
    return jam;
};

int getMenit(int menit){

    return menit;
};

int getDetik(int detik){

    return detik;
};

int main()
{
    clock setJam;
    clock setMenit;
    clock setDetik;

    cout << "Masukan Jam : ";
    cin >> setJam.jam;
    int hh = getJam(setJam.jam);

    cout << "Masukan Menit : ";
    cin >> setMenit.menit;
    int jj = getMenit(setMenit.menit);

    cout << "Masukan Detik : ";
    cin >> setDetik.detik;
    int dd = getDetik(setDetik.detik);


    if (hh < 23 && jj < 59 && dd < 59){
        cout << "Benar";
    }else {
        cout << "Salah";
    }
    return 0;
};
