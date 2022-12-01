#include <stdio.h>
#include <stdlib.h>

struct kubus_struct{
    float sisi;
    float volume;
    float luas_permukaan;
}kubus_struct;

union kubus_union{
    float sisi;
    float volume;
    float luas_permukaan;
}kubus_union;

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||        MENGHITUNG LUAS PERMUKAAN         ||");
    printf("\n\t||             DAN VOLUME KUBUS             ||");
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
    float sisi;
    open();
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||        MENGHITUNG LUAS PERMUKAAN         ||");
    printf("\n\t||             DAN VOLUME KUBUS             ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan Panjang Sisi Kubus: ");
    while (scanf("%f", &sisi)==0 || sisi < 0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    kubus_struct.sisi = sisi;
    kubus_struct.luas_permukaan = 6 * kubus_struct.sisi * kubus_struct.sisi;
    kubus_struct.volume = kubus_struct.sisi * kubus_struct.sisi * kubus_struct.sisi;
    printf("\t----------------------------------------------");
    printf("\n\tKubus Dengan Struct: ");
    printf("\n\tSisi           : %.2f", kubus_struct.sisi);
    printf("\n\tLuas Permukaan : %.2f", kubus_struct.luas_permukaan);
    printf("\n\tVolume         : %.2f", kubus_struct.volume);
    printf("\n\t----------------------------------------------");
    //PS : PENGISIAN VARIABEL PADA UNION HARUS DILAKUKKAN SECARA TERPISAH SEBELUM PEMANGGILAN VARIABEL
    //DIKARENAKAN UNION MEMILIKI SIFAT DIMANA SETIAP VARIABEL YANG DIUBAH MAKA AKAN OTOMATIS MENGUBAH VARIABEL LAINNYA
    printf("\n\tKubus Dengan Union: ");
    kubus_union.sisi = sisi;
    printf("\n\tSisi           : %.2f", kubus_union.sisi);
    kubus_union.luas_permukaan = 6 * sisi * sisi;
    printf("\n\tLuas Permukaan : %.2f", kubus_union.luas_permukaan);
    kubus_union.volume = sisi * sisi * sisi;
    printf("\n\tVolume         : %.2f", kubus_union.volume);
    printf("\n\t----------------------------------------------");
    printf("\n\tUkuran Memory pada Kubus Struct : %d", sizeof(kubus_struct));
    printf("\n\tUkuran Memory pada Kubus Union  : %d", sizeof(kubus_union));
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
