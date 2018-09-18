#include <iostream>
#include <math.h>

using namespace std;

int main()

{
	int menu;												// Deklarasi variabel menu sebagai integer

	cout << "=========KALKULATOR SEDERHANA=========";		// Menampilkan string KALKULATOR SEDERHANA
	cout << "\n\nAuthor : Ahmad Nabil";
	cout << "\n\nMenu Pilihan :";							// Menampilkan string Menu Pilihan
	cout << "\n\n\t[1]. Penjumlahan";						// Menampilkan menu yang ada
	cout << "\n\t[2]. Pengurangan";						    // Menampilkan menu yang ada
	cout << "\n\t[3]. Perkalian";							// Menampilkan menu yang ada
	cout << "\n\t[4]. Pembagian";							// Menampilkan menu yang ada
	cout << "\n\t[5]. Modulus";
	cout << "\n\nBONUS :";
	cout << "\n\n\t[6]. Perpangkatan";
	cout << "\n\t[7]. Faktorial";
	cout << "\n\nMasukan Pilihan >> "; cin >> menu;			// Menampilkan string Masukan pilihan dan menyimpan input ke variabel menu
											
	switch(menu)											// Pemilihan menu
	{
		case 1:												// Jika memilih menu 1
			float angka, ditambah, hasil;					// Deklarasi variabel angka, ditambah, dan hasil sebagai bilangan real
			cout <<"\n=====Penjumlahan====="<<endl;		    // Menampilkan string Penjumlahan
			cout <<"\nAngka ? "; cin >> angka;				// Menampilkan string Angka dan menyimpan input ke variabel angka
			cout <<"Ditambah ? "; cin >> ditambah;			// Menampilkan string Ditambah dan menyimpan input ke variabel ditambah
			hasil = angka + ditambah;						// Nilai hasil adalah nilai angka + nilai ditambah
			cout <<"\n\t"<< angka <<" + "<<ditambah<<" = "<<hasil<< endl; // Menampilkan nilai angka + nilai ditambah = nilai hasil
			break;											// Selesai menu 1

		case 2:												// Jika memilih menu 2
			float dikurang;									// Deklarasi variabel dikurang sebagai bilangan real
			cout <<"\n=====Pengurangan====="<<endl;			// Menampilkan string Pengurangan
			cout <<"\nAngka ? "; cin >> angka;				// Menampilkan string Angka dan meyimpan input ke variabel angka
			cout <<"Dikurang ? "; cin >> dikurang;			// Menampilkan string Dikurang dan menyimpan input ke variabel dikurang
			hasil = angka - dikurang;						// Nilai hasil adalah nilai angka - nilai dikurang
			cout <<"\n\t"<<angka<<" - "<<dikurang<<" = "<<hasil<<endl; // Menampilkan nilai angka - nilai dikurang = nilai hasil
			break;										    // selesai menu 2

		case 3:												// Jika memilih menu 3
			float dikali;									// Deklarasi variabel dikali sebagai bilangan real
			cout <<"\n=====Perkalian====="<<endl;		    // Menampilkan string Perkalian
			cout <<"\nAngka ? "; cin >> angka;				// Menampilkan string Angka dan meyimpan input ke variabel angka
			cout <<"Dikali ? "; cin >> dikali;				// Menampilkan string Dikali dan menyimpan input ke variabel dikali
			hasil = angka * dikali;							// Nilai hasil adalah nilai angka x nilai dikali
			cout <<"\n\t"<<angka<<" x "<<dikali<<" = "<<hasil<<endl; // Menampilkan nilai angka x nilai dikali = nilai hasil
			break;											// Selesai menu 3

		case 4:												// Jika memilih menu 4
			float dibagi;									// Deklarasi variabel dibagi sebagai bilangan real
			cout <<"\n=====Pembagian====="<<endl;		    // Menampilkan string Pembagian
			cout <<"\nAngka ? "; cin >> angka;				// Menampilkan string Angka dan meyimpan input ke variabel angka
			cout <<"Dibagi ? "; cin >> dibagi;				// Menampilkan string Dibagi dan menyimpan input ke variabel dibagi
			hasil = angka / dibagi;							// Nilai hasil adalah nilai angka : nilai dibagi
			cout <<"\n\t"<<angka<<" : "<<dibagi<<" = "<<hasil<<endl; // Menampilkan nilai angka : nilai dibagi = nilai hasil
			break;											// Selesai menu 4

		case 5:												// Jika memilih menu 5
			int mod, Angka;									// Deklarasi variabel mod dan Angka sebagai bilangan bulat
			cout <<"\n=====Modulus====="<<endl;		    	// Menampilkan string Modulus
			cout <<"\nAngka ? "; cin >> Angka;				// Menampilkan string Angka dan meyimpan input ke variabel Angka
			cout <<"Mod ? "; cin >> mod;					// Menampilkan string Mod dan menyimpan input ke variabel mod
			hasil = Angka % mod;							// Nilai hasil adalah nilai Angka mod nilai mod
			cout <<"\n\t"<<Angka<<" mod "<<mod<<" = "<<hasil<<endl; // Menampilkan nilai Angka mod nilai mod = nilai hasil
			break;											// Selesai menu 5

		case 6:													// Jika memilih menu 6
			float pangkat;										// Deklarasi variabel pangkat sebagai bilangan real
			cout <<"\n=====Perpangkatan====="<<endl;		    // Menampilkan string Perpangkatan
			cout <<"\nAngka ? "; cin >> angka;					// Menampilkan string Angka dan meyimpan input ke variabel angka
			cout <<"Pangkat ? "; cin >> pangkat;				// Menampilkan string Pangkat dan menyimpan input ke variabel pangkat
			hasil = pow(angka, pangkat);						// Nilai hasil adalah nilai angka ^ nilai pangkat
			cout <<"\n\t"<<angka<<" ^ "<<pangkat<<" = "<<hasil<<endl; // Menampilkan nilai angka ^ nilai pangkat = nilai hasil
			break;												// Selesai menu 6

		case 7:													// Jika memilih menu 7
			int faktorial, a, awal;								// Deklarasi variabel faktorial, a, dan awal sebagai bilangan bulat
			cout <<"\n=====Faktorial====="<<endl;			    // Menampilkan string Faktorial
			cout <<"\nBerapa Faktorial ? "; cin >> a;			// Menampilkan string Berapa Faktorial dan meyimpan input ke variabel a
			faktorial = a;										// Nilai faktorial = nilai a
			awal = a;											// Nilai angka = nilai a
			while (a > 1)										// Selama nilai a lebih dari 1
			{
				a--;											// Nilai a dikurang 1
				faktorial = faktorial * a;						// Nilai faktorial adalah nilai faktorial dikali nilai a
			}				
			cout <<"\n\t"<<awal<<" ! = "<<faktorial<<endl; 		// Menampilkan nilai angka ! = nilai faktorial
			break;				

		default:											    // Jika memilih selain yang terdapat di menu
			cout << "\n===============================";		// Menampilkan string =====
			cout << "\nBUAT SENDIRI, PEGEL TANGAN INI !!!" << endl;	// Menampilkan string Maaf Menu Tidak Tersedia
			cout << "===============================" << endl;	// Menampilkan string =====
	}

	return 0;
}
