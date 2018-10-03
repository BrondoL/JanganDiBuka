#include <iostream>

using namespace std;

int main()
{
	float praktek, tugas, kuis, uts, uas, nilai, mutu;
	int npm;
	char matkul[25], nama[25], coba;
	string indeks;

	cout << "\t\t\t=================================";
	cout << "\n\t\t\t||        Coded By Nabil       ||";
	cout << "\n\t\t\t|| Menentukan indeks mahasiswa ||";
	cout << "\n\t\t\t================================="<<endl<<endl;
	HITUNG:
	cout << "Siapa nama anda ? "; cin.getline(nama, sizeof(nama));
	cout << "\nMata Kuliah apa yang anda ambil ? "; cin.getline(matkul, sizeof(matkul));
	cout << "\nBerapa NPM anda ? "; cin >> npm;
	cout << "\nMasukan nilai Praktikum anda = "; cin >> praktek;
	cout << "\nMasukan nilai Tugas anda = "; cin >>tugas;
	cout << "\nMasukan nilai Kuis anda = "; cin >> kuis;
	cout << "\nMasukan nilai UTS anda = "; cin >> uts;
	cout << "\nMasukan nilai UAS anda = "; cin >> uas;
	nilai = praktek*0.25 + tugas*0.2 + kuis*0.1 + uts*0.2 + uas*0.25;
	
	if (nilai >= 76)
	{
		indeks = 'A';
		mutu = 4;
	}
	else if ((nilai >= 71) && (nilai < 76))
	{
		indeks = "B+";
		mutu = 3.5;
	}
	else if ((nilai >= 66) && (nilai < 71))
	{
		indeks = 'B';
		mutu = 3;
	}
	else if ((nilai >= 61) && (nilai < 66))
	{
		indeks = "C+";
		mutu = 2.5;
	}
	else if ((nilai >= 56) && (nilai < 61))
	{
		indeks = 'C';
		mutu = 2;
	}
	else if ((nilai >= 51) && (nilai < 56))
	{
		indeks = 'D';
		mutu = 1;
	}
	else
	{
		indeks = 'E';
		mutu = 0;
	}
	system("clear");
	cout << "====================================";
	cout << "\n          HASIL PERHITUNGAN         ";
	cout << "\n====================================";
	cout << "\n\nSelamat kepada " << nama << " !";
	cout << "\nNPM : " << npm;
	cout << "\nPada mata kuliah " << matkul;
	cout << "\nAnda mendapatkan nilai " << nilai;
	cout << "\nDengan indeks yaitu " << indeks;
	cout << "\nDan Dengan Angka mutu yaitu " << mutu;
	if (mutu == 4)
		cout << "\nAnda akan diberi hadiah, yeay.."<<endl<<endl;
	else if (mutu == 0)
		cout << "\nHahahah anda harus mengulang tahun depan, Kasian deh lo... :v" <<endl<<endl;
	
	cin.ignore().get();
	system("clear");
	
	cout << "Apakah anda ingin mencoba lagi ? (Y/N) "; cin >> coba; 
	cout << "\n";
	COBA:
	if ((coba == 'Y') || (coba == 'y'))
	{
		cin.getline(nama, sizeof(nama));
		system("clear"); //Agar variabel nama ketika goto HITUNG tidak diignore
		goto HITUNG;
	}
	else if ((coba == 'N') || (coba == 'n'))
	{
		system("clear");
		cout << "++Exiting...";
		cin.ignore().get();
		system("clear");
		cout << "\n(^_^) Byeee " << nama << "  :p \n\n";
	}
	else
	{
		cout << "Iya(Y) apa Enggak(N) ni.. ? ";
		cin >> coba;
		system("clear");
		goto COBA;
	}

	return 0;
}
