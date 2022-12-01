#include <stdio.h>
#include <stdlib.h>

struct pegawai{
	int jam_kerja;
	int gaji_perjam;
	int gaji_lembur;
	int gaji_harian;
};


void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||         MENGHITUNG GAJI PEGAWAI          ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||ANGGOTA:                                  ||");
    printf("\n\t|| 1. Razky Yoga Adewindra                  ||");
    printf("\n\t||    (1805551134)                          ||");
    printf("\n\t|| 2. Ni Putu Mirah Kartika Cahyani         ||");
    printf("\n\t||    (2205551048)                          ||");
    printf("\n\t|| 3. Resandy Prisadana                     ||");
    printf("\n\t||    (2205551050)                          ||");
    printf("\n\t|| 4. Arya Prawira Perdana                  ||");
    printf("\n\t||    (2205551051)                          ||");
    printf("\n\t|| 5. Putu Aditya Mahendra Putra            ||");
    printf("\n\t||    (2205551058)                          ||");
    printf("\n\t|| 6. I Putu Eka Putra Juniawan             ||");
    printf("\n\t||    (2205551087)                          ||");
    printf("\n\t|| 7. Ni Putu Intan Oka Apriliana           ||");
    printf("\n\t||    (2205551109)                          ||");
    printf("\n\t|| 8. Komang Merthi Utami                   ||");
    printf("\n\t||    (2205551117)                          ||");
    printf("\n\t==============================================");
    close();
}

void main(){
    struct pegawai pegawai01;
    open();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||         MENGHITUNG GAJI PEGAWAI          ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Jumlah Jam Kerja: ");
    while (scanf("%d", &pegawai01.jam_kerja)==0 || pegawai01.jam_kerja < 0 || pegawai01.jam_kerja > 24){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan Jumlah Jam Kerja: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    if(pegawai01.jam_kerja>8){
        pegawai01.gaji_perjam = 8 * 10625;
        pegawai01.gaji_lembur = (pegawai01.jam_kerja - 8) * 10625 * 8;
        pegawai01.gaji_harian = pegawai01.gaji_perjam + pegawai01.gaji_lembur;
        printf("\n\tGaji perjam Anda adalah Rp. %d", pegawai01.gaji_perjam);
        printf("\n\tGaji lembur Anda adalah Rp. %d", pegawai01.gaji_lembur);
        printf("\n\t----------------------------------------------");
        printf("\n\tGaji harian Anda adalah Rp. %d", pegawai01.gaji_harian);
    }else if(pegawai01.jam_kerja<=8){
        pegawai01.gaji_perjam = pegawai01.jam_kerja * 10625;
        printf("\n\tGaji perjam Anda adalah Rp. %d", pegawai01.gaji_perjam);
        printf("\n\tGaji lembur Anda adalah Rp. 0- ");
        printf("\n\t----------------------------------------------");
        printf("\n\tGaji harian Anda adalah Rp. %d", pegawai01.gaji_perjam);
    }
    printf("\n\t==============================================");
    close();
    ulang();
}

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("cls");
}

void ulang(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah Anda ingin mengulang ?             ||");
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
        close();
        selesai();
    }
}

void selesai(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI||");
    printf("\n\t||           SAMPAI JUMPA KEMBALI           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||         SALAM HANGAT: KELOMPOK 3         ||");
    printf("\n\t||                                          ||");
    printf("\n\t==============================================\n\n\n");
}
