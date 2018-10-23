#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int menu, uang = 7000, lo = 0, bet;
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
	cout << "\n\t[3]. Judi Roulette";				
	cout << "\n\t[4]. Cairkan Uang";			
	cout << "\n\t[5]. Exit";
    cout << "\n\nMasukan Pilihan >> "; cin >> menu; cout<<endl<<endl; cin.ignore(); 
    system("clear");

//=====================================================================================================================

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
			BOLA:
			cout << "====================================";
        	cout << "\n            JUDI BOLA           ";
        	cout << "\n====================================";
			cout<<"\n\n[1].Tebak siapa yang menang !!";
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
				BET1:
				cout << "====================================";
        		cout << "\n            JUDI BOLA           ";
        		cout << "\n====================================";
				cout << "\n\nUang anda sekarang = " << uang;
				cout<<"\nMau taruhan berapa ? "; cin >> bet;
				if( bet > uang){
					cout << "\nUang anda tidak cukup";
					cin.ignore();
					cin.ignore();
        			system("clear");
					goto BET1;
				}
				cout<<"\n\n\tTebak siapa yang menang !!!";
				cout<<"\n\n[1] Tim A";
				cout<<"\n[2] Tim B";
				cout<<"\n[3] Seri";
				cout<<"\n\nPilihan anda : ";cin>>tebak;
		
				if (tebak == 3){
					if(tim_a == tim_b){
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("clear");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;	
					}
					else{
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang";
							cin.ignore();
							cin.ignore();
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;	
					}
				}
				else if(tebak == 1){
					if (tim_a>tim_b){
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("clear");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang";
							cin.ignore();
							cin.ignore();
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else if(tebak == 2){
					if (tim_a<tim_b){
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("clear");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;	
					}
					else {
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang";
							cin.ignore();
							cin.ignore();
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else{
					cout<<"\n\nPilihan tidak ada !!!";
				}

			}//================================================================================================================================
			else if(pilih==2){
				BET2:
				cout << "====================================";
        		cout << "\n            JUDI BOLA           ";
        		cout << "\n====================================";
				cout << "\n\nUang anda sekarang = " << uang;
				cout<<"\nMau taruhan berapa ? "; cin >> bet;
				if( bet > uang){
					cout << "\nUang anda tidak cukup";
					cin.ignore();
					cin.ignore();
        			system("clear");
					goto BET2;
				}
				cout<<"\n\n\tTebak jumlah skor Ganjil Genap !!!";
				cout<<"\n\n[1]. Genap";
				cout<<"\n[2]. Ganjil";
				cout<<"\n\nPilihan anda : ";cin>>tebak;
	
				if (tebak == 1){
					if((tim_a+tim_b)%2==0){
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("clear");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;
						}	
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang";
							cin.ignore();
							cin.ignore();
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else if(tebak == 2){
					if ((tim_a+tim_b)%2==1){
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("clear");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{
						system("clear");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang";
							cin.ignore();
							cin.ignore();
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
			else{
				cout<<"\n\nPilihan tidak ada !!!";
			}
			}
		}
	}//======================================================================================================================================
   
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
			ROULETTE:
            cout << "====================================";
            cout << "\n            JUDI ROULETTE           ";
            cout << "\n====================================";
            cout << "\n\nUang anda sekarang = " << uang;
            cout << "\nMau taruhan berapa ? "; cin >> bet;
			if( bet > uang){
					cout << "\nUang anda tidak cukup";
					cin.ignore();
					cin.ignore();
        			system("clear");
					goto ROULETTE;
			}
            cout << "\n\n\tTebak Warna Yang Keluar";
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
                    	system("clear");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                        cout << "\n\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\n\nUang anda sekarang = " << uang;
                        char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("clear");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto ROULETTE;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
                    }
                    else if(hasil==2){
                    	system("clear");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                    	cout << "\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\n\nUang anda sekarang = " << uang;
                        char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("clear");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto ROULETTE;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
					else{
						system("clear");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
						cout << "\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\n\nUang anda sekarang = " << uang;
                       char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("clear");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto ROULETTE;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
				}
                else if ((tebak >= 1) && (tebak < 4)){
                    if(hasil==1){
                    	system("clear");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                        cout << "\n\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang";
							cin.ignore();
							cin.ignore();
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
                    }
                    else if(hasil==2){
                    	system("clear");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                    	cout << "\n\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang";
							cin.ignore();
							cin.ignore();
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
					else{
						system("clear");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
						cout << "\n\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang";
							cin.ignore();
							cin.ignore();
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("clear");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
						}
					}
                    else{
                        cout << "\nPilihan tidak ada !";
                    }
			}
	}	

	else if(menu==4){
		system("clear");
		if (uang >= 1000000)
			cout << "KERJA TU YANG HALAL BIJI !!!"<<endl<<endl;
		else{
			cout << "\n\tUang anda belum mencapai Rp. 1000.000,00";
			cin.ignore();
			system("clear");
			goto MENU;
		}

	}

    else if(menu==5){
       	system("clear");
        cout << "++Exiting...";
        cin.ignore();
        system("clear");
        cout << "\n(^_^) Byeee " << nama << "  :p \n\n";
    }
        
    else{
    	cout << "\n\t*******************************************";
        cout << "\n\t*  Maaf menu tidak tersedia saat ini !!!  *";
        cout << "\n\t*******************************************";
        cin.ignore();
        system("clear");
        goto MENU;
	}

    return 0;
}