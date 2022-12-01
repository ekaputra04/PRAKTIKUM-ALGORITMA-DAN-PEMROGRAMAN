#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||             SORTING DENGAN               ||");
    printf("\n\t||               BUBBLE SORT                ||");
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
    int n, pilihan;
    clock_t waktu;
    double waktu1, waktu2;
    open();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||          PROGRAM SORTING DENGAN          ||");
    printf("\n\t||               BUBBLE SORT                ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Jumlah Data:                      ||");
    printf("\n\t|| 1. 1000 Data                             ||");
    printf("\n\t|| 2. 16000 Data                            ||");
    printf("\n\t|| 3. 64000 Data                            ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan Anda: ");
    while (scanf("%d", &pilihan)==0 || pilihan < 1 || pilihan > 3){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(pilihan == 1){
        n = 1000;
    }else if(pilihan == 2){
        n = 16000;
    }else if(pilihan == 3){
        n = 64000;
    }

    int arr[n], arr2[n];
    bilanganRandom(arr, n);

    printf("\n\t==============================================");
    printf("\n\tArray %d random sebelum di sort :\n", n);
    printArray(arr, n);
    duplikatArray(arr, arr2, n);

    waktu = clock();
    bubbleSort(arr, n);
    waktu = clock() - waktu;
    waktu1 = (double)(waktu) / CLOCKS_PER_SEC;

    waktu = clock();
    bubbleSortPointer(arr2, n);
    waktu = clock() - waktu;
    waktu2 = (double)(waktu) / CLOCKS_PER_SEC;

    printf("\n\t==============================================");
    printf("\n\t%d angka setelah di-sorting: ", n);
    getch();
    printArray(arr, n);
    printf("\n\t==============================================");
    printf("\n\tHasil Waktu: ");
    printf("\n\t----------------------------------------------");
    printf("\n\tWaktu Bubble Sort                = %f", waktu1);
    printf("\n\tWaktu Bubble Sort dengan Pointer = %f", waktu2);
    if(waktu1 < waktu2){
        printf("\n\t----------------------------------------------");
        printf("\n\tBubble Sort Lebih Cepat!");
        printf("\n\t==============================================");
    }else if(waktu2 < waktu1){
        printf("\n\t----------------------------------------------");
        printf("\n\tBubble Sort dengan Pointer Lebih Cepat!");
        printf("\n\t==============================================");
    }else if(waktu1 == waktu2){
        printf("\n\t----------------------------------------------");
        printf("\n\tKedua Metode Setara!");
        printf("\n\t==============================================");
    }
    close();
    ulang();
}

void bilanganRandom(int arr[], int n){
    int i;
    srand(time(NULL));

    for (i = 0; i < n; i++) {
        arr[i] = rand()%n;
    }
}

void duplikatArray(int asal[], int target[], int n){
    int i;
    for (i = 0; i < n; i++){
        target[i] = asal[i];
    }
}

void printArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("\n\tAngka ke-%d = %d", i+1, arr[i]);
    }
}

void bubbleSort(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortPointer(int *array, int size){
    int i, j, temp;
    for (i = 0; i < size; i++){
        for (j = 0; j < size - i - 1; j++){
            if (*(array + j) > *(array + j + 1)){
                temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
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
