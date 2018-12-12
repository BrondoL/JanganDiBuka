#include<iostream>                  //mengaktifkan cout,cin,endl,dll.
#include<conio.h>                   //mengaktifkan getch.
#include<stdlib.h>                  //mengaktifkan system cls dan system warna.
using namespace std;
void header(){   //membuat fungsi untuk mencetak header..
    system("cls");
    cout<<" ___________________________________________________________________________________\n";
    cout<<"|                                                                                   |\n";
    cout<<"|                        ================================                           |\n";
    cout<<"|                        |           Pemesanan          |                           |\n";
    cout<<"|                        |         Tiket Bioskop        |                           |\n";
    cout<<"|                        ================================                           |\n";
    cout<<"|___________________________________________________________________________________|\n";
}
void time(){                                    //membuat fungsi untuk mencetak time.
    cout<<" ___________________________________________________________________________________ \n";
    cout<<"|                                                                                   |\n";
    cout<<"|                   | 12:30 | 14:35 | 16:40 | 18:45 | 20:50 |                       |\n";
    cout<<"|___________________________________________________________________________________|\n";
    cout<<endl;
}

void harii(){
    system("cls");
    header();
    cout<<" ___________________________________________________________________________________ \n";
    cout<<"|                                                                                   |\n";
    cout<<"|          | senin | selasa | rabu | kamis | jumat | sabtu | minggu|                |\n";
    cout<<"|___________________________________________________________________________________|\n";
}

void kursii(){                                  //membuat fungsi untuk mencetak kursi.
	cout<<"\t\t     -----------------------------------------\n";
	cout<<"\t\t                       LAYAR \n";
	cout<<"\t\t     -----------------------------------------\n";
	cout<<"\t\t     1   2   3   4   5      6   7   8   9   10\n";
	cout<<"\t\t     -----------------------------------------\n";
	cout<<"\t\t     11  12  13  14  15     16  17  18  19  20\n";
	cout<<"\t\t     -----------------------------------------\n";
	cout<<"\t\t     21  22  23  24  25     26  27  28  29  30\n";
	cout<<"\t\t     -----------------------------------------\n";
	cout<<"\t\t     31  32  33  34  35     36  37  38  39  40\n";
	cout<<"\t\t     -----------------------------------------\n";
	cout<<"\t\t     41  42  43  44  45     46  47  48  49  50\n";
	cout<<"\t\t     -----------------------------------------\n";
}

