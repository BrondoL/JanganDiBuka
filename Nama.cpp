#include <conio.h>
#include <iostream>

using namespace std;

int main()

{
	char nama[25];

	cout<<"Masukkan nama : ";
	gets(nama);
	cout<<"Nama Kamu adalah "<<nama<<endl;
	
// 	for(int i=0;i<jml;i++){
//     	for(int j=0;j<pnjgkata[i];j++){
//     		if((int)kata[i][j] < 97 || (int)kata[i][j] > 122)
//     			continue;
// 			else
//     			kata[i][j] = (char)((int)kata[i][j] - 32);
// 		}
// 	}
	
	getch();
	return 0;
}
