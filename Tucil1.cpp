#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int menu, uang = 1000, lo = 0, bet;
	char nama[25] = {};
	MENU:
	cout << "========================================================";
	cout << "\n||           Coded By Abi and Akbar and Nabil         ||";
	cout << "\n||                      JUDI BERKAH                   ||";
	cout << "\n========================================================"<<endl<<endl;
	cout << "\t\t\tUsername   : " << nama;
	cout << "\n\t\t\tUang       : " << uang;
    cout << "\n\n\nMenu Pilihan :";							
	cout << "\n\n\t[1]. Login";						
	cout << "\n\t[2]. Judi Bola";						    
	cout << "\n\t[3]. Judi roulette";							
	cout << "\n\t[4]. Exit";
    cout << "\n\nMasukan Pilihan >> "; cin >> menu; cout<<endl<<endl; cin.ignore(); 
    system("clear");


    if(menu==1){
    	LOGIN:
    	int i;
        cout << "====================================";
	    cout << "\n                LOGIN               ";
	    cout << "\n====================================";
        cout << "\n\nMasukan Username kamu : "; cin.getline(nama, sizeof(nama));
    	
    	for(i = 0; nama[i] != '\0'; ++i);
    	if (i != 0){
        	cout << "Login Berhasil !!! ";
        	lo = 1;
        }
        else{
        	cout << "Login Gagal !!!";
        	cin.ignore();
        	system("clear");
        	goto LOGIN;
        }
        cin.ignore();
        system("clear");
        goto MENU;
    }
    
	else if(menu==2){
		int pilih,a,b,tim_a,tim_b,tebak,genap,ganjil,hasilGG;
		if (lo == 0){
			system("clear");
			cout << "\tMaaf Anda Belum Login !";
			cout << "\n\tSilahkan Login Dahulu !";
			cin.ignore();
			system("clear");
			goto MENU;
		}
		else{
			cout << "====================================";
        	cout << "\n            JUDI BOLA           ";
        	cout << "\n====================================";
			cout<<"\n[1].Tebak siapa yang menang !!";
			cout<<"\n[2].Tebak Skor Ganjil Genap !!";
			cout<<"\n\nPilih permainan yang ingin dimainkan : ";cin>>pilih;
			system("clear");
			srand(time(NULL));
			const char skor[10]={1,2,3,4,5,1,2,3,4,5};
			a = rand()%10;
			b = rand()%10;
			tim_a = skor[a];
			tim_b = skor[b];
			if (pilih==1){
				cout<<"Mau taruhan berapa ? "; cin >> bet;
				cout<<"\nTebak siapa yang menang !!!";
				cout<<"\n\n[1] Tim A";
				cout<<"\n[2] Tim B";
				cout<<"\n[3] Seri";
				cout<<"\n\nPilihan anda : ";cin>>tebak;
		
				if (tebak == 3){
					if(tim_a == tim_b){
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang;
					}
					else{
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nMaaf anda kurang beruntung";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang;
					}
				}
				else if(tebak == 1){
					if (tim_a>tim_b){
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang;
					}
					else{
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nMaaf anda kurang beruntung";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang;
					}
				}
				else if(tebak == 2){
					if (tim_a<tim_b){
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang;
					}
					else {
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nMaaf anda kurang beruntung";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang;
					}
				}
				else{
					cout<<"\n\nPilihan tidak ada !!!";
		
				}
			
			}
			else if(pilih==2){
				cout<<"Mau taruhan berapa ? "; cin >> bet;
				cout<<"Tebak jumlah skor Ganjil Genap !!!";
				cout<<"\n\n[1]. Genap";
				cout<<"\n[2]. Ganjil";
				cout<<"\n\nPilihan anda : ";cin>>tebak;
	
				if (tebak == 1){
					if((tim_a+tim_b)%2==0){
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang;
					}
					else{
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nMaaf anda kurang beruntung";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang;
					}
				}
				else if(tebak == 2){
					if ((tim_a+tim_b)%2==1){
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang;
					}
					else{
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
						cout<<"\n\nMaaf anda kurang beruntung";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang;
					}
				}
			else{
				cout<<"\n\nPilihan tidak ada !!!";
			}
			}
		}
	}
   
    else if(menu==3){
    	int tebak, hasil, a;
    	if (lo == 0){
			system("clear");
			cout << "\tMaaf Anda Belum Login !";
			cout << "\n\tSilahkan Login Dahulu !";
			cin.ignore();
			system("clear");
			goto MENU;
		}
		else{
            cout << "====================================";
            cout << "\n            JUDI ROULETTE           ";
            cout << "\n====================================";
            cout << "\n\nUang anda sekarang = " << uang;
            cout << "\nMau taruhan berapa ? "; cin >> bet;
            cout << "\n\nTebak Warna Yang Keluar";
            cout << "\n\n[1]. Merah (x2)";
            cout << "\n[2]. Biru  (x2)";
            cout << "\n[3]. Hitam (x6)";
            cout << "\n\nMasukan Pilihan >> "; cin >> tebak;
            srand(time(NULL));
            const char warna[9] = {1, 1, 1, 3, 2, 2, 2, 2, 1};
            a = rand()%9;
            hasil = warna[a];
                if (hasil == tebak){
                    if(hasil==1){
                        cout << "\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\nSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\nUang anda sekarang = " << uang;
                    }
                    else if(hasil==2){
                    	cout << "\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\nSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\nUang anda sekarang = " << uang;
					}
					else{
						cout << "\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\nSelamat anda MENANG !!!";
                        uang = uang + bet*6;
                        cout << "\nUang anda sekarang = " << uang;
					}
				}
                else if ((tebak >= 1) && (tebak < 4)){
                    if(hasil==1){
                        cout << "\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\nMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\nUang anda sekarang = " << uang;
                    }
                    else if(hasil==2){
                    	cout << "\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\nMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\nUang anda sekarang = " << uang;
					}
					else{
						cout << "\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\nMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\nUang anda sekarang = " << uang;
						}
					}
                    else{
                        cout << "\nPilihan tidak ada !";
                    }
			}
	}	

    else if(menu==4){
       	system("clear");
        cout << "++Exiting...";
        cin.ignore();
        system("clear");
        cout << "\n(^_^) Byeee " << nama << "  :p \n\n";
    }
        
    else{
        cout << "Maaf menu tidak tersedia saat ini !!!" << endl;
	}

    return 0;
}
