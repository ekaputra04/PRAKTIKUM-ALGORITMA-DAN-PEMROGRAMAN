#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||             DERET FIBONACCI              ||");
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
    printf("\n\t||             DERET FIBONACCI              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Metode Penyelesaian Deret         ||");
    printf("\n\t||Fibonacci:                                ||");
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
        rekursif();
    }else if(menu==2){
        iteratif();
    }
    close();
    ulang();
}

void rekursif(){
    int batas;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||             DERET FIBONACCI              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||             METODE REKURSIF              ||");
    printf("\n\t==============================================");
    printf("\n\tMasukan jumlah deret : ");
    while (scanf("%d", &batas)==0 || batas < 1){
        printf("\t----------------------------------------------");
        printf("\n\t      [Mohon masukkan angka yang benar!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukan jumlah deret : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    printf("\n\tDeret Fibonacci : ");
    printf("\n\t");
    for(int i = 0; i < batas; i++){
        printf("%d ", fibonacci(i));
    }
    printf("\n\t==============================================");
}

int fibonacci(int number) {
    if ((number == 0) || (number == 1)) { /* Basis */
        return 1;
    } else { /* Rekurens */
        return fibonacci(number-1) + fibonacci(number-2);
    }
}

void iteratif(){
    int batas, deret[100], total=0, i=0;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||             DERET FIBONACCI              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||             METODE ITERATIF              ||");
    printf("\n\t==============================================");
    printf("\n\tMasukan jumlah deret : ");
    while (scanf("%d", &batas)==0 || batas < 1){
        printf("\t----------------------------------------------");
        printf("\n\t      [Mohon masukkan angka yang benar!]");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukan jumlah deret : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    printf("\n\tDeret Fibonacci : ");
    printf("\n\t");
    do{
        if(i<2){
            deret[i]=1;
        }
        else{
            deret[i]=deret[i-2]+deret[i-1];
        }
        total= total + deret[i];
        printf("%d ", deret[i]);
        i++;
    }while(i<batas);
    printf("\n\t----------------------------------------------");
    printf("\n\tTotal deret : %d", total);
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
