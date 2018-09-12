#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()

{
	int menu;
	
	system("color 02");
	cout << "=========KALKULATOR SEDERHANA=========";
	cout << "\n\nMenu Pilihan :";
	cout << "\n\n\t[1]. Penjumlahan";
	cout << "\n\t[2]. Pengurangan";
	cout << "\n\t[3]. Perkalian";
	cout << "\n\t[4]. Pembagian";
	cout << "\n\nMasukan Pilihan >> "; cin >> menu;
	
	switch(menu)
	{
		case 1:
			float angka, ditambah, hasil;
			cout <<"\n=====Penjumlahan====="<<endl;
			cout <<"\nAngka ? "; cin >> angka;
			cout <<"Ditambah ? "; cin >> ditambah;
			hasil = angka + ditambah;
			cout << "\n\t" << angka << " + " << ditambah << " = " << hasil << endl;
			break;
			
		case 2:
			float dikurang;
			cout <<"\n=====Pengurangan====="<<endl;
			cout <<"\nAngka ? "; cin >> angka;
			cout <<"Dikurang ? "; cin >> dikurang;
			hasil = angka - dikurang;
			cout << "\n\t" << angka << " - " << dikurang << " = " << hasil << endl;
			break;
			
		case 3:
			float dikali;
			cout <<"\n=====Perkalian====="<<endl;
			cout <<"\nAngka ? "; cin >> angka;
			cout <<"Dikali ? "; cin >> dikali;
			hasil = angka * dikali;
			cout << "\n\t" << angka << " x " << dikali << " = " << hasil << endl;
			break;
			
		case 4:
			float dibagi;
			cout <<"\n=====Pembagian====="<<endl;
			cout <<"\nAngka ? "; cin >> angka;
			cout <<"Dibagi ? "; cin >> dibagi;
			hasil = angka / dibagi;
			cout << "\n\t" << angka << " : " << dibagi << " = " << hasil << endl;
			break;
			
		default:
			cout << "\n===============================";
			cout << "\nMAAF MENU TIDAK TERSEDIA !!!" << endl;
			cout << "===============================" << endl;
	}
	
	getch();
	return 0;
}
