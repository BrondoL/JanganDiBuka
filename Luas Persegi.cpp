#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	float p, l, luas;
	
	cout << "==========MENGHITUNG LUAS PERSEGI===========";
	cout << "\n\nBerapa Meter Panjangnya ?" << endl; cin >> p;
	cout << "Berapa Meter Lebarnya ?" << endl; cin >> l;
	
	luas = p * l;
	
	cout << "Luas dari persegi tersebut = " << luas << " m^2" << endl;
	
	getch();
	return 0;
}
