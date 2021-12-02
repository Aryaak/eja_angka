// PROGRAM PENGEJA ANGKA 4 DIGIT


#include <iostream>

using namespace std;

// Buat fungsi untuk validasi
bool validasi (int angka){
    
    bool hasil = true;
    
    // Cek digit angka
    if (angka > 9999){
        cout << "Angka harus terdiri dari 1-4 digit!";
        hasil = false;
    }
    
    
    return hasil;
    
}

// Buat fungsi untuk eja angka
string eja (int angka)
{
    
  // validasi angka
  if (!validasi(angka)){
      return "";
  }

  // Buat variabel untuk menyimpan angka mulai satuan sampai ribuan
  int satuan, belasan, puluhan, ratusan, ribuan;

  // Buat array untuk menyimpan ejaan nol sampai sembilan
  string ejaan[] =
    { "", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan",
"Sembilan" };

  // Cetak hasil

  // Negatif
  if (angka < 0)
    {
      cout << "Negatif " << eja (angka - 2 * angka);
    }

  // Satuan
  if (angka < 10)
    {
      cout << ejaan[angka];
    }

  // Belasan
  if (angka == 11)
    {
      cout << "Sebelas";
    }
  else if (angka > 10 && angka < 20)
    {
      cout << ejaan[angka % 10] << " Belas ";
    }

  // Puluhan
  if (angka == 10)
    {
      cout << "Sepuluh";
    }
  else if (angka > 20 && angka < 100)
    {
      cout << ejaan[angka / 10] << " Puluh " << eja (angka % 10);
    }

  // Seratusan
  if (angka >= 100 && angka < 200)
    {
      cout << "Seratus " << eja (angka % 100);
    }

  // Ratusan
  if (angka > 200 && angka < 1000)
    {
      cout << eja (angka / 100) << " Ratus " << eja (angka % 100);
    }


  // Seribuan 
  if (angka >= 1000 && angka < 2000)
    {
      cout << "Seribu " << eja (angka % 1000);
    }

  // Ribuan 
  if (angka > 2000)
    {
      cout << eja (angka / 1000) << " Ribu " << eja (angka % 1000);
    }

  return "";
}


int main ()
{
  cout << "======================= PROGRAM PENGEJA ANGKA 1-4 DIGIT =======================" << endl;
  
  cout << "============================ Created by Arya Rizky ============================" << endl << endl;
    
  // label start   
  mulai:
    
  // Buat variabel untuk menyimpan masukan angka
  int angka;

  // Masukan angka
  cout << "Masukan angka (1-4 digit): ";
  cin >> angka;
  
  cout << endl;

  // Panggil fungsi eja dengan mengirimkan variabel angka sebagai parameter
  eja (angka);
  
  cout << endl << endl << endl;
  
  // kembali ke awal dengan goto
  goto mulai;
  
  return 0;
}


