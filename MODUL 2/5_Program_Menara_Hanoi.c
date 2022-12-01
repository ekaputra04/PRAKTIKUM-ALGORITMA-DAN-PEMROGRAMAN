#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||               MENARA HANOI               ||");
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
    int menu;
    open();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||               MENARA HANOI               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Metode Penyelesaian Menara Hanoi: ||");
    printf("\n\t|| 1. Metode Rekursif                       ||");
    printf("\n\t|| 2. Metode Iteratif                       ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 1 || menu > 2){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    close();
    if(menu==1){
        HanoiRekursif();
    }else if(menu==2){
        HanoiIteratif();
    }
    close();
    ulang();
}

void HanoiRekursif(){
    int cakram, total_langkah;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||               MENARA HANOI               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||              METODE REKURSIF             ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan total jumlah cakram : ");
    while(scanf("%d", &cakram)==0 || cakram<1){
        printf("\t----------------------------------------------");
        printf("\n\t      [Mohon masukkan jumlah yang benar!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukkan total jumlah cakram : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------\n");
    FungsiHanoiRekursif(cakram, 'A', 'B', 'C');
    total_langkah = pow(2, cakram) - 1;
    printf("\t----------------------------------------------");
    printf("\n\tJumlah langkah minimum yang dibutuhkan untuk");
    printf("\n\tmenyelesaikan masalah MENARA HANOI adalah %d langkah", total_langkah);
    printf("\n\t==============================================");
}

void HanoiIteratif(){
    int cakram, total_langkah;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||               MENARA HANOI               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||              METODE ITERATIF             ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan total jumlah cakram : ");
    while(scanf("%d", &cakram)==0 || cakram<1) {
        printf("\t----------------------------------------------");
        printf("\n\t      [Mohon masukkan jumlah yang benar!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukkan total jumlah cakram : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------\n");
    FungsiHanoiIteratif(cakram);
    total_langkah = pow(2, cakram) - 1;
    printf("\t----------------------------------------------");
    printf("\n\tJumlah langkah minimum yang dibutuhkan untuk");
    printf("\n\tmenyelesaikan masalah MENARA HANOI adalah %d langkah", total_langkah);
    printf("\n\t==============================================");
}

void FungsiHanoiRekursif(int total, char awal, char tengah, char tujuan){
    if(total > 0){
        FungsiHanoiRekursif(total-1, awal, tujuan, tengah);
        printf("\tMemindahkan cakram ke-%d dari tiang %c ke tiang %c\n", total, awal, tujuan);
        FungsiHanoiRekursif(total-1, tengah, awal, tujuan);
    }
}

void FungsiHanoiIteratif(int total){
    char tiang[3] = {'A', 'B', 'C'};
    for(int i = 1; i < (1<<total); i++){
        printf("\tLangkah %d : Pindahkan cakram dari %c ke %c\n", i, tiang[(i&i-1)%3], tiang[((i|i-1)+1)%3]);
    }
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
    printf("\n\t||Apakah anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    while(scanf("%d", &menu) ==0 || menu < 0 || menu > 1){
        printf("\t----------------------------------------------");
        printf("\n\t     [Mohon masukkan pilihan yang benar]");
        printf("\n\t----------------------------------------------");
        printf("\n\tPilihan : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    if (menu == 1){
        close();
        main();
    }else if(menu == 0){
        close();
        end();
    }
}

void end(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI||");
    printf("\n\t||           SAMPAI JUMPA KEMBALI           ||");
    printf("\n\t||                                          ||");
    printf("\n\t||         SALAM HANGAT: KELOMPOK 3         ||");
    printf("\n\t||                                          ||");
    printf("\n\t==============================================\n\n\n");
}
