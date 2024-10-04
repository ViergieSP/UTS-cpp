#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk penjumlahan
int penjumlahan(int a, int b) {
    return a + b;
}

// Fungsi untuk pengurangan
int pengurangan(int a, int b) {
    return a - b;
}

// Fungsi untuk perkalian
int perkalian(int a, int b) {
    return a * b;
}

// Fungsi untuk pembagian
float pembagian(int a, int b) {
    if (b == 0) {
        cout << "Pembagian dengan nol tidak dapat dilakukan!" << endl;
        return 0;
    } else {
        return (float)a / b;
    }
}

int main() {

    //Nomor 1

    cout<<"Nomor 1\n";

    string nama;
    float nilai_absen, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char huruf_mutu;

    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);

    cout << "Masukkan nilai absen (0-100): ";
    cin >> nilai_absen;

    cout << "Masukkan nilai tugas (0-100): ";
    cin >> nilai_tugas;

    cout << "Masukkan nilai UTS (0-100): ";
    cin >> nilai_uts;

    cout << "Masukkan nilai UAS (0-100): ";
    cin >> nilai_uas;

    // Hitung nilai akhir
    nilai_akhir = (nilai_absen * 0.1) + (nilai_tugas * 0.2) + (nilai_uts * 0.3) + (nilai_uas * 0.4);

    // Tentukan huruf mutu
    if (nilai_akhir >= 85 && nilai_akhir < 100) {
        huruf_mutu = 'A';
    } else if (nilai_akhir >= 80 && nilai_akhir < 85) {
        huruf_mutu = 'B';
    } else if (nilai_akhir >= 75 && nilai_akhir < 80) {
        huruf_mutu = 'C';
    } else if (nilai_akhir >= 70 && nilai_akhir < 75) {
        huruf_mutu = 'D';
    } else {
        huruf_mutu = 'E';
    }

    // Tampilkan hasil
    cout << "\nNama Mahasiswa: " << nama << endl;
    cout << "Nilai Akhir: " << nilai_akhir << endl;
    cout << "Huruf Mutu: " << huruf_mutu << endl;

    cout<<"\n\n";

    cout<<"Nomor 2\n";

    int angka;

    cout << "Masukkan Angka: ";
    cin >> angka;

    for (int i = 1; i <= angka; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout<<"\n\n";

    cout<<"Nomor 3\n";

    int pilihan, angka1, angka2;

    cout << "Pilih operasi matematika:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (pilihan) {
        case 1:
            cout << "Hasil dari penjumlahan untuk " << angka1 << " dan " << angka2 << " adalah " << penjumlahan(angka1, angka2) << endl;
            break;
        case 2:
            cout << "Hasil dari pengurangan untuk " << angka1 << " dan " << angka2 << " adalah " << pengurangan(angka1, angka2) << endl;
            break;
        case 3:
            cout << "Hasil dari perkalian untuk " << angka1 << " dan " << angka2 << " adalah " << perkalian(angka1, angka2) << endl;
            break;
        case 4:
            cout << "Hasil dari pembagian untuk " << angka1 << " dan " << angka2 << " adalah " << pembagian(angka1, angka2) << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    cout<<"\n\n";

    cout<<"Nomor 4\n";

    int n;

    cout << "Masukkan Angka: ";
    cin >> n;

    cout << "Bilangan Ganjil:" << endl;
    for (int i = 1; i <= n; i += 2) {
        cout << i << endl;
    }

    cout << "Bilangan Genap:" << endl;
    for (int i = 0; i <= n; i += 2) {
        cout << i << endl;
    }

    cout<<"\n\n";

    cout<<"Nomor 5";

    #include <iostream>

using namespace std;

    float berat, tinggi, imt;

    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;

    // Menghitung IMT
    imt = berat / (tinggi * tinggi);

    cout << "Indeks Massa Tubuh (IMT) Anda adalah: " << imt << endl;

    // Menentukan kriteria berdasarkan nilai IMT
    if (imt < 18.5) {
        cout << "Anda termasuk kategori berat badan kurang." << endl;
    } else if (imt >= 18.5 && imt <= 24.9) {
        cout << "Anda termasuk kategori berat badan ideal." << endl;
    } else if (imt >= 25 && imt <= 29.9) {
        cout << "Anda termasuk kategori berat badan lebih." << endl;
    } else if (imt >= 30 && imt <= 39.9) {
        cout << "Anda termasuk kategori gemuk." << endl;
    } else {
        cout << "Anda termasuk kategori sangat gemuk." << endl;
    }

    return 0;
}
