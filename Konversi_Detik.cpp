#include <iostream>
using namespace std;
int main()
{
	int detik, menit, jam;

	cout << "\t=====|Konversi Detik|=====";
	cout << "\n\nBerapa Detik ? ";
	cin >> detik;
	jam = detik / 3600;
	menit = detik / 60;
	detik = detik % 60;
	cout << endl << jam << "jam : " << menit << "menit : " << detik << "detik"<<endl;
	cin.ignore().get();
	system("clear");
	return 0;
}