void closing(){                                 //membuat fungsi untuk mencetak closing.
    cout<<"\t\t\t\t====================================\n";
    cout<<"\t\t\t\t             Terimaksih\n";
    cout<<"\t\t\t\t Silahkan Tunjukan Barcode di bawah\n";
    cout<<"\t\t\t\t           pada mesin scan\n";
    cout<<"\t\t\t\t                                    \n";
    cout<<"\t\t\t\t         |||||||||||||||||||       \n";
    cout<<"\t\t\t\t         |||||||||||||||||||       \n";
    cout<<"\t\t\t\t         |||||||||||||||||||       \n";
    cout<<"\t\t\t\t         109 313 1333 785 54       \n";
    cout<<"\t\t\t\t====================================\n";
    cout<<"\t\t\t\t Silahkan transfer ke rekening kami \n";
    cout<<"\t\t\t\t           580801026648532\n";
    cout<<"\t\t\t\t        atas nama \"CINEMA XXI\"\n";
}
int main(){
    int pilih,kode, hargatiket,tiket,jmlh,kursi1[50]; //deklarasi variabel.
    hargatiket=50000;               //menentukan harga tiket.
    char lanjut;
    string waktu = "";              //deklarasi waktu.
    string kursi = "";              //deklarasi kursi.
    string hari = "";
    menu:                           // membuat bagian menu.
    system("cls");                  // menghapus layar untuk melanjutkan ke layar selanjutnya.
    header();                       // memanggil fungsi header yang telah dibuat.
    cout<<" ___________________________________________________________________________________\n";
    cout<<"|                                                                                   |\n";
    cout<<"|                        --------------    --------------                           |\n";
    cout<<"|                        |  1. Film   |    | 2. Bantuan |                           |\n";
    cout<<"|                        --------------    --------------                           |\n";
    cout<<"|                                 --------------                                    |\n";
    cout<<"|                                 | 3. Keluar  |                                    |\n";
    cout<<"|                                 --------------                                    |\n";
    cout<<"|___________________________________________________________________________________|\n";
    cout<<"\n";
	cout<<"Pilih menu (1/2/3): ";cin>>pilih;
    if(pilih==1){                               //percabangan untuk memilih pilih 1.
        system("cls");
        header();
        cout<<" ___________________________________________________________________________________\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                  Judul Film:                                      |\n";
        cout<<"|                                  1. Suzzana                                       |\n";
        cout<<"|                                  2. Robin Hood                                    |\n";
        cout<<"|                                  3. Venom                                         |\n";
        cout<<"|                                  4. Fantastic Beast 2                             |\n";
        cout<<"|___________________________________________________________________________________|\n";
        cout<<"\t\t\t\tPilih kode Film (1/2/3/4) : ";cin>>kode;
        cout<<endl;
        if(kode==1){                            //percabangan untuk memilih kode 1
            system("cls");
            header();
            cout<<" ___________________________________________________________________________________\n";
            cout<<"|                                                                                   |\n";
            cout<<"|                                   -------------                                   |\n";
            cout<<"|                                      Suzzana                                      |\n";
            cout<<"|                                   -------------                                   |\n";
            cout<<"| Sinopsis :                                                                        |\n";
            cout<<"| Suzzanna dan Satria sudah menikah selama tujuh tahun tetapi mereka belum juga     |\n";
            cout<<"| dikaruniai anak. Mereka tinggal di sebuah rumah bersama tiga pembantunya: Mia,    |\n";
            cout<<"| Tohir, dan Pak Rojali,. Kehamilan Suzanna yang ditunggu-tunggu akhirnya terjadi,  |\n";
            cout<<"| namun sayangnya bertepatan dengan rencana dinas Satria ke luar negeri. Hal ini    |\n";
            cout<<"| dimanfaatkan empat karyawan Satria: Jonal, Umar, Dudun, dan Gino, yang menyimpan  |\n";
            cout<<"| dendam kepada Satria dan berniat merampok rumah Satria ketika rumahnya sepi.      |\n";
            cout<<"| Namun naas, rencana perampokan mereka justru berubah menjadi sebuah pembunuhan    |\n";
            cout<<"| ketika Suzanna yang seharusnya pergi bersama tiga pembantunya ternyata pulang     |\n";
            cout<<"| sendiri karena kondisi tubuh yang sedang lemah. Panik, mereka lalu mengubur       |\n";
            cout<<"| jenazah Suzzanna di belakang rumah.                                               |\n";
            cout<<"| Anehnya, keesokan hari, Suzzanna tetap beraktivitas seperti biasa di rumahnya,    |\n";
            cout<<"| seperti tak terjadi apa-apa. Apakah Suzzanna sebenarnya masih hidup?              |\n";
            cout<<"| Apakah Suzzanna berhasil memenuhi janjinya untuk menunggu Satria pulang?          |\n";
            cout<<"|___________________________________________________________________________________|\n";
            cout<<" Apakah ingin melanjutkan memilih waktu tayang? (Y/T): ";cin>>lanjut;  //memasukkan pilihan Y/T
            while(lanjut=='T'||lanjut=='t')                 //(looping) jika T/t kembali ke menu, jika Y/y lanjut ke menu jam1
                goto menu; //perulangan kembali ke menu yang di tuju
            hari1:
            harii();
            cout<<"\t\tPilih hari (tulis hari sesuai pilihan) : ";cin>>hari;
            if(hari=="senin"){}                            //cetak waktu
            else if(hari=="selasa"){}
            else if(hari=="rabu"){}
            else if(hari=="kamis"){}
            else if(hari=="jumat"){}
            else if(hari=="sabtu"){}
            else if(hari=="minggu"){}
            else{                                           //jika memilih waktu yang tidak tersedia
            	cout<<"\t\tHari yang anda masukkan tidak sesuai pilihan.\n";
            	cout<<"\t\tPress any key to continue...";
            	getch();                            //menahan program agar tidak langsung ke menu selanjutnya
            	goto hari1;
            }
			time();
			jam1:               // meamaggil fungsi time
            cout<<"\t\tPilih Waktu Tayang(tulis waktu sesuai pilihan) : ";cin>>waktu;  //memilih waktu
            if(waktu=="12:30"){}                            //cetak waktu
            else if(waktu=="14:35"){}
            else if(waktu=="16:40"){}
            else if(waktu=="18:45"){}
            else if(waktu=="20:50"){}
            else{                                           //jika memilih waktu yang tidak tersedia
            	cout<<"\t\tWaktu yang anda masukkan salah.\n";
            	cout<<"\t\tPress any key to continue...\n";
            	getch();                            //menahan program agar tidak langsung ke menu selanjutnya
            	goto jam1;                          //perulangan kembali ke menu jam1
			}
			baliktiket:             //membuat menu tiket
            cout<<"\t\tJumlah Tiket : ";cin>>tiket;     //masukkan jumlah tiket
            if(tiket<=20){}                                 //cetak jumlah tiket
            else{                                           //kondisi ketika tiket lebih dari 20
                cout<<"\t\tAnda tidak bisa memesan lebih dari 20 tiket.\n";
                cout<<"\t\tPress any key to continue...\n";
                getch();
                system("cls");
                header();
                cout<<"\t\tWaktu yang anda pesan adalah hari "+hari+" pukul "+waktu+" WIB.\n";
                goto baliktiket;                            //perulangan balik ke menu baliktiket
                }
            cout<<"\t\tUang yang harus dibayar : Rp. "<<tiket*hargatiket<<endl; //memanggil harga tiket yang harus dibayar
            kursii();                                                   //memanggil fungsi kursi
    		pilih:
    		for (int i=1;i<=tiket;i++){          //perulangan syarat untuk memasukkan jumlah kursi sebanyak kursi yang dipilih
    			cout<<"\t\tMasukkan pilihan kursi: "; cin>>kursi1[i]; //memasukkan pilihan kursi dengan menggunakan array
            if(kursi1[i]>50){   //looping saat kondisi memasukkan pilihan kursi lebih dari 50
                cout<<"\t\tKursi yang anda pilih tidak ada. Masukkan Ulang!"<<endl;
                goto pilih;                                 //perulangan kembali ke menu pilih
    	    }
    		else{}
        	}
            system("cls");
            cout<<"\t\t\t\t __________________________________\n";
            cout<<"\t\t\t\t|                                  |\n";
            cout<<"\t\t\t\t       =======================      \n";
            cout<<"\t\t\t\t|       Tiket Yang Anda Pesan      |\n";
            cout<<"\t\t\t\t       =======================      \n";
            cout<<"\t\t\t\t|                                  |\n";
            cout<<"\t\t\t\t   Judul Film : Suzzana     \n";
            cout<<"\t\t\t\t|  Waktu tayang : "+hari+", "+waktu+"     |\n";  //memanggil waktu yang telah dipilih sebelumnya
            cout<<"\t\t\t\t   Kursi : ";
            for (int a=1;a<=tiket;a++){                                  //syarat untuk memilih kursi berulang
        	cout<<""<<kursi1[a]<<" ";                                   //meamnggil fungsi kursi array sebelumnya
        	}
            cout<<"\n\t\t\t        |  Jumlah Tiket : "<<tiket<<"                |\n"; //memanggil jumlah tiket
            cout<<"\t\t\t\t   Teater : 1                        \n";
            cout<<"\t\t\t\t|  Harga : Rp. "<<tiket*hargatiket<<"              |\n"; //memanggil harga tiket sesuai dgn jumlah tiket yang dipesan
            cout<<"\t\t\t\t __________________________________ \n\n";
            getch();
            closing();                                      // memanggil fungsi closing
            getch();
            exit(1);                                        //keluar program
        }
        if(kode==2){
            system("cls");
            header();
            cout<<" ___________________________________________________________________________________\n";
            cout<<"|                                                                                   |\n";
            cout<<"|                                   ------------                                    |\n";
            cout<<"|                                    Robin Hood                                     |\n";
            cout<<"|                                   ------------                                    |\n";
            cout<<"| Sinopsis :                                                                        |\n";
            cout<<"| Robin Hood (Taron Egerton) adalah seorang tentara salib yang kembali ke negaranya.|\n";
            cout<<"| Ia menemukan sebuah fakta kalau para penguasa melakukan tindak korupsi dengan     |\n";
            cout<<"| menghambur-hamburkan uang negara. Robin Hood semakin miris setelah tahu kalau     |\n";
            cout<<"| rakyat justru hidup sengsara. Robin Hood pun berniat menjatuhkan penguasa Inggris |\n";
            cout<<"| yang korup. Ia berlatih memanah pada Little John (Jamie Foxx) dan mereka pun      |\n";
            cout<<"| bekerja sama untuk menengakkan keadilan.                                          |\n";
            cout<<"|___________________________________________________________________________________|\n";
            cout<<"Apakah ingin melanjutkan memilih waktu tayang? (Y/T): ";cin>>lanjut;
            while(lanjut=='T'||lanjut=='t')
                goto menu;
            hari2:
            harii();
            cout<<"\t\tPilih hari (tulis hari sesuai pilihan) : ";cin>>hari;
            if(hari=="senin"){}                            //cetak waktu
            else if(hari=="selasa"){}
            else if(hari=="rabu"){}
            else if(hari=="kamis"){}
            else if(hari=="jumat"){}
            else if(hari=="sabtu"){}
            else if(hari=="minggu"){}
            else{                                           //jika memilih waktu yang tidak tersedia
            	cout<<"\t\tHari yang anda masukkan tidak sesuai pilihan.\n";
            	cout<<"\t\tPress any key to continue...";
            	getch();                            //menahan program agar tidak langsung ke menu selanjutnya
            	goto hari2;
            }
			time();
			jam2:               // meamaggil fungsi time
            cout<<"\t\tPilih Waktu Tayang(tulis waktu sesuai pilihan) : ";cin>>waktu;  //memilih waktu
            if(waktu=="12:30"){}                            //cetak waktu
            else if(waktu=="14:35"){}
            else if(waktu=="16:40"){}
            else if(waktu=="18:45"){}
            else if(waktu=="20:50"){}
            else{                                           //jika memilih waktu yang tidak tersedia
            	cout<<"\t\tWaktu yang anda masukkan salah.\n";
            	cout<<"\t\tPress any key to continue...\n";
            	getch();                            //menahan program agar tidak langsung ke menu selanjutnya
            	goto jam2;                          //perulangan kembali ke menu jam1
			}
			baliktiket2:
            cout<<"\t\tJumlah Tiket : ";cin>>tiket;
            if(tiket<=20){}
            else{
                cout<<"\t\tAnda tidak bisa memesan lebih dari 20 tiket.\n";
                cout<<"\t\tPress any key to continue...\n";
                getch();
                system("cls");
                header();
                cout<<"\t\tWaktu yang anda pesan adalah hari "+hari+" pukul "+waktu+" WIB.\n";
                goto baliktiket2;
                }
            cout<<"\t\tUang yang harus dibayar : Rp. "<<tiket*hargatiket<<endl;
            kursii();
    		pilih1:
    		for (int i=1;i<=tiket;i++){
    			cout<<"\t\tMasukkan pilihan kursi: "; cin>>kursi1[i];
    		if(kursi1[i]>50){
    		cout<<"\t\tKursi yang anda pilih tidak ada. Masukkan Ulang!"<<endl;
                goto pilih1;
    	    }
    		else{}
        	}
            system("cls");
            cout<<"\t\t\t\t __________________________________\n";
            cout<<"\t\t\t\t|                                  |\n";
            cout<<"\t\t\t\t       =======================      \n";
            cout<<"\t\t\t\t|       Tiket Yang Anda Pesan      |\n";
            cout<<"\t\t\t\t       =======================      \n";
            cout<<"\t\t\t\t|                                  |\n";
            cout<<"\t\t\t\t   Judul Film : Robin Hood     \n";
            cout<<"\t\t\t\t|  Waktu tayang : "+hari+", "+waktu+"     |\n";
            cout<<"\t\t\t\t   Kursi : ";
             for (int a=1;a<=tiket;a++){
        	cout<<""<<kursi1[a]<<" ";
        	}
            cout<<"\n\t\t\t        |  Jumlah Tiket : "<<tiket<<"                |\n";
            cout<<"\t\t\t\t   Teater : 2                        \n";
            cout<<"\t\t\t\t|  Harga : Rp. "<<tiket*hargatiket<<"              |\n";
            cout<<"\t\t\t\t __________________________________ \n\n";
            getch();
            closing();
            getch();
            exit(1);
        }
        if (kode==3){
            system("cls");
            header();
            cout<<" ___________________________________________________________________________________\n";
            cout<<"|                                                                                   |\n";
            cout<<"|                                   ------------                                    |\n";
            cout<<"|                                       Venom                                       |\n";
            cout<<"|                                   ------------                                    |\n";
            cout<<"| Sinopsis :                                                                        |\n";
            cout<<"| Life Foundations selalu ingin tampil baik dalam mengembangkan ilmu pengetahuan.   |\n";
            cout<<"| Sayangnya, ini tidak terlintas sama sekali di pikiran Eddie Brock (Tom Hardy).    |\n";
            cout<<"| Seorang jurnalis yang karirnya sedang diambang kehancuran. Berbagai investigasi   |\n";
            cout<<"| dilakukan Eddie untuk mengetahui apa yang sebenarnya terjadi dengan ilmu          |\n";
            cout<<"| pengetahuan yang dikembangkan oleh Life Foundations. Sayangnya, usaha Eddie selalu|\n";
            cout<<"| mengalami kegagalan. Dr. Carlton Drake (Riz Ahmed), pemimpin Life Foundations     |\n";
            cout<<"| mulai gerah dengan investigasi Eddie. Ia seperti ingin menyimpan rahasian ilmu    |\n";
            cout<<"| pengethauannya dalam-dalam. Semakin Eddie ingin menggali, semakin rapat pula      |\n";
            cout<<"| rahasia yang ingin disimpan oleh Dr. Carlton.                                     |\n";
            cout<<"| Sampai pada suatu waktu, Eddie menemukan hal yang aneh sekaligus mengerikan.      |\n";
            cout<<"| Sebuah organik yang disebut Symbiote membuatnya penasaran. Di satu sisi,          |\n";
            cout<<"| Dr. Carlton tidak ingin Symbiote ini terungkap. Ada harga yang harus dibayar      |\n";
            cout<<"| mahal untuk semua ini, bagi Eddie dan Dr. Carlton. Lalu, siapa sosok venom        |\n";
            cout<<"| sebenarnya? Benarkan Symbiote ini bisa membantu manusia mencapai keinginannya?    |\n";
            cout<<"|___________________________________________________________________________________|\n";
            cout<<"Apakah ingin melanjutkan memilih waktu tayang? (Y/T): ";cin>>lanjut;
            while(lanjut=='T'||lanjut=='t')
                goto menu;
            hari3:
            harii();
            cout<<"\t\tPilih hari (tulis hari sesuai pilihan) : ";cin>>hari;
            if(hari=="senin"){}                            //cetak waktu
            else if(hari=="selasa"){}
            else if(hari=="rabu"){}
            else if(hari=="kamis"){}
            else if(hari=="jumat"){}
            else if(hari=="sabtu"){}
            else if(hari=="minggu"){}
            else{                                           //jika memilih waktu yang tidak tersedia
            	cout<<"\t\tHari yang anda masukkan tidak sesuai pilihan.\n";
            	cout<<"\t\tPress any key to continue...";
            	getch();                            //menahan program agar tidak langsung ke menu selanjutnya
            	goto hari3;
            }
			time();
			jam3:               // meamaggil fungsi time
            cout<<"\t\tPilih Waktu Tayang(tulis waktu sesuai pilihan) : ";cin>>waktu;  //memilih waktu
            if(waktu=="12:30"){}                            //cetak waktu
            else if(waktu=="14:35"){}
            else if(waktu=="16:40"){}
            else if(waktu=="18:45"){}
            else if(waktu=="20:50"){}
            else{                                           //jika memilih waktu yang tidak tersedia
            	cout<<"\t\tWaktu yang anda masukkan salah.\n";
            	cout<<"\t\tPress any key to continue...\n";
            	getch();                            //menahan program agar tidak langsung ke menu selanjutnya
            	goto jam3;                          //perulangan kembali ke menu jam1
			}
			baliktiket3:
            cout<<"\t\tJumlah Tiket : ";cin>>tiket;
            if(tiket<=20){}
            else{
                cout<<"\t\tAnda tidak bisa memesan lebih dari 20 tiket.\n";
                cout<<"\t\tPress any key to continue...\n";
                getch();
                system("cls");
                header();
                cout<<"\t\tWaktu yang anda pesan adalah hari "+hari+" pukul "+waktu+" WIB.\n";
                goto baliktiket3;
                }
            cout<<"\t\tUang yang harus dibayar : Rp. "<<tiket*hargatiket<<endl;
            kursii();
    		pilih2:
    		for (int i=1;i<=tiket;i++){
    			cout<<"\t\tMasukkan pilihan kursi: "; cin>>kursi1[i];
            if(kursi1[i]>50){
                cout<<"\t\tKursi yang anda pilih tidak ada. Masukkan Ulang!"<<endl;
                goto pilih2;
                }
    		else{}
        	}
            system("cls");
            cout<<"\t\t\t\t __________________________________\n";
            cout<<"\t\t\t\t|                                  |\n";
            cout<<"\t\t\t\t       =======================      \n";
            cout<<"\t\t\t\t|       Tiket Yang Anda Pesan      |\n";
            cout<<"\t\t\t\t       =======================      \n";
            cout<<"\t\t\t\t|                                  |\n";
            cout<<"\t\t\t\t   Judul Film : Venom     \n";
            cout<<"\t\t\t\t|  Waktu tayang : "+hari+", "+waktu+"     |\n";
            cout<<"\t\t\t\t   Kursi : ";
             for (int a=1;a<=tiket;a++){
        	cout<<""<<kursi1[a]<<" ";
        	}
            cout<<"\n\t\t\t        |  Jumlah Tiket : "<<tiket<<"                |\n";
            cout<<"\t\t\t\t   Teater : 3                        \n";
            cout<<"\t\t\t\t|  Harga : Rp. "<<tiket*hargatiket<<"              |\n";
            cout<<"\t\t\t\t __________________________________ \n\n";
            getch();
            closing();
            getch();
            exit(1);
    }
        if (kode==4){
            system("cls");
            header();
            cout<<" ___________________________________________________________________________________\n";
            cout<<"|                                                                                   |\n";
            cout<<"|                                -----------------                                  |\n";
            cout<<"|                                Fantastic Beast 2                                  |\n";
            cout<<"|                                -----------------                                  |\n";
            cout<<"| Sinopsis :                                                                        |\n";
            cout<<"| Bersama Albus Dumbledore (Jude Law), Newt harus bisa menghentikan Grindelwald yang|\n";
            cout<<"| ingin menghancurkan tatanan dunia. Di akhir seri film yang pertama, Gellert       |\n";
            cout<<"| Grindelwald berhasil ditangkap oleh MACUSA (Magical Congress of The United States |\n";
            cout<<"| of America). Namun, Grindelwald melarikan diri dari tahanan dan telah mengatur    |\n";
            cout<<"| serta mengumpulkan pengikut untuk meningkatkan penyihir darah murni hingga        |\n";
            cout<<"| menguasai makhluk nonmagis.                                                       |\n";
            cout<<"| Dalam upaya untuk menggagalkan rencana Grindelwald, Albus Dumbledore bertemu      |\n";
            cout<<"| mantan muridnya, Newt Scamander yang akan membantu, tanpa mengetahui bahaya telah |\n";
            cout<<"| menantinya. Merangkum Rotten Tomatoes, film Fantastic Beasts: The Crimes of       |\n";
            cout<<"| Grindelwald ini akan menyuguhkan pengalaman sihir yang menarik, kesetiaan,        |\n";
            cout<<"| dan persahabatan.                                                                 |\n";
            cout<<"|___________________________________________________________________________________|\n";
            cout<<"Apakah ingin melanjutkan memilih waktu tayang? (Y/T): ";cin>>lanjut;
            while(lanjut=='T'||lanjut=='t')
            goto menu;
            hari4:
            harii();
            cout<<"\t\tPilih hari (tulis hari sesuai pilihan) : ";cin>>hari;
            if(hari=="senin"){}                            //cetak waktu
            else if(hari=="selasa"){}
            else if(hari=="rabu"){}
            else if(hari=="kamis"){}
            else if(hari=="jumat"){}
            else if(hari=="sabtu"){}
            else if(hari=="minggu"){}
            else{                                           //jika memilih waktu yang tidak tersedia
            	cout<<"\t\tHari yang anda masukkan tidak sesuai pilihan.\n";
            	cout<<"\t\tPress any key to continue...";
            	getch();                            //menahan program agar tidak langsung ke menu selanjutnya
            	goto hari4;
            }
			time();
			jam4:               // meamaggil fungsi time
            cout<<"\t\tPilih Waktu Tayang(tulis waktu sesuai pilihan) : ";cin>>waktu;  //memilih waktu
            if(waktu=="12:30"){}                            //cetak waktu
            else if(waktu=="14:35"){}
            else if(waktu=="16:40"){}
            else if(waktu=="18:45"){}
            else if(waktu=="20:50"){}
            else{                                           //jika memilih waktu yang tidak tersedia
            	cout<<"\t\tWaktu yang anda masukkan salah.\n";
            	cout<<"\t\tPress any key to continue...\n";
            	getch();                            //menahan program agar tidak langsung ke menu selanjutnya
            	goto jam4;                          //perulangan kembali ke menu jam1
			}
			baliktiket4:
            cout<<"\t\tJumlah Tiket : ";cin>>tiket;
            if(tiket<=20){}
            else{
                cout<<"\t\tAnda tidak bisa memesan lebih dari 20 tiket.\n";
                cout<<"\t\tPress any key to continue...\n";
                getch();
                system("cls");
                header();
                cout<<"\t\tWaktu yang anda pesan adalah hari "+hari+" pukul "+waktu+" WIB.\n";
                goto baliktiket4;
                }
            cout<<"\t\tUang yang harus dibayar : Rp. "<<tiket*hargatiket<<endl;
            kursii();
    		pilih3:
    		for (int i=1;i<=tiket;i++){
    			cout<<"\t\tMasukkan pilihan kursi: "; cin>>kursi1[i];
    		if(kursi1[i]>50){
    		cout<<"\t\tKursi yang anda pilih tidak ada. Masukkan Ulang!"<<endl;
    		goto pilih3;
    	    }
    		else{}
        	}
            system("cls");
            cout<<"\t\t\t\t __________________________________\n";
            cout<<"\t\t\t\t|                                  |\n";
            cout<<"\t\t\t\t       =======================      \n";
            cout<<"\t\t\t\t|       Tiket Yang Anda Pesan      |\n";
            cout<<"\t\t\t\t       =======================      \n";
            cout<<"\t\t\t\t|                                  |\n";
            cout<<"\t\t\t\t   Judul Film : Fantastic Beast 2   \n";
            cout<<"\t\t\t\t|  Waktu tayang : "+hari+", "+waktu+"     |\n";
            cout<<"\t\t\t\t   Kursi : ";
             for (int a=1;a<=tiket;a++){
        	cout<<""<<kursi1[a]<<" ";
        	}
            cout<<"\n\t\t\t        |  Jumlah Tiket : "<<tiket<<"                |\n";
            cout<<"\t\t\t\t   Teater : 4                        \n";
            cout<<"\t\t\t\t|  Harga : Rp. "<<tiket*hargatiket<<"              |\n";
            cout<<"\t\t\t\t __________________________________ \n\n";
            getch();
            closing();
            getch();
            exit(1);
        }
       else{                                                //percabangan apabila memilih menu yang tidak tersedia
            system("cls");
            header();
            cout<<"\t\tMenu yang anda pilih tidak ada. \n";
            cout<<"\t\tKembali ke menu awal? (Y/T): ";cin>>lanjut;  //memilih Y atau T
            while(lanjut=='Y'||lanjut=='y')     //(looping)selama memilih Y/y, maka lanjut ke menu. selain itu keluar program
            goto menu;                          // (looping)kembali ke menu awal
            exit(1);                            // keluar program
       }
    }
        if(pilih==2){                           //percabangan apabila memilih nomor 2, berisi keterangan-keterangan pembelian tiket
                system("cls");                  //menghapus layar dan beralih ke layar menu berikutnya
            cout<<"\n\n\t\tKeterangan:\n";
            cout<<"\t\t1. Keterangan yang diinputkan harus benar, seperti kursi dan jumlah tiket.\n";
            cout<<"\t\t2. Harga/tiket = Rp.50000\n";
            cout<<"\t\t3. Tunjukkan bukti pembayaran dengan menunjukkan barcode yang telah diterima.\n";
            cout<<"\t\t4. Apabila belum transfer uang maka barcode tidak akan terbaca di mesin scaner. \n";
            cout<<"\t\t5. Untuk informasi lebih lanjut hubungi kontak kami :08996469205/085788234847.\n";
            cout<<"\t\tkembali ke menu utama? (Y/T) : ";cin>>lanjut; //memilih Y/T
            while(lanjut=='Y'||lanjut=='y')    //(looping)selama memilih Y/y, maka lanjut ke menu. selain itu keluar program
            goto menu;                          //(looping)kembali ke menu
            exit(1);                            //keluar program
        }
        if(pilih==3){                           //percabangan apabila memilih nomor 3, maka akan keluar program
            exit(1);
        }
        else{                                   //percabangan apabila memilih pilihan yang tidak tersedia
            header();                           //memanggil fungsi header
            cout<<"\t\tMenu yang anda pilih tidak ada. \n";
            cout<<"\t\tKembali ke menu awal? (Y/T): ";cin>>lanjut;
            while(lanjut=='Y'||lanjut=='y')  //(looping)selama memilih Y/y, maka akan kembali ke menu. selain itu keluar program
            goto menu;                          // (looping)kembali ke menu
            exit(1);                            //keluar program
        }
    return 0;                                   //nilai kembalian, untuk memastikan program berjalan tanpa adanya error
    }
