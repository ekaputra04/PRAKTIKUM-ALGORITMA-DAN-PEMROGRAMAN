#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void open();
void main();
float median(float *arr, int n);
float modus(float *arr, int n);
float mean(float *arr, int n);
void close();
void ulang();
void end();

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||              SELAMAT DATANG              ||");
    printf("\n\t||            PROGRAM STATISTIKA            ||");
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
    int banyak_data;
    float data[100];
    open();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM STATISTIKA            ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||DESKRIPSI:                                ||");
    printf("\n\t|| Program akan menampilkan median, modus,  ||");
    printf("\n\t|| dan mean dari n-buah data yang           ||");
    printf("\n\t|| diinputkan pengguna                      ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan jumlah data: ");
    while (scanf("%d", &banyak_data)==0 || banyak_data < 1){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------\n");
    for(int i=0; i<banyak_data; i++){
        printf("\tMasukkan data ke-%d : ", i+1);
        while (scanf("%f", &data[i])==0){
            printf("\t----------------------------------------------");
            printf("\n\tAngka yang Anda inputkan salah!");
            printf("\n\tMohon inputkan pilihan yang benar...\n");
            printf("\t----------------------------------------------");
            printf("\tMasukkan data ke-%d : ", i+1);
            int c;
            while((c=getchar())!='\n' && c!=EOF);
        }
    }

    printf("\t----------------------------------------------");
    printf("\n\tMedian data tersebut : %.2f", median(data, banyak_data));
    printf("\n\tModus data tersebut  : %.2f", modus(data, banyak_data));
    printf("\n\tMean data tersebut   : %.2f", mean(data, banyak_data));
    printf("\n\t==============================================");
    close();
    ulang();
}

float median(float *arr, int n){
    float temp;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if(n % 2 == 0){
        return (arr[n / 2] + arr[(n / 2) - 1]) / 2;
    }else{
        return arr[n / 2];
    }
}

float modus(float *arr, int n){
    int count = 1, max = 0;
    float modus = arr[0];
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if (count > max){
            max = count;
            modus = arr[i];
        }
        count = 1;
    }
    return modus;
}

float mean(float *arr, int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum / n;
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
    while(scanf("%d", &menu)==0 || menu < 0 || menu > 1){
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
