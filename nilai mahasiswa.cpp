#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    float tugas, uts, uas, nilaiAkhir;
    char nilaiHuruf;

    // Input data mahasiswa
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);

    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;

    cout << "Masukkan Nilai UTS: ";
    cin >> uts;

    cout << "Masukkan Nilai UAS: ";
    cin >> uas;

    // Menghitung nilai akhir
    nilaiAkhir = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);

    // Menentukan nilai huruf
    if (nilaiAkhir >= 80) {
        nilaiHuruf = 'A';
    } 
    else if (nilaiAkhir >= 70) {
        nilaiHuruf = 'B';
    } 
    else if (nilaiAkhir >= 60) {
        nilaiHuruf = 'C';
    } 
    else if (nilaiAkhir >= 50) {
        nilaiHuruf = 'D';
    } 
    else {
        nilaiHuruf = 'E';
    }

    // Menampilkan hasil
    cout << "\n=== HASIL NILAI MAHASISWA ===" << endl;
    cout << "Nama        : " << nama << endl;
    cout << "Nilai Tugas : " << tugas << endl;
    cout << "Nilai UTS   : " << uts << endl;
    cout << "Nilai UAS   : " << uas << endl;
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    cout << "Nilai Huruf : " << nilaiHuruf << endl;

    return 0;
}