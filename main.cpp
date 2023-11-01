#include <iostream> //Basic Header Untuk (Cin & Cout)
#include <stdlib.h> //Untuk Melaksanakan System ("cls")
#include <conio.h>  //Untuk Getch
#include <string>   //Untuk Tipe Data String
#include <time.h>   //Untuk Pemanggilan Waktu
#include <stdio.h>  //Untuk Getline
#include <windows.h>

using namespace std;

void ruang_kesalahan(){ //fungsi ke 1
    cout << "   =====================================\n";
    cout << "              Ruang Kesalahan\n";
    cout << "   =====================================\n\n";
}

void hiasan_dispen_smk(){ //fungsi ke 2
    cout << "   ===================================================\n";
    cout << "                DISPENSASI SISWA\n";
    cout << "              SMK NEGERI 1 BOYOLANGU \n";
    cout << "   ===================================================\n\n";
}

int main()
{
    //deklarasi yang ada di menu utama
    char pil_menu_tama, k_m_u, masuk_menu;
    char pil_menu_1, pil_menu_2, pil_menu_4;

    //deklarasi yang ada pada kondisi Nomer 3 pada Menu Utama
    char pil_menu_3, pil_menu_3_1, pil_menu_3_2;
    char verifikasi, ubah_guru, cetak;

    //deklarasi yang ada pada Pengisian Data Siswa & Guru Piket Untuk Dispen
    string nama_siswa, guru_piket;
    char a[2], jurusan_siswa[15], alasan_siswa[50];
    char kelas_siswa, kelas_siswa_salah, pil_kelas_siswa_salah;
    int jam_siswa1 , jam_siswa2;


    //deklarasi yang ada pada kondisi Nomer 5 pada Menu Utama
    char kritik_saran;
    char menu_utama_kritik;
    string kritik, saran;

    //array yang digunakan untuk pilihan di menu utama
    string daftar_menu[] = {"  1. Cara Menggunakan\t\t\t |\n", "  2. Tujuan Layanan\t\t\t\t |\n","  3. Mulai Menggunakan\t\t\t |\n",
    "  4. Latar Belakang\t\t\t\t |\n","  5. Kritik & Saran\t\t\t\t |"};

    //array yang digunakan untuk daftar nama guru piket
    string guru_piket_ [] = {"   1. Ulfa\n", "   2. Andika\n", "   3. Hesti\n", "   4. Bambang\n" };

    //INTRO AWAL PROGRAM
    cout << "   ===============================================\n";
    cout << "   |       SELAMAT DATANG DI LAYANAN SEKOLAH     |\n";
    cout << "   |               DISPENSASI SISWA              |\n";
    cout << "   |            SMK NEGERI 1 BOYOLANGU           |\n";
    cout << "   ===============================================\n\n";
    cout << "   Input Sembarang Karakter Untuk Melanjutkan : ";
    getch ();
    cout<< "\n\n";
    cout << "   ===============================================\n";
    Sleep (500); //setelah menginput sembarang karaker, program selanjutnya akan di stop untuk 0,5 detik

    //BAGIAN INI ADALAH MENU UTAMA PROGRAM
    menu_utama: //perulangan goto
    system ("cls");
    cout << "   ===============================================\n";
    cout << "   |                DISPENSASI SISWA             |\n";
    cout << "   |             SMK NEGERI 1 BOYOLANGU          |\n";
    cout << "   ===============================================\n";

            //pemanggilan array untuk pilihan menu utama. Deklarasi array ada pada line 47
            for (string a : daftar_menu) {
                cout <<"   |"<< a << "\n";
            }

    cout << "   ===============================================\n";
    cout << "   Pilih Menu Di Atas (1/2/3/4/5) \n\n";
    cout << "   Masukkan Pilihan Anda : "; cin>>pil_menu_tama;
    cout << "   ===============================================";
    Sleep (500); //program yang akan tampil berikutnya, akan di jeda selama 0,5 detik terlebih dahulu
    //BAGIAN AKHIR MENU UTAMA



        //BAGIAN INI ADALAH OUPUT JIKA USER MENGINPUT '1' PADA MENU UTAMA
        if (pil_menu_tama=='1'){

            menu_1: //deklarasi perulangan goto menu 1
            system ("cls");
            cout << "   ============================================================================\n";
            cout << "   |                             DISPENSASI SISWA                             |\n";
            cout << "   |                          Cara Menggunakan Layanan                        |\n";
            cout << "   ============================================================================\n";
            cout << "   |                                                                          |\n";
            cout << "   |      Berikut Adalah Cara Menggunakan Layanan Ini                         |\n";
            cout << "   |      1.  Pada Menu Utama Pilih 'No 3. Mulai Menggunakan'                 |\n";
            cout << "   |      2.1 Kemudian Input Angka '1' (Untuk Melanjutkan)                    |\n";
            cout << "   |      2.2 Atau Input Nomer '2' (Jika Belum Paham Cara Menggunakan)        |\n";
            cout << "   |      3.  Jika Melanjutkan Maka Yang Dilakukan Adalah :                   |\n";
            cout << "   |          -Isi Seluruh Data Diri Dengan Benar Dan Lengkap                 |\n";
            cout << "   |          -Cek Seluruh Data Diri Yang Sudah Diisi                         |\n";
            cout << "   |          -Kemudian Masukkan Nama Guru Piket Yang Sudah Disediakan        |\n";
            cout << "   |          -Lakukan Verifikasi Nama Guru Piket Yang Sudah DiInput          |\n";
            cout << "   |          -Pilih Untuk Mencetak Surat Dispensasi atau Keluar              |\n";
            cout << "   |                                                                          |\n";
            cout << "   ============================================================================\n";


            kmu: //deklarasi perulangan goto
            cout << "   Kembali Ke Menu Utama? (y/t) : "; cin>>k_m_u;
            cout << "   =====================================\n";

                //output jika user menginput 'y' pada line 112
                if (k_m_u=='y'){
                    goto menu_utama;
                    //kemudian akan kembali ke menu utama
                }

                    //output jika user menginput 't' pada line 112
                    else if (k_m_u=='t') {
                         goto_menu_1: //deklarasi perulangan goto
                         //kemudian disambung oleh output dibawah ini
                         cout << "   1. Akhiri Program\n";
                         cout << "   2. Buat Surat Dispen Siswa\n";
                         cout << "   3. Kembali Ke Menu Utama\n";
                         cout << "   =====================================\n";
                         cout << "   Masukkan Pilihan Anda (1/2/3) : "; cin >>pil_menu_1;
                         cout << "   ======================================\n";
                         //output jika user menginput '1' pada line 129
                         if (pil_menu_1=='1'){
                            cout << "   Pilihan Anda 1 (Program Diakhiri)\n";
                            cout << "   ======================================\n";
                         }
                            //output jika user menginput '2' pada line 129
                            else if (pil_menu_1 =='2'){
                                goto menu_awal_dispen;
                            }

                            //output jika user menginput '3' pada line 129
                            else if (pil_menu_1 == '3'){
                                goto menu_utama;
                            }

                                //output jika user tidak menginput '1/2/3' pada line 129
                                else {
                                    do {
                                        system ("cls");
                                        ruang_kesalahan();//menggunakan fungsi ke 1
                                        cout << "   Pilihan Kamu ''" <<pil_menu_1<< "'' Tidak Tesedia\n\n";
                                        cout << "   Masukkan Pilihan Yang Ada (1/2/3)\n\n";
                                        cout << "   =====================================\n\n";
                                        goto goto_menu_1;//akan pergi dan menjalankan line 123
                                        }
                                        while (!(pil_menu_1 == '1' && pil_menu_1 == '2' && pil_menu_1 == '3'));
                                 }

                    }
                        //output jika user tidak menginput 'y/t' pada line 129
                        else {
                            do {
                                   system ("cls");
                                   ruang_kesalahan();//menggunakan fungsi ke 1
                                   cout << "   Pilihan Kamu ''" <<k_m_u<< "'' Tidak Tesedia\n\n";
                                   cout << "   Masukkan Pilihan Yang Ada (y/t)\n\n";
                                   cout << "   =====================================\n";

                                   goto kmu; //akan pergi dan menjalankan line 112
                                }
                                   while (!(k_m_u == 'y' && k_m_u == 't'));
                            }

                        }

            //BAGIAN INI ADALAH OUPUT JIKA USER MENGINPUT '2' PADA MENU UTAMA
            else if (pil_menu_tama=='2'){
                    system ("cls");
                    cout << "   ===================================================\n";
                    cout << "   |               DISPENSASI SISWA                  |\n";
                    cout << "   |                Tujuan Layanan                   |\n";
                    cout << "   ===================================================\n";
                    cout << "   | Layanan Dispensasi Siswa Adalah Sebuah Layanan  |\n";
                    cout << "   |Yang Dibuat Untuk Membuat Sebuah Surat Dispensasi|\n";
                    cout << "   |       Untuk Layanan Yang Lebih Modern           |\n";
                    cout << "   |         Bagi SMK Negeri 1 Boyolangu             |\n";
                    cout << "   ===================================================\n";

                    kmu2:
                    cout << "   Kembali Ke Menu Utama? (y/t) : "; cin>>k_m_u;
                    cout << "   =====================================\n";

                        //ouput yang akan keluar jika user menginput 'y' pada line 190
                        if (k_m_u=='y'){
                            goto menu_utama; //akan dialihkan dan menjalankan program ke line 66
                        }
                            //output yang akan keluar jika user menginput 't' pada line 190
                            else if (k_m_u=='t') {
                            goto_menu_2: //deklarasi untuk perulangan goto
                            cout << "   1. Akhiri Program\n";
                            cout << "   2. Buat Surat Dispen Siswa\n";
                            cout << "   3. Kembali Ke Menu Utama\n";
                            cout << "   =====================================\n";
                            cout << "   Masukkan Pilihan Anda (1/2/3) : "; cin >>pil_menu_2;
                            cout << "   =====================================\n";

                            //output yang akan keluar jika user menginput '1' pada line 204
                            if (pil_menu_2=='1'){
                                cout << "   Pilihan Anda 1 (Program Diakhiri)\n";
                                cout << "   =====================================\n";
                            }
                                //output yang akan keluar jika user menginput '2' pada line 204
                                else if (pil_menu_2=='2'){
                                    goto menu_awal_dispen;
                                }
                                //output yang akan keluar jika user menginput '3' pada line 204
                                else if (pil_menu_2=='3'){
                                    goto menu_utama;
                                }
                                    //output yang akan keluar jika inputan user bukan (1/2/3) pada line 204
                                    else {
                                        do {
                                            system ("cls");
                                            //menggunakan fungsi ke 1
                                            ruang_kesalahan();
                                            cout << "   Pilihan Kamu ''" <<pil_menu_2<< "'' Tidak Tesedia\n\n";
                                            cout << "   Masukkan Pilihan Yang Ada (1/2/3)\n\n";
                                            cout << "   =====================================\n";
                                            goto goto_menu_2; //akan menjalankan program ke line 199
                                            }
                                            while (!(pil_menu_2 == '1' && pil_menu_2 == '2' && pil_menu_2 == '3'));
                                    }

                             }
                                //output yang akan keluar jika user menginput buka (y/t) pada line 190
                                else {
                                    do {
                                        system ("cls");
                                        ruang_kesalahan(); //menggunakan fungsi ke 1
                                        cout << "   Pilihan Kamu ''" <<k_m_u<< "'' Tidak Tesedia\n\n";
                                        cout << "   Masukkan Pilihan Yang Ada (y/t)\n\n";
                                        cout << "   =====================================\n";

                                        goto kmu2; //akan menjalankan program di line 189
                                    }
                                        while (!(k_m_u == 'y' && k_m_u == 't'));
                                }

                        }
            //BAGIAN INI ADALAH OUPUT JIKA USER MENGINPUT '3' PADA MENU UTAMA
            //INI ADALAH PROGRAM INTI PADA MENU DISPENSASI SISWA
            else if (pil_menu_tama=='3'){
                    menu_awal_dispen:
                    system ("cls");
                    cout << "   ===================================================\n";
                    cout << "                   DISPENSASI SISWA\n";
                    cout << "                   Mulai Menggunakan \n";
                    cout << "   ===================================================\n";
                    cout << "   Apakah Kalian Sudah Paham Cara Menggunakan Layanan Ini?\n\n";
                    cout << "   1. Sudah-Buat Surat Dispen\n";
                    cout << "   2. Belum-Belajar Menggunakan\n";
                    cout << "   3. Kembali Ke Menu Utama\n\n";
                    cout << "   Pilih Salah Satu (1/2/3) : "; cin>>pil_menu_3;
                    cout << "   ===================================================\n";
                    cout << "   Pilihan Anda : " <<pil_menu_3<<endl;
                    cout << "   ===================================================\n";
                    Sleep (500);

                    //Bagian Ini Output Jika User Menginput '1' Pada Menu Dispen
                    if (pil_menu_3=='1'){
                        Sleep (500);
                        pengisian_data: //deklarasi untuk pengulangan goto
                        system ("cls");

                        hiasan_dispen_smk(); //menggunakan fungsi ke 2
                        cout << "   Masukkan Data Diri Anda Dengan Lengkap\n\n";
                        cout << "   Input Nama Lengkap Anda               : ";
                        cin.ignore (); //cin.ignore digunakan agar dapat menginput lebih dari 1 string menggunakan spasi
                        getline (cin,nama_siswa);
                        cout <<endl;

                        cout << "   Input Kelas (1/2/3)\n";
                        cout << "   1. Kelas 10\n";
                        cout << "   2. Kelas 11\n";
                        cout << "   3. Kelas 12\n";
                        cout << "   Masukkan Kelas                        : ";
                        cin >> kelas_siswa;

                        //output jika pada line 287 user menginput '1'
                        if (kelas_siswa =='1'){
                            goto lanjutan; //akan diarahkan dan menjalankan program ke line 360
                        }
                            //output jika pada line 287 user menginput '2'
                            else if (kelas_siswa =='2'){
                                goto lanjutan; //akan diarahkan dan menjalankan program ke line 360
                            }
                            //output jika pada line 287 user menginput '3'
                            else if (kelas_siswa =='3'){
                                goto lanjutan; //akan diarahkan dan menjalankan program ke line 360
                            }
                                //output jika pada line 287 user bukan menginput (1/2/3)
                                else{
                                     do {
                                        system ("cls");
                                        ruang_kesalahan(); //menggunakan fungsi ke 1
                                        cout << "   Pilihan Kelas ''" <<kelas_siswa<< "'' Tidak Tesedia\n\n";
                                        cout << "   Masukkan Pilihan Kelas Yang Ada (1/2/3)\n\n";
                                        cout << "   =====================================\n";
                                        cout << "   Ulangi  Dari Awal (y/t) : "; cin >> kelas_siswa_salah;
                                        cout << "   =====================================\n";

                                        //output jika user menginput 'y' pada line 309
                                        // 'y' disini berarti user akan mengulangi pengisian data dispen dari awal
                                        if (kelas_siswa_salah=='y'){
                                            goto pengisian_data; //akan menjalankan program ke line 272
                                        }
                                            //output jika user menginput 't' pad line 309
                                            else if (kelas_siswa_salah=='t'){
                                                system ("cls");
                                                kelas_siswa_salah: //deklarasi untuk pengulangan goto
                                                cout << "   =====================================\n";
                                                cout << "   1. Kembali Ke Menu Utama\n";
                                                cout << "   2. Kembali Ke Menu Buat Dispensasi\n";
                                                cout << "   3. Akhiri Program\n";
                                                cout << "   =====================================\n";
                                                cout << "   Masukkan Pilihan (1/2/3) : "; cin >> pil_kelas_siswa_salah;
                                                //menggunakan fungsi ke 1
                                                //output jika user menginput '1' pada line 326
                                                if (pil_kelas_siswa_salah == '1'){
                                                    goto menu_utama; //akan menjalankan program ke line 66
                                                }
                                                    //output jika user menginput '2' pada line 326
                                                    else if (pil_kelas_siswa_salah == '2'){
                                                        goto menu_awal_dispen; //akan menjalankan program ke line 253
                                                    }
                                                    //output jika user menginput '2' pada line 326
                                                    else if (pil_kelas_siswa_salah == '3'){
                                                        cout << "   ========================================\n";
                                                        cout << "   Pilihan Anda : '1' (Program Diakhiri)/n";
                                                        //maka program akan di akhiri
                                                    }
                                                        //output jika pada line 326 user bukan menginputkan (1/2/3)
                                                        else {
                                                            do {
                                                                system ("cls");
                                                                ruang_kesalahan(); //menggunakan fungsi ke 1
                                                                cout << "   Pilihan Kamu ''" <<pil_kelas_siswa_salah<< "'' Tidak Tesedia\n\n";
                                                                cout << "   Masukkan Pilihan Yang Ada (1/2/3)\n\n";
                                                                cout << "   =====================================\n";

                                                                goto kelas_siswa_salah;
                                                            }
                                                                while (!(pil_kelas_siswa_salah == '1' && pil_kelas_siswa_salah == '2' && pil_kelas_siswa_salah == '3'));
                                                        }
                                            }
                                     }
                                     while (!(kelas_siswa =='1' && kelas_siswa =='2' && kelas_siswa =='3'));
                                }

                        lanjutan: //deklarasi untuk pengulangan goto
                        cout << "";
                        gets (a);
                        cout <<endl;

                        cout << "   Jurusan Anda                          : ";
                        gets (jurusan_siswa);
                        cout <<endl;

                        cout << "   Input Alasan                          : ";
                        gets(alasan_siswa);
                        cout <<endl;

                        coba:
                        cout << "   Dari Jam Pelajaran Ke (5 Sampai 10)   : ";
                        cin >> jam_siswa1;
                        cout <<endl;

                        //jika inputan jam siswa 1 (mulai jam) adalah 5-10 (pada line 374)
                        if (jam_siswa1 >= 5 && jam_siswa1 <=10){
                            goto lanjutan1; //maka akan lanjut ke line --

                        }
                           //jika inputan jam siswa 1 (mulai jam) adalah bukan 5-10
                           //maka akan menjalankan program di bawah ini
                           else{
                                do {
                                    system ("cls");
                                    hiasan_dispen_smk(); //menggunakan fungsi ke 2
                                    cout << "   Masukkan Data Diri Anda Dengan Lengkap\n\n";
                                    cout << "   Input Nama Lengkap Anda               : "<<nama_siswa<<endl;
                                    cout << endl;
                                    cout << "   Input Kelas (1/2/3)\n";
                                    cout << "   1. Kelas 10\n";
                                    cout << "   2. Kelas 11\n";
                                    cout << "   3. Kelas 12\n";
                                    cout << "   Masukkan Kelas                        : "<<kelas_siswa<<endl;
                                    cout << endl;
                                    cout << "   Jurusan Anda                          : "<<jurusan_siswa<<endl;
                                    cout << endl;
                                    cout << "   Input Alasan                          : "<<alasan_siswa<<endl;
                                    cout << endl;
                                    goto coba;
                                    }
                                    while (!(jam_siswa1 >= 5 && jam_siswa1 <=10));

                                }

                        lanjutan1:
                        cout << "   Sampai Jam (max 11)                   : ";
                        cin >> jam_siswa2;
                        if (jam_siswa2 > jam_siswa1 && jam_siswa2 <=11){
                            goto lanjutan2;
                        }
                           else{
                                do {
                                    system ("cls");
                                    //menggunakan fungsi ke 2
                                    hiasan_dispen_smk();
                                    cout << "   Masukkan Data Diri Anda Dengan Lengkap\n\n";
                                    cout << "   Input Nama Lengkap Anda               : "<<nama_siswa<<endl;
                                    cout << endl;
                                    cout << "   Input Kelas (1/2/3)\n";
                                    cout << "   1. Kelas 10\n";
                                    cout << "   2. Kelas 11\n";
                                    cout << "   3. Kelas 12\n";
                                    cout << "   Masukkan Kelas                        : "<<kelas_siswa<<endl;
                                    cout << endl;
                                    cout << "   Jurusan Anda                          : "<<jurusan_siswa<<endl;
                                    cout << endl;
                                    cout << "   Input Alasan                          : "<<alasan_siswa<<endl;
                                    cout << endl;
                                    cout << "   Dari Jam Pelajaran Ke (5 Sampai 10)   : "<<jam_siswa1<<endl;
                                    cout << endl;
                                    goto lanjutan1;
                                    }
                                    while (!(jam_siswa2 > jam_siswa1 && jam_siswa2 <=11));

                                }
                        cout <<endl;

                        lanjutan2:
                        cout << "   ===================================================\n";
                        verifikasi_diri:
                        cout << "   Apakah Data Diri Dan Alasan Anda\n";
                        cout << "   Sudah Lengkap dan Benar :(y/t) : "; cin >>verifikasi;
                        cout << "   ===================================================\n";

                        //output jika data diri dan alasan sudah lengkap
                        if (verifikasi=='y'){
                            goto_guru_piket:
                            system ("cls");

                            //menggunakan fungsi ke 2
                            hiasan_dispen_smk();

                            //Pemanggilan Array Untuk Daftar Guru Piket Yang Bertugas
                            for (string b : guru_piket_){
                                 cout <<b<< "\n";
                                 }
                            cout << "   ===================================================\n";
                            cout << "   Ketik Nama Guru Piket Yang Bertugas : ";
                            cin.ignore ();
                            getline (cin,guru_piket);
                            cout << "   ===================================================\n";
                            ubah_guru_piket:
                            cout << "   Guru Piket Yang Bertugas : "<<guru_piket<<endl;
                            cout <<endl;
                            cout << "   Ubah Guru Piket? (y/t)   : "; cin>>ubah_guru;
                            cout << "   ===================================================\n";

                            //output jika tidak ingin mengubah guru piket
                            if (ubah_guru=='y'){
                                goto goto_guru_piket;
                            }
                                //output jika ingin mengubah guru piket
                                else if (ubah_guru=='t'){
                                opsi_cetak:
                                cout << "   Lanjut Cetak Hasil (y/t)\n\n";
                                cout << "   y = Cetak Surat Dispen\n";
                                cout << "   t = Program Di Akhiri\n\n";
                                cout << "   Masukkan Pilihan (y/t) : "; cin>>cetak;
                                cout << "   ===================================================\n";
                                Sleep (500);
                                }

                                    else {
                                            do {
                                                system ("cls");
                                                //menggunakan fungsi ke 1
                                                ruang_kesalahan();
                                                cout << "   Pilihan Kamu ''" <<ubah_guru<< "'' Tidak Tesedia\n\n";
                                                cout << "   Masukkan Pilihan Yang Ada (y/t)\n\n";
                                                cout << "   =====================================\n";

                                                goto ubah_guru_piket;
                                            }
                                                while (!(ubah_guru == 'y' && ubah_guru == 't'));

                                        }

                                //output jika ingin mencetak surat dispensasi
                                if (cetak=='y'){
                                    system ("cls");
                                    cout << "   ==========================================================\n\n";
                                    cout << "                       DISPENSASI SISWA\n";
                                    cout << "                   SMK NEGERI 1 BOYOLANGU\n\n";
                                    cout << "   ==========================================================\n";
                                    cout << "   Nama Siswa          : "<<nama_siswa<<endl;
                                    if (kelas_siswa=='1'){
                                        cout << "   Jurusan             : "<<10<< " " <<jurusan_siswa<<endl;
                                    }
                                        else if (kelas_siswa=='2'){
                                            cout << "   Jurusan             : "<<11<< " " <<jurusan_siswa<<endl;
                                        }
                                        else if (kelas_siswa=='3'){
                                            cout << "   Jurusan             : "<<12<< " " <<jurusan_siswa<<endl;
                                        }

                                    cout << "   Alasan              : "<<alasan_siswa<<endl;
                                    cout << "   Jam Ke              : "<<jam_siswa1<< " Sampai " <<jam_siswa2<<endl;
                                    cout << "   ==========================================================\n";
                                    cout << "   Nama Guru Piket     :\n";
                                    cout << "   "<<guru_piket<<endl;
                                    cout << "   ==========================================================\n";
                                    cout << "   Dicetak Pada        :  \n";
                                    // tanggal / waktu sekarang berdasarkan sistem saat ini
                                       time_t now = time(0);

                                       char* dt = ctime(&now);

                                       cout <<"   "<< dt;
                                       cout << "   ==========================================================\n";
                                }
                                    //output jika tidak ingin mencetak
                                    else if (cetak=='t'){
                                        cout << "   ===================================================\n";
                                        cout << "   Piilihan Anda 't' (Program Di Akhiri)\n";
                                        cout << "   ===================================================\n";
                                    }
                                        else {
                                            do {
                                                system ("cls");
                                                //menggunakan fungsi ke 1
                                                ruang_kesalahan();
                                                cout << "   Pilihan Kamu ''" <<cetak<< "'' Tidak Tesedia\n\n";
                                                cout << "   Masukkan Pilihan Yang Ada (y/t)\n\n";
                                                cout << "   =====================================\n";

                                                goto verifikasi_diri;
                                            }
                                                while (!(cetak == 'y' && cetak == 't'));

                                        }
                                }



                            //output jika data diri dan alasan belum lengkap
                            else if (verifikasi=='t'){

                                //menggunakan fungsi ke 1
                                ruang_kesalahan1:
                                system ("cls");
                                //menggunakan fungsi ke 2
                                hiasan_dispen_smk();
                                cout<< "   Anda Harus Mengisi Data Diri Dengan Lengkap\n";
                                goto pengisian_data;
                            }

                                else {
                                    do {
                                        system ("cls");

                                        //Menggunakan fungsi ke 1
                                        ruang_kesalahan();
                                        cout << "   Pilihan Kamu ''" <<verifikasi<< "'' Tidak Tesedia\n\n";
                                        cout << "   Masukkan Pilihan Yang Ada (y/t)\n\n";
                                        cout << "   =====================================\n";
                                        goto verifikasi_diri;
                                        }
                                        while (!(verifikasi == 'y' && verifikasi == 't'));
                                }


                    }
                    //Bagian Ini Merupakan Output Jika User Menginput '2' Pada Menu Dispen
                    else if (pil_menu_3=='2'){
                            goto menu_1;

                            if (k_m_u=='y'){
                                goto menu_utama;
                            }

                                 else if (k_m_u=='t') {
                                     goto_menu_3_2:
                                     cout << "   1. Akhiri Program\n";
                                     cout << "   2. Buat Surat Dispen Siswa\n";
                                     cout << "   3. Kembali Ke Menu Utama\n";
                                     cout << "   =====================================\n";
                                     cout << "   Masukkan Pilihan Anda (1/2/3) : "; cin >>pil_menu_3_2;
                                     cout << "   =====================================\n";
                                     Sleep (500);
                                     if (pil_menu_3_2=='1'){
                                        cout << "   Pilihan Anda 1 (Program Diakhiri)\n";
                                        cout << "   =====================================\n";
                                     }

                                        else if (pil_menu_3_2=='2'){
                                            goto menu_awal_dispen;
                                        }

                                        else if (pil_menu_3_2=='3'){
                                            goto menu_utama;
                                        }

                                            else {
                                                do {
                                                    system ("cls");
                                                    //menggunakan fungsi ke 1
                                                    ruang_kesalahan();
                                                    cout << "   Pilihan Kamu ''" <<pil_menu_3_2<< "'' Tidak Tesedia\n\n";
                                                    cout << "   Masukkan Pilihan Yang Ada (1/2/3)\n\n";
                                                    cout << "   =====================================\n";
                                                    goto goto_menu_3_2;
                                                    }
                                                    while (!(pil_menu_3_2 == '1' && pil_menu_3_2 == '2' && pil_menu_3_2=='3'));
                                             }

                                }

                                    else {
                                        do {
                                            system ("cls");
                                            //menggunakan fungsi ke 1
                                            ruang_kesalahan();
                                            cout << "   Pilihan Kamu ''" <<k_m_u<< "'' Tidak Tesedia\n\n";
                                            cout << "   Masukkan Pilihan Yang Ada (y/t)\n\n";
                                            cout << "   =====================================\n";

                                            goto kmu;
                                            }
                                            while (!(k_m_u == 'y' && k_m_u == 't'));
                                }
                    }
                    else if (pil_menu_3=='3'){
                        goto menu_utama;
                    }

                        //Bagian Ini Merupakan Output JIka User Salah Menginputkan (bukan '1'/'2'/'3') Pada Menu Dispen
                        else {
                                    do {
                                    menu_kesalahan_dispen:
                                    system ("cls");
                                    //menggunakan fungsi ke 1
                                    ruang_kesalahan();
                                    cout << "   Pilihan Kamu ''"<<pil_menu_3<< "'' Tidak Tesedia\n\n";
                                    cout << "   Masukkan Pilihan Yang Ada (1/2/3)\n\n";
                                    cout << "   =====================================\n";
                                    cout << "   Kembali Ke Menu Utama Dispen (y/t) : ";
                                    cin>>pil_menu_3;

                                    if (pil_menu_3=='y'){
                                    goto menu_awal_dispen;
                                    }
                                        else if (pil_menu_3=='t') {
                                             goto_menu_3_1:
                                             cout << "   =====================================\n";
                                             cout << "   1. Akhiri Program\n";
                                             cout << "   2. Buat Surat Dispen Siswa\n";
                                             cout << "   3. Kembali Ke Menu Utama\n";
                                             cout << "   =====================================\n";
                                             cout << "   Masukkan Pilihan Anda (1/2/3) : "; cin >>pil_menu_3_1;
                                             cout << "   =====================================\n";
                                             if (pil_menu_3_1=='1'){
                                                cout << "   Pilihan Anda 1 (Program Diakhiri)\n";
                                                cout << "   =====================================\n";
                                             }

                                                else if (pil_menu_3_1=='2'){
                                                    goto menu_awal_dispen;
                                                }

                                                else if (pil_menu_3_1=='3'){
                                                    goto menu_utama;
                                                }

                                                    else {
                                                        do {
                                                            system ("cls");
                                                            //menggunakan fungsi ke 1
                                                            ruang_kesalahan();
                                                            cout << "   Pilihan Kamu ''" <<pil_menu_3_1<< "'' Tidak Tesedia\n\n";
                                                            cout << "   Masukkan Pilihan Yang Ada (1/2/3)\n\n";
                                                            cout << "   =====================================\n";
                                                            goto goto_menu_3_1;
                                                            }
                                                            while (!(pil_menu_3_1 == '1' && pil_menu_3_1 == '2' && pil_menu_3_1=='3'));
                                                     }

                                        }

                                }
                                while (!(pil_menu_3=='1'&& pil_menu_3=='2' && pil_menu_3== '3'));
                            }

            }
            //Bagian Ini Adalah Output Jika User Menginput Pilihan '4' Pada Menu Utama
            else if (pil_menu_tama=='4'){
                system ("cls");
                cout << "   ==================================================\n";
                cout << "   |               DISPENSASI SISWA                 |\n";
                cout << "   |                LATAR BELAKANG                  |\n";
                cout << "   ==================================================\n";
                cout << "   |     Dispenasi Dengan Cara Ini Dibuat Untuk     |\n";
                cout << "   | Mempermudah Siswa Dan Guru Piket Yang Bertugas |\n";
                cout << "   |Sekaligus Membuat Sistem Di Sekolah Lebih Modern|\n";
                cout << "   |   Sekaligus Data Dispensasi Dapat Disimpan     |\n";
                cout << "   |     Sehingga Dapat Ditemukan Dengan Mudah      |\n";
                cout << "   ==================================================\n";

                kmu4:
                cout << "   Kembali Ke Menu Utama? (y/t) : "; cin>>k_m_u;
                cout << "   =====================================\n";


                if (k_m_u=='y'){
                    goto menu_utama;
                }

                    else if (k_m_u=='t') {
                         goto_menu_4:
                         cout << "   1. Akhiri Program\n";
                         cout << "   2. Buat Surat Dispen Siswa\n";
                         cout << "   3. Kembali Ke Menu Utama\n";
                         cout << "   =====================================\n";
                         cout << "   Masukkan Pilihan Anda (1/2/3) : "; cin >>pil_menu_4;
                         cout << "   =====================================\n";
                         Sleep (500);
                         if (pil_menu_4=='1'){
                            cout << "   Pilihan Anda 1 (Program Diakhiri)\n";
                            cout << "   =====================================\n";
                         }

                            else if (pil_menu_4=='2'){
                                goto menu_awal_dispen;
                            }

                            else if (pil_menu_4=='3'){
                                goto menu_utama;
                            }

                                else {
                                    do {
                                        system ("cls");
                                        //menggunakan fungsi ke 1
                                        ruang_kesalahan();
                                        cout << "   Pilihan Kamu ''" <<pil_menu_4<< "'' Tidak Tesedia\n\n";
                                        cout << "   Masukkan Pilihan Yang Ada (1/2/3)\n\n";
                                        cout << "   =====================================\n";
                                        goto goto_menu_4;
                                        }
                                        while (!(pil_menu_4 == '1' && pil_menu_4 == '2' && pil_menu_4=='3'));
                                 }

                    }

                        else {
                            do {
                                   system ("cls");
                                   ruang_kesalahan();
                                   cout << "   Pilihan Kamu ''" <<k_m_u<< "'' Tidak Tesedia\n\n";
                                   cout << "   Masukkan Pilihan Yang Ada (y/t)\n\n";
                                   cout << "   =====================================\n";

                                   goto kmu4;
                                }
                                   while (!(k_m_u == 'y' && k_m_u == 't'));
                            }

            }

            //Bagian Ini Adalah Output Jika User Menginput Pilihan '5' Pada Menu Utama
            else if (pil_menu_tama=='5'){
                    kritik_saran1:
                    system ("cls");
                    cout << "   ===========================================\n";
                    cout << "                DISPENSASI SISWA\n";
                    cout << "                KRITIK DAN SARAN\n";
                    cout << "   ===========================================\n";
                    cout << "   Pilih Yang Ingin Anda Sampaikan\n\n";
                    cout << "   1. Kritik\n";
                    cout << "   2. Saran\n";
                    cout << "   3. Kembali Ke Menu Utama\n\n";
                    cout << "   ===========================================\n";
                    cout << "   Masukkan Pilihan Anda (1/2/3) : "; cin>>kritik_saran;
                    cout << "   ===========================================\n";

                    if (kritik_saran=='1'){

                        system ("cls");
                        cout << "   ===========================================\n";
                        cout << "                DISPENSASI SISWA\n";
                        cout << "                      KRITIK\n";
                        cout << "   ===========================================\n\n";
                        cout << "   Anda Masuk Ke Bagian Kritik\n";
                        cout << "   Silahkan Tulis Kritikan Anda, Dibawah Ini\n\n";
                        cout << "   Kritik Anda : ";
                        cin.ignore ();
                        getline (cin, kritik);

                        verifikasi_kritik_saran:
                        cout << "   ===========================================\n";
                        cout << "   1. Selesai\n\n";
                        cout << "   2. Kembali Ke Menu Kritik & Saran\n\n";
                        cout << "   3. Kembali Ke Menu Utama\n\n";
                        cout << "   4. Buat Surat Dispen Siswa\n";
                        cout << "   ===========================================\n";
                        cout << "   Pilih Salah Satu (1/2/3/4) : "; cin>>menu_utama_kritik;
                        cout << "   ===========================================\n";
                        Sleep (500);

                            //output jika menginput 1 pada pilihan
                            if (menu_utama_kritik=='1'){
                                system ("cls");
                                cout << "   ============================================================\n";
                                cout << "   |                    DISPENSASI SISWA                      |\n";
                                cout << "   |                    KRITIK DAN SARAN                      |\n";
                                cout << "   ============================================================\n";
                                cout << "   |                                                          |\n";
                                cout << "   | Terimakasih Telah Memberikan Kritik Terhadap Layanan Ini |\n";
                                cout << "   | Masukan Anda Sudah Kami Tampung Dan Akan Dijadikan       |\n";
                                cout << "   | Bahan Evaluasi Terhadap Layanan Ini                      |\n";
                                cout << "   |                                                          |\n";
                                cout << "   ============================================================\n";
                                cout << "   *******************************\n";
                                cout << "   * Hormat Kami                 *\n";
                                cout << "   * Pengurus Layanan Dispensasi *\n";
                                cout << "   * SMK Negeri 1 Boyolangu      *\n";
                                cout << "   *******************************\n";
                                cout << "   ============================================================\n";
                                }

                                else if (menu_utama_kritik=='2'){
                                    goto kritik_saran1;
                                }

                                else if (menu_utama_kritik=='3'){
                                    goto menu_utama;
                                }
                                else if (menu_utama_kritik=='4'){
                                    goto menu_awal_dispen;
                                }
                                    else {
                                            do {
                                                    system ("cls");
                                                    ruang_kesalahan();
                                                    cout << "   Pilihan Kamu ''" <<menu_utama_kritik<< "'' Tidak Tesedia\n\n";
                                                    cout << "   Masukkan Pilihan Yang Ada (1/2/3/4)\n\n";

                                                    goto verifikasi_kritik_saran;
                                                }
                                                    while (!(menu_utama_kritik == '1'&& menu_utama_kritik == '2' && menu_utama_kritik == '3' && menu_utama_kritik=='4'));
                                        }
                                }

                    else if (kritik_saran=='2'){
                        system ("cls");
                        cout << "   ===========================================\n";
                        cout << "                DISPENSASI SISWA\n";
                        cout << "                      SARAN\n";
                        cout << "   ===========================================\n\n";
                        cout << "   Anda Masuk Ke Bagian Saran\n";
                        cout << "   Silahkan Tulis Saran Anda, Dibawah Ini\n\n";
                        cout << "   Saran Anda : ";
                        cin.ignore ();
                        getline (cin, saran);

                        verifikasi_kritik_saran2:
                        cout << "   ===========================================\n";
                        cout << "   1. Selesai\n\n";
                        cout << "   2. Kembali Ke Menu Kritik & Saran\n\n";
                        cout << "   3. Kembali Ke Menu Utama\n\n";
                        cout << "   4. Buat Surat Dispen Siswa\n";
                        cout << "   ===========================================\n";
                        cout << "   Pilih Salah Satu (1/2/3/4) : "; cin>>menu_utama_kritik;
                        cout << "   ===========================================\n";
                        Sleep (500);

                        if (menu_utama_kritik=='1'){
                                system ("cls");
                                cout << "   ============================================================\n";
                                cout << "   |                    DISPENSASI SISWA                      |\n";
                                cout << "   |                    KRITIK DAN SARAN                      |\n";
                                cout << "   ============================================================\n";
                                cout << "   |                                                          |\n";
                                cout << "   | Terimakasih Telah Memberikan Saran Terhadap Layanan Ini  |\n";
                                cout << "   | Masukan Anda Sudah Kami Tampung Dan Akan Dijadikan       |\n";
                                cout << "   | Bahan Evaluasi Terhadap Layanan Ini                      |\n";
                                cout << "   |                                                          |\n";
                                cout << "   ============================================================\n";
                                cout << "   *******************************\n";
                                cout << "   * Hormat Kami                 *\n";
                                cout << "   * Pengurus Layanan Dispensasi *\n";
                                cout << "   * SMK Negeri 1 Boyolangu      *\n";
                                cout << "   *******************************\n";
                                cout << "   ============================================================\n";
                                }

                                else if (menu_utama_kritik=='2'){
                                    goto kritik_saran1;
                                }

                                else if (menu_utama_kritik=='3'){
                                    goto menu_utama;
                                }
                                else if (menu_utama_kritik=='4'){
                                    goto menu_awal_dispen;
                                }
                                    else {
                                            do {
                                                    system ("cls");
                                                    ruang_kesalahan();
                                                    cout << "   Pilihan Kamu ''" <<menu_utama_kritik<< "'' Tidak Tesedia\n\n";
                                                    cout << "   Masukkan Pilihan Yang Ada (1/2/3/4)\n\n";

                                                    goto verifikasi_kritik_saran2;
                                                }
                                                    while (!(menu_utama_kritik == '1'&& menu_utama_kritik == '2' && menu_utama_kritik == '3' && menu_utama_kritik=='4'));
                                        }
                                }



                    else if (kritik_saran=='3'){
                        goto menu_utama;
                    }

                         else {
                                do {
                                    menu_kesalahan_kritik_saran:
                                    system ("cls");
                                    ruang_kesalahan();
                                    cout << "   Pilihan Kamu ''" <<kritik_saran<< "'' Tidak Tesedia\n\n";
                                    cout << "   Masukkan Pilihan Yang Ada (1/2/3)\n\n";
                                    cout << "   =====================================\n";
                                    cout << "   Kembali Ke Menu Kritik & Saran? (y/t) : ";
                                    cin>>kritik_saran;

                                    if (kritik_saran=='y'){
                                    goto kritik_saran1;
                                    }
                                        else if (kritik_saran=='t'){
                                            cout << "   =====================================\n";
                                            cout << "   Yaudah Terimaksih\n";
                                            cout << "   ======================================\n";
                                            break;
                                        }
                                            else {
                                                do {
                                                    goto menu_kesalahan_kritik_saran;
                                                    }
                                                    while (!(kritik_saran == 'y' && kritik_saran == 't'));
                                                }

                                }
                                while (!(kritik_saran=='1'&& kritik_saran=='2' && kritik_saran== '3'));
                            }
            }
            //Bagian Ini Adalah Output Jika User Salah Menginputkan (bukan 1/2/3/4/5) Pada Menu Utama
            else if(!(pil_menu_tama=='1'&& pil_menu_tama=='2' && pil_menu_tama=='3' && pil_menu_tama=='4' && pil_menu_tama=='5')){
                    system ("cls");
                    ruang_kesalahan();

                    cout << "   Pilihan Kamu ''" <<pil_menu_tama<< "'' Tidak Tesedia\n\n";
                    cout << "   Masukkan Pilihan Yang Ada (y/t)\n\n";
                    cout << "   =====================================\n";
                    goto kmu;
                    }

            }

