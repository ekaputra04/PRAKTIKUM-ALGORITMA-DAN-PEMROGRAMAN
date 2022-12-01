#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||        KONVERSI BILANGAN DESIMAL         ||");
    printf("\n\t||          MENJADI BILANGAN BINER          ||");
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
    open();
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||         PROGRAM KONVERSI BILANGAN        ||");
    printf("\n\t||           DESIMAL MENJADI BINER          ||");
    printf("\n\t||                    ATAU                  ||");
    printf("\n\t||           BINER MENJADI DESIMAL          ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan program:                          ||");
    printf("\n\t|| 1. Bilangan Desimal Menjadi Biner        ||");
    printf("\n\t|| 2. Bilangan Biner Menjadi Desimal        ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan menu:");
    while (scanf("%d", &menu)==0 || menu < 1 || menu > 2){
        printf("\t----------------------------------------------");
        printf("\n\t     [Mohon masukkan pilihan yang benar!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan pilihan menu:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    if(menu==1){
        DesimalBiner();
    }else if(menu==2){
        BinerDesimal();
    }
    close();
    ulang();
}

void DesimalBiner(){
    int Biner[8], Desimal, i;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||         PROGRAM KONVERSI BILANGAN        ||");
    printf("\n\t||           DESIMAL MENJADI BINER          ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Angka Desimal: ");
    while (scanf("%d", &Desimal)==0 || Desimal <0 || Desimal >= 255){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan Angka Desimal: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    for(i=0; Desimal>0; i++){
        Biner[i] = Desimal%2;
        Desimal = Desimal/2;
    }
    printf("\t----------------------------------------------");
    printf("\n\tAngka binernya adalah: ");
    for(i=i-1 ;i>=0 ;i--) {
        printf("%d",Biner[i]);
    }
    printf("\n\t==============================================");
}

void BinerDesimal(){
    int angka_biner, angka_desimal=0, i=1, digit;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||         PROGRAM KONVERSI BILANGAN        ||");
    printf("\n\t||           BINER MENJADI DESIMAL          ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Angka Biner: ");
    while (scanf("%d", &angka_biner)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan Angka Biner: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    printf("\n\tAngka desimal dari biner %d",angka_biner);
    while(angka_biner!=0){
        digit = angka_biner % 10;
        angka_desimal = angka_desimal + (digit*i);
        i = i*2;
        angka_biner = angka_biner/10;
    }
    printf(" adalah = %d", angka_desimal);
    printf("\n\t==============================================");
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
    while(scanf("%d", &menu) < 0 || menu > 1){
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
