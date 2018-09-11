#include <iostream>
#include <conio.h>

using namespace std;

int main()

// Program Faktorial by Nabil
{
	long int a, f, angka;											// Tipe variabel a, f, angka adalah long integer
	
	cout << "========FAKTORIAL========" << endl;  					// Mencetak ====faktorial==== ke layar
	cout << "\n\nBerapa Faktorial ? " << endl;    					// Mencetak Berapa faktorial? ke layar			
	cin >> a;														// Menyimpan input dari user ke variabel a
	cout << a << "! = ";											// Mencetak nilai a dan != ke layar
	
	for (int x = a + 1; x > 1; x--)									// x adalah interger, yang ada di dalam for (init, kondisi/syarat, penambahan/pengurangan)
	{
		cout << x - 1;												// Mencetak nilai x dikurang 1 ke layar
			if (x - 1 > 1)											// Jika nilai x dikurang 1 lebih dari 1
			cout << " x ";											// Mencetak x ke layar
			else													// jika kondisi tidak terpenuhi
			cout << " = ";											// Mencetak = ke layar
	}
		//Algoritma menghitung nilai faktorialnya ( Intinya )
	f = a;															// Nilai F = a
	angka = a;														// Nilai angka = a
	
	while (a > 1)													// Jika nilai a lebih dari 1
	{
		a--;														// Nilai a dikurang 1
		f = f * a;													// Nilai f adalah f dikali a
	}
	cout << f;														// Mencetak nilai f
	cout << "\n\nJadi " << angka << " Faktorial adalah " << f;		// Mencetak jadi + (nilai dari angka) + faktorial adalah + nilai f
	
	getch();														// Agar Tampilan Output tidak langsung tertutup
	return 0;														// Kembali ke awal
}
