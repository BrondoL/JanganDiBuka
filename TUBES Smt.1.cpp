#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdio>

using namespace std;

void login(){

  	int i = 0;
	string user, passwd;
	cout << "=======================================================";
	cout << "\n\n                      LOGIN                          "<<endl;
	cout << "\n======================================================="<<endl<<endl;
   	do {
    	cout << "Username   : "; getline(cin, user);
		cout << "\nPassword   : "; getline(cin, passwd);

 		if (user=="admin" && passwd=="admin") {
         	cout << "\n--------------------\n";
          	cout << "Anda Berhasil Login" << endl;
         	cout << "--------------------\n\n";
         	break;
      	}else {
          	cout << "\n------------------------\n";
         	cout << "Maaf ID & PASSWORD Salah!" << endl;
         	cout << "-------------------------\n\n";
        	i = i + 1;
     	}
 	  }while (i < 3);
 	 if(i == 3){
 	 	system("cls");
   		cout << "Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
   		cout << "Mohon Maaf Akun Anda Kami Blockir, Terima Kasih..";
   		exit(0);

   	 }

   	getch();
   	}

void loading(){
	system("cls");
	system("color 0a");
 	cout<<"\n\n\n\t\t    LOADING...\n\n";
 	char a=177, b=219;
 	cout<<"\t\t";
 	for (int i=0;i<=15;i++){
 	cout<<a;
	}
 	cout<<"\r";
 	cout<<"\t\t";
 	for (int i=0;i<=15;i++){
 		cout<<b;
  		Sleep(300);
 	}
 	system("color 07");
}

void wtrmark(){
    system("cls");
	cout << "============================================================";
	cout << "\n\n                   WELCOME TO TABUNGANKU.COM                 "<<endl;
	cout << "\n============================================================"<<endl<<endl<<endl;

}

int main(){
	login();
	loading();
	int i = 0,menu2;
	unsigned int total=0;	
	MENU:
	wtrmark();
	int menu;
	cout << "MENU : "<<endl<<endl;
	cout << "1. Input Laporan"<<endl;
	cout << "2. Output Laporan"<<endl;
	cout << "3. Jumlah Uang"<<endl;
	cout << "4. Exit"<<endl<<endl;
	cout << "Pilihan : "; cin >> menu;
	
	system("cls");

	switch(menu)
	{
		case 1: //============================================================================== MENU 1
				wtrmark();
				cout << "--------------------- INPUT LAPORAN ------------------------"<<endl<<endl;
				INPUT:
				char lagi,kembali, barang[1000][1000],jenis[1000][12];
				unsigned int uang[1000];
				cout << i+1 << ". Deskripsi Laporan	: ";cin.ignore();gets(barang[i]);
				cout << "\n   Jumlah Uang		: "; cin >> uang[i];
				
				cout << "   ----------------------";
				cout << "\n   Jenis Tabungan : "<<endl;
				cout << "   1. Pengeluaran"<<endl;
				cout << "   2. Pendapatan"<<endl;
				cout << "   Pilihan : "; cin >> menu2;
				if (uang[i] > total && menu2 == 1){
					cout << "\n   Uang tidak cukup. Input dibatalkan";
				}else if(uang[i] <= total && menu2 == 1){
					total = total - uang[i];
					strcpy(jenis[i], "Pengeluaran");
					i = i + 1;
				}else if(menu2 == 2){
					total = total + uang[i];
					strcpy(jenis[i], "Pendapatan");
					i = i + 1;
				}
				cout << "\n\n   Ingin menambah data lagi (y/n) ? ";cin >> lagi;cout << endl;
				if (lagi == 'y'||lagi == 'Y'){	
					goto INPUT;
				}else{
					cout << "\n   Apakah ingin kembali ke Menu (y/n) ? ";cin>>kembali;
					if (kembali == 'y'||kembali == 'Y'){
						system("cls");
						goto MENU;
					}else{
						cout << "\n   Exit";
						system("pause");
						exit(0);
					}
				}
		break;
		
		case 2: //============================================================================ MENU 2
				loading();
				wtrmark();
				cout << "--------------------- LAPORAN TABUNGAN ---------------------"<<endl<<endl;
				for (int j=0;j<i;j++){
					cout << "\n "<<j+1<<". Deskripsi Laporan 		: "<<barang[j]<<endl;
					cout << "    Jumlah uang			: "<<uang[j]<<endl;
					cout << "    jenis			: "<<jenis[j]<<endl<<endl;
				}
				getch();
				cout << "\n   Apakah ingin kembali ke Menu (y/n) ? ";cin>>kembali;
				if (kembali == 'y'||kembali == 'Y'){
					system("cls");
					goto MENU;
				}else{
					cout << "\n   Exit";
					system("pause");
					exit(0);
				}
		break;
	
		case 3: //===================================================================== MENU 3
				loading();
				wtrmark();
				cout << "--------------------- LAPORAN KEUANGAN ---------------------"<<endl<<endl;
				cout << "\n    Total uang sekarang adalah "<< total;
				getch();
				cout << "\n\n   Apakah ingin kembali ke Menu (y/n) ? ";cin>>kembali;
				if (kembali == 'y'||kembali == 'Y'){
					system("cls");
					goto MENU;
				}else if(kembali == 'n'||kembali == 'N'){
					cout << "\n   Exit";
					system("pause");
					exit(0);
				}
		break;
		
		case 4:
				exit(0);
		break;
		
		default:
				wtrmark();
				cout <<"\t\nPilihan tidak ada";
				getch();
				system("cls");
				goto MENU;
	}





	return 0;
}
