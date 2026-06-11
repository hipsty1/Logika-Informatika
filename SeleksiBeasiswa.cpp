#include <iostream>
using namespace std;

int main(){
    string nama, hasil, keterangan_prestasi;
    float ipk, penghasilan;
    bool prestasi;

    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan IPK: ";
    cin >> ipk;
    cout << "Masukkan penghasilan orang tua: ";
    cin >> penghasilan;
    cout << "Apakah memiliki prestasi juara nasional? (1 untuk ya, 0 untuk tidak): ";
    cin >> prestasi;

    if (prestasi == 1){
        keterangan_prestasi = "Ya";
    } else {
        keterangan_prestasi = "Tidak";
    }

    if (ipk >= 3.50 && penghasilan < 5000000){
        hasil = "Layak";
    } else if (prestasi == true){
        hasil = "Layak";
    } else {
        hasil = "Tidak Layak";
    }

    cout << "===== HASIL SELEKSI =====" << endl;
    cout << "Nama                   : " << nama << endl;
    cout << "IPK                    : " << ipk << endl;
    cout << "Penghasilan Orang Tua  : " << penghasilan << endl;
    cout << "Juara Nasional         : " << keterangan_prestasi << endl;
    cout << "Hasil Seleksi          : " << hasil << endl;
}