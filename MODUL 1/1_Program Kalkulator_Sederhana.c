#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||           KALKULATOR BILANGAN            ||");
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

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("cls");
}

int main()
{
    open();
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM KALKULATOR            ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan program:                          ||");
    printf("\n\t|| 1. Penjumlahan                           ||");
    printf("\n\t|| 2. Pengurangan                           ||");
    printf("\n\t|| 3. Perkalian                             ||");
    printf("\n\t|| 4. Pembagian                             ||");
    printf("\n\t|| 5. Modulus                               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan menu:");
    while (scanf("%d", &menu)==0 || menu < 1 || menu > 5){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan menu:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    if(menu==1){
        penjumlahan();
    }else if(menu==2){
        pengurangan();
    }else if(menu==3){
        perkalian();
    }else if(menu==4){
        pembagian();
    }else if(menu==5){
        modulus();
    }
    ulang();
}

int penjumlahan(){
    //kalkulator penjumlahan
    float bil1, bil2, hasil1;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM KALKULATOR            ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||          KALKULATOR PENJUMLAHAN          ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan bilangan pertama: ");
    while (scanf("%f", &bil1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan pertama:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan bilangan kedua: ");
    while (scanf("%f", &bil2)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan kedua:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    hasil1 = bil1 + bil2;
    printf("\t==============================================");
    printf("\n\tHasil dari penjumlahan %.2f + %.2f adalah %.2f", bil1, bil2, hasil1);
    printf("\n\t==============================================");
    close();
}

int pengurangan(){
    //kalkulator pengurangan
    float bil1, bil2, hasil2;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM KALKULATOR            ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||          KALKULATOR PENGURANGAN          ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan bilangan pertama: ");
    while (scanf("%f", &bil1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan pertama:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan bilangan kedua: ");
    while (scanf("%f", &bil2)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan kedua:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    hasil2 = bil1 - bil2;
    printf("\t==============================================");
    printf("\n\tHasil dari pengurangan %.2f - %.2f adalah %.2f", bil1, bil2, hasil2);
    printf("\n\t==============================================");
    close();
}

int perkalian(){
    //kalkulator perkalian
    float bil1, bil2, hasil3;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM KALKULATOR            ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||           KALKULATOR PERKALIAN           ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan bilangan pertama: ");
    while (scanf("%f", &bil1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan pertama:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan bilangan kedua: ");
    while (scanf("%f", &bil2)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan kedua:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    hasil3 = bil1 * bil2;
    printf("\t==============================================");
    printf("\n\tHasil dari perkalian %.2f * %.2f adalah %.2f", bil1, bil2, hasil3);
    printf("\n\t==============================================");
    close();
}

int pembagian(){
    //kalkulator pembagian
    float bil1, bil2, hasil4;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM KALKULATOR            ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||           KALKULATOR PEMBAGIAN           ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan bilangan pertama: ");
    while (scanf("%f", &bil1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan pertama:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan bilangan kedua: ");
    while (scanf("%f", &bil2)==0 || bil2==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan kedua:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    hasil4 = bil1 / bil2;
    printf("\t==============================================");
    printf("\n\tHasil dari pembagian %.2f / %.2f adalah %.2f", bil1, bil2, hasil4);
    printf("\n\t==============================================");
    close();
}

int modulus(){
    //kalkulator modulus
    int bil1, bil2, hasil5;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM KALKULATOR            ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||            KALKULATOR MODULUS            ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan bilangan pertama: ");
    while (scanf("%d", &bil1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan pertama:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan bilangan kedua: ");
    while (scanf("%d", &bil2)==0 || bil2==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan bilangan kedua:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    hasil5 = bil1 % bil2;
    printf("\t==============================================");
    printf("\n\tHasil dari %d modulus %d adalah %d", bil1, bil2, hasil5);
    printf("\n\t==============================================");
    close();
}

int ulang(){
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
