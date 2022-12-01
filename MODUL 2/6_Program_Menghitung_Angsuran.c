#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t========================================================");
    printf("\n\t||                                                    ||");
    printf("\n\t||             SELAMAT DATANG DI PROGRAM              ||");
    printf("\n\t||                MENGHITUNG ANGSURAN                 ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||----------------------------------------------------||");
    printf("\n\t||                     KELOMPOK 3                     ||");
    printf("\n\t||----------------------------------------------------||");
    printf("\n\t||ANGGOTA:                                            ||");
    printf("\n\t|| 1. Razky Yoga Adewindra                            ||");
    printf("\n\t||    (1805551134)                                    ||");
    printf("\n\t|| 2. Ni Putu Mirah Kartika Cahyani                   ||");
    printf("\n\t||    (2205551048)                                    ||");
    printf("\n\t|| 3. Resandy Prisadana                               ||");
    printf("\n\t||    (2205551050)                                    ||");
    printf("\n\t|| 4. Arya Prawira Perdana                            ||");
    printf("\n\t||    (2205551051)                                    ||");
    printf("\n\t|| 5. Putu Aditya Mahendra Putra                      ||");
    printf("\n\t||    (2205551058)                                    ||");
    printf("\n\t|| 6. I Putu Eka Putra Juniawan                       ||");
    printf("\n\t||    (2205551087)                                    ||");
    printf("\n\t|| 7. Ni Putu Intan Oka Apriliana                     ||");
    printf("\n\t||    (2205551109)                                    ||");
    printf("\n\t|| 8. Komang Merthi Utami                             ||");
    printf("\n\t||    (2205551117)                                    ||");
    printf("\n\t========================================================");
    close();
}

void main(){
    float pokok, besar_bunga, total_bunga, total_angsuran, angsuran_pokok, waktu, bunga, apb; //apb = angsuran per bulan
    open();
    printf("\n\t========================================================");
    printf("\n\t||                                                    ||");
    printf("\n\t||                      PROGRAM                       ||");
    printf("\n\t||                MENGHITUNG ANGSURAN                 ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||----------------------------------------------------||");
    printf("\n\t||                     KELOMPOK 3                     ||");
    printf("\n\t========================================================");
    printf("\n\tPokok Pinjaman             : ");
    while (scanf("%f", &pokok)==0 || pokok < 0){
        printf("\t--------------------------------------------------------");
        printf("\n\t           [Mohon inputkan angka yang benar!]");
        printf("\n\t--------------------------------------------------------");
        printf("\n\tPokok Pinjaman             : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    printf("\tBesar Bunga (dalam persen) : ");
    while (scanf("%f", &besar_bunga)==0 || besar_bunga < 0){
        printf("\t--------------------------------------------------------");
        printf("\n\t           [Mohon inputkan angka yang benar!]");
        printf("\n\t--------------------------------------------------------");
        printf("\n\tBesar Bunga (dalam persen) : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    printf("\tLama Pinjaman (bulan)      : ");
    while (scanf("%f", &waktu)==0 || waktu < 0){
        printf("\t--------------------------------------------------------");
        printf("\n\t           [Mohon inputkan angka yang benar!]");
        printf("\n\t--------------------------------------------------------");
        printf("\n\tLama Pinjaman (bulan)      : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\t========================================================");
    printf("\n\t                   RINCIAN PEMBAYARAN                   ");
    printf("\n\t========================================================");
    printf("\n\tBulan  |  Bunga  |  Angsuran Pokok  |  Angsuran Perbulan");
    printf("\n\t--------------------------------------------------------");
    for(int j=1; j<=waktu; j++){
        angsuran_pokok = pokok/waktu;
        bunga = (pokok-((j-1) * angsuran_pokok)) * ((float)(besar_bunga/100)/12);
        apb = (bunga + angsuran_pokok);

        printf("\n\t%d       Rp.%.0f       Rp.%.0f          Rp.%.0f", j, floor(bunga), angsuran_pokok, floor(apb));
        total_bunga = total_bunga + bunga;
        total_angsuran = total_angsuran + apb;
    }
    printf("\n\t========================================================");
    printf("\n\tTotal Bunga                 : Rp. %.0f", total_bunga);
    printf("\n\tTotal Angsuran              : Rp. %.0f", total_angsuran);
    printf("\n\t========================================================");
    ulang();
}

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("cls");
}

void ulang(){
    int menu;
    close();
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    while(scanf("%d", &menu)==0 || menu < 0 || menu > 1){
        printf("\t----------------------------------------------");
        printf("\n\t     [Mohon masukkan pilihan yang benar]");
        printf("\n\t----------------------------------------------");
        printf("\n\tPilihan : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    if (menu==1){
        close();
        main();
    }else if(menu==0){
        end();
    }
}

void end(){
    close();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI||");
    printf("\n\t||           SAMPAI JUMPA KEMBALI           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||         SALAM HANGAT: KELOMPOK 3         ||");
    printf("\n\t||                                          ||");
    printf("\n\t==============================================\n\n\n");
}
