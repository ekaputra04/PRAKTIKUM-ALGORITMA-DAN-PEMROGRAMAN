#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||             SELAMAT DATANG DI            ||");
    printf("\n\t||              PROGRAM MATRIX              ||");
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
    printf("\n\t||              PROGRAM MATRIX              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Operasi Matrix:                   ||");
    printf("\n\t|| 1. Perkalian Matrix                      ||");
    printf("\n\t|| 2. Penjumlahan Matrix                    ||");
    printf("\n\t|| 3. Transpose Matrix                      ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 1 || menu > 3){
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
        perkalian_matrix();
    }else if(menu==2){
        penjumlahan_matrix();
    }else if(menu==3){
        transpose_matrix();
    }
    close();
    ulang();
}

void perkalian_matrix(){
    int i, j, k, m, n, p, q, jumlah = 0, matriks1[10][10], matriks2[10][10], hasil[10][10];
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||              PROGRAM MATRIX              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||             PERKALIAN MATRIX             ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan jumlah baris matriks pertama: ");
    while (scanf("%d", &m)==0 || m < 1 || m > 10){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan jumlah baris matriks pertama: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tMasukkan jumlah kolom matriks pertama: ");
    while (scanf("%d", &n)==0 || n < 1 || n > 10){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan jumlah kolom matriks pertama: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tMasukkan jumlah baris matriks kedua: ");
    while (scanf("%d", &p)==0 || p < 1 || p > 10){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan jumlah baris matriks kedua: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tMasukkan jumlah kolom matriks kedua: ");
    while (scanf("%d", &q)==0 || q < 1 || q > 10){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan jumlah kolom matriks kedua: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    if(n != p){
        printf("\n\tMatriks tidak dapat dikalikan satu sama lain.\n");
    }else{
        printf("\n\tMasukkan elemen matriks pertama: \n");
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
                while (scanf("%d", &matriks1[i][j])==0){
                    printf("\t----------------------------------------------");
                    printf("\n\tAngka yang Anda inputkan salah!");
                    printf("\n\tMohon inputkan angka yang benar...\n");
                    printf("\t----------------------------------------------");
                    printf("\n\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
                    int c;
                    while((c=getchar())!='\n' && c!=EOF);
                }
            }
        }
        printf("\n\tMasukkan elemen matriks kedua: \n");
        for(i = 0; i < p; i++){
            for(j = 0; j < q; j++){
                printf("\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
                while (scanf("%d", &matriks2[i][j])==0){
                    printf("\t----------------------------------------------");
                    printf("\n\tAngka yang Anda inputkan salah!");
                    printf("\n\tMohon inputkan angka yang benar...\n");
                    printf("\t----------------------------------------------");
                    printf("\n\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
                    int c;
                    while((c=getchar())!='\n' && c!=EOF);
                }
            }
        }
        for(i = 0; i < m; i++){
            for(j = 0; j < q; j++){
                for(k = 0; k < p; k++){
                    jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }
        printf("\t----------------------------------------------");
        printf("\n\tHasil perkalian matriks: \n");
        for(i = 0; i < m; i++){
            for(j = 0; j < q; j++){
                printf("\t%d", hasil[i][j]);
            }
            printf("\n");
        }
    }
    printf("\t==============================================");
}

void penjumlahan_matrix(){
    int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||              PROGRAM MATRIX              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||            PENJUMLAHAN MATRIX            ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan jumlah baris matriks: ");
    while (scanf("%d", &m)==0 || m < 1 || m > 10){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan jumlah baris matriks: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tMasukkan jumlah kolom matriks: ");
    while (scanf("%d", &n)==0 || n < 1 || n > 10){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan jumlah kolom matriks: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    printf("\n\tMasukkan elemen matrix pertama: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
            while (scanf("%d", &matriks1[i][j])==0){
                printf("\t----------------------------------------------");
                printf("\n\tAngka yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka yang benar...\n");
                printf("\t----------------------------------------------");
                printf("\n\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
                int c;
                while((c=getchar())!='\n' && c!=EOF);
            }
        }
    }
    printf("\n\tMasukkan elemen matrix kedua: \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
            while (scanf("%d", &matriks2[i][j])==0){
                printf("\t----------------------------------------------");
                printf("\n\tAngka yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka yang benar...\n");
                printf("\t----------------------------------------------");
                printf("\n\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
                int c;
                while((c=getchar())!='\n' && c!=EOF);
            }
        }
    }
    printf("\t----------------------------------------------");
    printf("\n\tHasil penjumlahan matrix: \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            printf("\t%d", hasil[i][j]);
        }
        printf("\n");
    }
    printf("\t==============================================");
}

void transpose_matrix(){
    int i, j, m, n, matriks[10][10], transpose[10][10];
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||              PROGRAM MATRIX              ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||             TRANSPOSE MATRIX             ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan jumlah baris matriks: ");
    while (scanf("%d", &m)==0 || m < 1 || m > 10){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan jumlah baris matriks: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tMasukkan jumlah kolom matriks: ");
    while (scanf("%d", &n)==0 || n < 1 || n > 10){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tMasukkan jumlah kolom matriks: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    printf("\n\tMasukkan elemen matriks:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
            while (scanf("%d", &matriks[i][j])==0){
                printf("\t----------------------------------------------");
                printf("\n\tAngka yang Anda inputkan salah!");
                printf("\n\tMohon inputkan angka yang benar...\n");
                printf("\t----------------------------------------------");
                printf("\n\tElemen baris ke-%d kolom ke-%d = ", i+1, j+1);
                int c;
                while((c=getchar())!='\n' && c!=EOF);
            }
        }
    }
    for (i = 0; i < m; i ++){
        for(j = 0; j < n; j++){
            transpose[j][i] = matriks[i][j];
        }
    }
    printf("\t----------------------------------------------");
    printf("\n\tSebelum transpose matriks:\n");
    for (i = 0; i < m; i ++){
        for(j = 0; j < n; j++){
            printf("\t%d",matriks[i][j]);
        }
        printf("\n");
    }
    printf("\t----------------------------------------------");
    printf("\n\tHasil transpose matriks:\n");
    for (i = 0; i < n; i ++){
        for(j = 0; j < m; j++){
            printf("\t%d",transpose[i][j]);
        }
        printf("\n");
    }
    printf("\t==============================================");
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
