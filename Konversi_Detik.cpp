#include <iostream>
using namespace std;
int main()
{
	int detik, menit, jam, sisa;

	cout << "\t=====|Konversi Detik|=====";
	cout << "\n\nBerapa Detik ? ";
	cin >> detik;
	jam = detik / 3600; sisa = detik % 3600;
	menit = sisa / 60;
	detik = sisa % 60;
	cout << endl << jam << "jam : " << menit << "menit : " << detik << "detik"<<endl;
	cin.ignore().get();
	system("clear");
	return 0;
}
