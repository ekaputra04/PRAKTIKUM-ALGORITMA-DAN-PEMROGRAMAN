#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||          ENKRIPSI DAN DESKRIPSI          ||");
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

int main(){
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          ENKRIPSI DAN DESKRIPSI          ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Menu Program:                     ||");
    printf("\n\t|| 1. Enkripsi                              ||");
    printf("\n\t|| 2. Deskripsi                             ||");
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

    if(menu == 1){
        enkripsi();
    }else if(menu == 2){
        deskripsi();
    }
    close();
    ulang();
}

void enkripsi(){
    int kunci;
    char teks[100];
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          ENKRIPSI DAN DESKRIPSI          ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                 ENKRIPSI                 ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan teks yang ingin di-enkripsi : ");
    fflush(stdin);
    fgets(teks, sizeof(teks), stdin);
    printf("\n\tMasukan jumlah pergeseran : ");
    while (scanf("%d", &kunci)==0 || kunci < 1){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    printf("\n\tTeks sebelum di-enkripsi : %s", teks);
    fungsi_enkripsi(teks, kunci);
    printf("\n\tTeks setelah di-enkripsi : %s", teks);
    printf("\n\t===============================================");
}

void deskripsi(){
    int kunci;
    char teks[100];
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||                 PROGRAM                  ||");
    printf("\n\t||          ENKRIPSI DAN DESKRIPSI          ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                DESKRIPSI                 ||");
    printf("\n\t==============================================");
    printf("\n\tMasukkan teks yang ingin di-deskripsi : ");
    fflush(stdin);
    fgets(teks, sizeof(teks), stdin);
    printf("\n\tMasukan jumlah pergeseran : ");
    while (scanf("%d", &kunci)==0 || kunci < 1){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\t----------------------------------------------");
    printf("\n\tTeks sebelum di-deskripsi : %s", teks);
    fungsi_deskripsi(teks, kunci);
    printf("\n\tTeks setelah di-deskripsi : %s", teks);
    printf("\t===============================================");
}

void fungsi_enkripsi(char *teks, int kunci){
    for(int i = 0; teks[i] != '\0'; ++i){
		if(teks[i] >= 'A' && teks[i] <= 'Z') {
 			teks[i] = teks[i] + 32;
		}

		if(teks[i] >= 'a' && teks[i] <= 'z'){
			teks[i] = teks[i] + kunci;
			if(teks[i] > 'z'){
				teks[i] = teks[i] - 26;
			}
			teks[i] = teks[i] -32;
		}
	}
}

void fungsi_deskripsi(char *teks, int kunci){
	for(int i = 0; teks[i] != '\0'; ++i){
		if(teks[i] >= 'a' && teks[i] <= 'z') {
			teks[i] = teks[i] - 32;
 		}

		if(teks[i] >= 'A' && teks[i] <= 'Z'){
			teks[i] = teks[i] - kunci;
			if(teks[i] < 'A'){
				teks[i] = teks[i] + 26;
			}
			teks[i] = teks[i] + 32;
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
