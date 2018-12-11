#include <iostream>
using namespace std;

void satuan(long long angka);
void terbilang(long long angka);

int main()
{
	long long angka;
	cout<<"======PROGRAM MEMBACA BILANGAN=======\n";
	cout<<"Masukkan Angka: ";cin>>angka;
	if (angka==0)
	{cout<<"Nol ";}
	else 
	{terbilang(angka);}
}

void satuan(long long angka)
{
	if (angka==1)
	{cout<<"Satu ";}
	else if (angka==2)
	{cout<<"Dua ";}
	else if (angka==3)
	{cout<<"Tiga ";}
	else if (angka==4)
	{cout<<"Empat ";}
	else if (angka==5)
	{cout<<"Lima ";}
	else if (angka==6)
	{cout<<"Enam ";}
	else if (angka==7)
	{cout<<"Tujuh ";}
	else if (angka==8)
	{cout<<"Delapan ";}
	else if (angka==9)
	{cout<<"Sembilan ";}
	else if (angka==10)
	{cout<<"Sepuluh ";}
	else if (angka==11)
	{cout<<"Sebelas ";}
	
}

void terbilang(long long angka)
{
	if (angka<=11)
	{satuan(angka);}
	else if (angka>11&&angka<20)
	{terbilang(angka%10);
	cout<<" Belas ";}
	else if (angka>=20&&angka<100)
	{terbilang(angka/10);
	cout<<"Puluh ";
	satuan(angka%10);}
	else if (angka>=100&&angka<200)
	{cout<<"Seratus ";
	terbilang(angka%100);}
	else if (angka>=200&&angka<1000)
	{terbilang(angka/100);
	cout<<"Ratus ";
	terbilang(angka%100);}
	else if (angka>=1000&&angka<2000)
	{cout<<"Seribu ";
	terbilang(angka%1000);}
	else if (angka>=2000&&angka<1000000)
	{terbilang(angka/1000);
	cout<<"Ribu ";
	terbilang(angka%1000);}
	else if (angka>=1000000&&angka<1000000000)
	{terbilang(angka/1000000);
	cout<<"Juta ";
	terbilang(angka%1000000);}
	else if ((angka>=1000000000)&&(angka<20000000000))
	{terbilang(angka/1000000000);
	cout<<"Milyar ";
	terbilang(angka%1000000000);}
	
}
