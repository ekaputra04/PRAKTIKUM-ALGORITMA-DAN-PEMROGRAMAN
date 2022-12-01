#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||         MENENTUKAN NILAI AKHIR           ||");
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
    printf("\n\tSelanjutnya...");
    getch();
    system("cls");
}

void open1(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||            PROGRAM MENENTUKAN            ||");
    printf("\n\t||               NILAI AKHIR                ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t==============================================");
}

void main(){
    int kehadiran;
    float tugas1, tugas2, tugas3, quiz, uts, uas, rata_rata_tugas, nilai_akhir;

    open();

    //kehadiran
    open1();
    printf("\n\t 1. Kehadiran: ");
    printf("\n\t==============================================");
    printf("\n\tInputkan jumlah kehadiran Anda (maks. 15): ");
    while (scanf("%d", &kehadiran)==0 || kehadiran < 1 || kehadiran > 15){
        printf("\t----------------------------------------------");
        printf("\n\t [Mohon masukkan Kehadiran yang benar (1-15)]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan jumlah kehadiran Anda (maks. 15): ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    //Nilai Tugas
    open1();
    printf("\n\t 1. Kehadiran: %d", kehadiran);
    printf("\n\t 2. Nilai 3 Tugas: ");
    printf("\n\t==============================================");
    printf("\n\tMasukkan nilai tugas pertama: ");
    while (scanf("%f", &tugas1) == 0 || tugas1 < 0 || tugas1 > 100){
        printf("\t----------------------------------------------");
        printf("\n\t  Mohon masukkan Nilai Tugas yang benar");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukkan nilai tugas pertama: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tMasukkan nilai tugas kedua: ");
    while (scanf("%f", &tugas2) == 0 || tugas2 < 0 || tugas2 > 100){
        printf("\t----------------------------------------------");
        printf("\n\t  Mohon masukkan Nilai Tugas yang benar\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan nilai tugas kedua: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tMasukkan nilai tugas ketiga: ");
    while (scanf("%f", &tugas3) == 0 || tugas3 < 0 || tugas3 > 100){
        printf("\t----------------------------------------------");
        printf("\n\t    Mohon masukkan Nilai Tugas yang benar");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukkan nilai tugas ketiga: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    //Nilai Quiz
    open1();
    printf("\n\t 1. Kehadiran: %d", kehadiran);
    printf("\n\t 2. Nilai 3 Tugas: %.2f, %.2f, %.2f", tugas1, tugas2, tugas3);
    printf("\n\t 3. Nilai Quiz: ");
    printf("\n\t==============================================");
    printf("\n\tMasukkan Nilai Quiz: ");
    while (scanf("%f", &quiz) == 0 || quiz < 0 || quiz > 100){
        printf("\t----------------------------------------------");
        printf("\n\t     Mohon masukkan Nilai Quiz yang benar");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukkan Nilai Quiz: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    //Nilai UTS
    open1();
    printf("\n\t 1. Kehadiran: %d", kehadiran);
    printf("\n\t 2. Nilai 3 Tugas: %.2f, %.2f, %.2f", tugas1, tugas2, tugas3);
    printf("\n\t 3. Nilai Quiz: %.2f", quiz);
    printf("\n\t 4. Nilai UTS:");
    printf("\n\t==============================================");
    printf("\n\tMasukkan Nilai UTS: ");
    while (scanf("%f", &uts) == 0 || uts < 0 || uts > 100){
        printf("\t----------------------------------------------");
        printf("\n\t     Mohon masukkan Nilai UTS yang benar");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukkan Nilai UTS: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    //Nilai UAS
    open1();
    printf("\n\t 1. Kehadiran: %d", kehadiran);
    printf("\n\t 2. Nilai 3 Tugas: %.2f, %.2f, %.2f", tugas1, tugas2, tugas3);
    printf("\n\t 3. Nilai Quiz: %.2f", quiz);
    printf("\n\t 4. Nilai UTS: %.2f", uts);
    printf("\n\t 4. Nilai UAS:");
    printf("\n\t==============================================");
    printf("\n\tMasukkan Nilai UAS: ");
    while (scanf("%f", &uas) == 0 || uas < 0 || uas > 100){
        printf("\t----------------------------------------------");
        printf("\n\t     Mohon masukkan Nilai UAS yang benar");
        printf("\n\t----------------------------------------------");
        printf("\n\tMasukkan Nilai UAS: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    //Nilai Akhir
    open1();
    printf("\n\t 1. Kehadiran: %d", kehadiran);
    printf("\n\t 2. Nilai 3 Tugas: %.2f, %.2f, %.2f", tugas1, tugas2, tugas3);
    printf("\n\t 3. Nilai Quiz: %.2f", quiz);
    printf("\n\t 4. Nilai UTS: %.2f", uts);
    printf("\n\t 5. Nilai UAS: %.2f", uas);
    printf("\n\t==============================================");

    rata_rata_tugas =((tugas1+tugas2+tugas3)/3);
    nilai_akhir =(((kehadiran/15)*5)+(rata_rata_tugas*0.2)+(quiz*0.15)+(uts*0.3)+(uas*0.3));

    printf("\n\tNilai Akhir Mahasiswa adalah: %.2f", nilai_akhir);
    if(nilai_akhir>0 && nilai_akhir<45){
        printf("\n\tNilai Huruf Mahasiswa adalah: E\n");
    }else if(nilai_akhir>=45 && nilai_akhir<50){
        printf("\n\tNilai Huruf Mahasiswa adalah: D\n");
    }else if(nilai_akhir>=50 && nilai_akhir<55){
        printf("\n\tNilai Huruf Mahasiswa adalah: D+\n");
    }else if(nilai_akhir>=55 && nilai_akhir<60){
        printf("\n\tNilai Huruf Mahasiswa adalah: C\n");
    }else if(nilai_akhir>=60 && nilai_akhir<65){
        printf("\n\tNilai Huruf Mahasiswa adalah: C+\n");
    }else if(nilai_akhir>=65 && nilai_akhir<75){
        printf("\n\tNilai Huruf Mahasiswa adalah: B\n");
    }else if(nilai_akhir>=75 && nilai_akhir<80){
        printf("\n\tNilai Huruf Mahasiswa adalah: B+\n");
    }else if(nilai_akhir>=80 && nilai_akhir<=100){
        printf("\n\tNilai Huruf Mahasiswa adalah: A\n");
    }
    close();
    ulang();
}

void close(){
    printf("\t==============================================");
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
    printf("\n\tInputkan Pilihan Anda: ");
    while(scanf("%d", &menu) < 0 || menu > 1){
        printf("\t----------------------------------------------");
        printf("\n\t     [Mohon masukkan pilihan yang benar]");
        printf("\n\t----------------------------------------------");
        printf("\n\tInputkan Pilihan Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    if (menu==1){
        printf("\n\tSelanjutnya...");
        getch();
        system("cls");
        main();
    }else if(menu==0){
        printf("\n\tSelanjutnya...");
        getch();
        system("cls");
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
