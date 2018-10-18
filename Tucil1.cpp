#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{	
	cout << "\t\t\t==============================================";
	cout << "\n\t\t\t||           Coded By Abi and Akbar         ||";
	cout << "\n\t\t\t||                JUDI BERKAH               ||";
	cout << "\n\t\t\t=============================================="<<endl<<endl;
    
    int menu;
    cout << "\n\nMenu Pilihan :";							
	cout << "\n\n\t[1]. Login";						
	cout << "\n\t[2]. Judi Bola";						    
	cout << "\n\t[3]. Judi roulette";							
	cout << "\n\t[4]. Exit";
    cout << "\n\nMasukan Pilihan >> "; cin >> menu; cout<<endl<<endl;
    system("clear");


    switch(menu)
    {
        case 1:
        
            char nama[25];
            cout << "====================================";
	        cout << "\n                LOGIN               ";
	        cout << "\n====================================";
            cout << "\n\nMasukan Username kamu : "; cin.ignore(); 
            cin.getline(nama, sizeof(nama));
            cout << "Login Berhasil !!! ";

        break;
        
        case 2:

            cout << "Belom Jadi, Santuy";

        break;

        case 3:

         {
            int tebak, hasil, a;
            cout << "====================================";
            cout << "\n            JUDI ROULETTE           ";
            cout << "\n====================================";
            cout << "\n\nTebak Warna Yang Keluar";
            cout << "\n[1]. Merah (x1)";
            cout << "\n[2]. Biru  (x2)";
            cout << "\n[3]. Hitam (x3)";
            cout << "\n\nMasukan Pilihan >> "; cin >> tebak;
                srand(time(NULL));
                const char warna[10] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3};
                a = rand()%10;
                hasil = warna[a];
                    if (hasil == tebak){
                        cout << "\nWarna yang keluar adalah NO." << hasil;
                        cout << "\n\nSelamat anda MENANG !!!";
                    }
                    else if ((tebak >= 1) && (tebak < 4)){
                        cout << "\nWarna yang keluar adalah No. " << hasil;
                        cout << "\n\nMaaf anda kurang beruntung, silahkan coba lagi !!!";
                    }
                    else{
                        cout << "\nPilihan tidak ada !";
                    }

        break;
         }

        case 4:

            system("clear");
            cout << "++Exiting...";
            cin.ignore().get();
            system("clear");
            cout << "\n(^_^) Byeee " << nama << "  :p \n\n";

        break;
        
        default:
            cout << "salah";

    }

  
    return 0;

}
