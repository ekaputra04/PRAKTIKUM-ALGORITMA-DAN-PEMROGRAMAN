#include <stdio.h>
#include <stdlib.h>

int tabung();
float f_volume_tabung(float r_tabung, float t_tabung);
float f_lp_tabung(float r_tabung, float t_tabung);
int bola();
float f_volume_bola(float r_bola);
float f_lp_bola(float r_bola);
int limas_segiempat();
float f_volume_limas(float alas_limas, float tinggi_limas);
float f_lp_limas(float alas_limas, float tinggi_limas);
int prisma_segitiga();
int prisma_segitiga_samasisi();
float f_volume_prisma_samasisi(float alas_prisma_samasisi, float tinggi_prisma_samasisi);
float f_lp_prisma_samasisi(float alas_prisma_samasisi, float tinggi_prisma_samasisi);
int prisma_segitiga_sikusiku();
float f_volume_prisma_siku(float alas1_prisma_siku, float alas2_prisma_siku, float tinggi_prisma_siku);
float f_lp_prisma_siku(float alas1_prisma_siku, float alas2_prisma_siku, float tinggi_prisma_siku);
int prisma_segitiga_sembarang();
float f_volume_prisma_s(float alas1_prisma_s, float alas2_prisma_s, float alas3_prisma_s, float tinggi_prisma_s);
float f_lp_prisma_s(float alas1_prisma_s, float alas2_prisma_s, float alas3_prisma_s, float tinggi_prisma_s);
int kerucut();
float f_volume_kerucut(float radius_kerucut, float tinggi_kerucut);
float f_lp_kerucut(float radius_kerucut, float tinggi_kerucut);

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||        MENGHITUNG VOLUME DAN LUAS        ||");
    printf("\n\t||          PERMUKAAN BANGUN RUANG          ||");
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

int main()
{
    open();
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||    PROGRAM MENGHITUNG VOLUME DAN LUAS    ||");
    printf("\n\t||          PERMUKAAN BANGUN RUANG          ||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Bangun Datar                      ||");
    printf("\n\t|| 1. Tabung                                ||");
    printf("\n\t|| 2. Bola                                  ||");
    printf("\n\t|| 3. Limas Segiempat                       ||");
    printf("\n\t|| 4. Prisma Segitiga                       ||");
    printf("\n\t|| 5. Kerucut                               ||");
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
        tabung();
    }else if(menu==2){
        bola();
    }else if(menu==3){
        limas_segiempat();
    }else if(menu==4){
        prisma_segitiga();
    }else if(menu==5){
        kerucut();
    }
    ulang();
}

int tabung(){
    //Tabung
    float radius_tabung, tinggi_tabung, volume_tabung, lp_tabung;
    printf("\n\t==============================================");
    printf("\n\t||                  TABUNG                  ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan radius tabung: ");
    while (scanf("%f", &radius_tabung)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan radius tabung:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan tinggi tabung: ");
    while (scanf("%f", &tinggi_tabung)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tinggi tabung:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    volume_tabung = f_volume_tabung(radius_tabung, tinggi_tabung);
    lp_tabung = f_lp_tabung(radius_tabung, tinggi_tabung);

    printf("\t==============================================");
    printf("\n\tVolume tabung adalah %.2f", volume_tabung);
    printf("\n\tLuas permukaan tabung adalah %.2f", lp_tabung);
    printf("\n\t==============================================");
    close();
}

float f_volume_tabung(float radius_tabung, float tinggi_tabung){
    float volume_tabung = 3.14*radius_tabung*radius_tabung*tinggi_tabung;
    return volume_tabung;
}

float f_lp_tabung(float radius_tabung, float tinggi_tabung){
    float la_tabung = 3.14*radius_tabung*radius_tabung;
    float ls_tabung = 2*3.14*radius_tabung*tinggi_tabung;
    float lp_tabung = la_tabung + ls_tabung;
    return lp_tabung;
}

int bola(){
    //Bola
    float radius_bola, volume_bola, lp_bola;
    printf("\n\t==============================================");
    printf("\n\t||                   BOLA                   ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan radius bola: ");
    while (scanf("%f", &radius_bola)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan radius bola:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    volume_bola = f_volume_bola(radius_bola);
    lp_bola = f_lp_bola(radius_bola);

    printf("\t==============================================");
    printf("\n\tVolume bola adalah %.2f", volume_bola);
    printf("\n\tLuas permukaan bola adalah %.2f", lp_bola);
    printf("\n\t==============================================");
    close();
}

float f_volume_bola(float radius_bola){
    float volume_bola = (4/3)*3.14*radius_bola*radius_bola*radius_bola;
    return volume_bola;
}

float f_lp_bola(float radius_bola){
    float lp_bola = 4*3.14*radius_bola*radius_bola;
    return lp_bola;
}

int limas_segiempat(){
    //Limas segiempat
    float alas_limas, tinggi_limas, volume_limas, lp_limas;
    printf("\n\t==============================================");
    printf("\n\t||              LIMAS SEGIEMPAT             ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang alas limas: ");
    while (scanf("%f", &alas_limas)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang alas limas:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan tinggi limas: ");
    while (scanf("%f", &tinggi_limas)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tinggi limas:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    volume_limas = f_volume_limas(alas_limas, tinggi_limas);
    lp_limas = f_lp_limas(alas_limas, tinggi_limas);

    printf("\t==============================================");
    printf("\n\tVolume limas adalah: %.2f", volume_limas);
    printf("\n\tLuas permukaan limas adalah: %.2f", lp_limas);
    printf("\n\t==============================================");
    close();
}

float f_volume_limas(float alas_limas, float tinggi_limas){
    float luas_alas_limas = (alas_limas*alas_limas);
    float volume_limas = ((0.3333333333)*luas_alas_limas*tinggi_limas);
    return volume_limas;
}

float f_lp_limas(float alas_limas, float tinggi_limas){
    float setengah_alas = (alas_limas/2);
    float tinggi_miring_limas = (sqrt((setengah_alas*setengah_alas)+(tinggi_limas*tinggi_limas)));
    float luas_segitiga_limas = (0.5*alas_limas*tinggi_miring_limas);
    float luas_alas_limas = (alas_limas*alas_limas);
    float lp_limas = ((4*luas_segitiga_limas) + luas_alas_limas);
    return lp_limas;
}

int prisma_segitiga(){
    //Prisma Segitiga
    int menu2;
    printf("\n\t==============================================");
    printf("\n\t||              PRISMA SEGITIGA             ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilih Jenis Alas Prisma:                  ||");
    printf("\n\t|| 1. Segitiga Sama Sisi                    ||");
    printf("\n\t|| 2. Segitiga Siku-Siku                    ||");
    printf("\n\t|| 3. Segitiga Sembarang                    ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan menu: ");
    while (scanf("%d", &menu2)==0 || menu2 < 1 || menu2 > 3){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan menu:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    if(menu2==1){
        prisma_segitiga_samasisi();
    }else if(menu2==2){
        prisma_segitiga_sikusiku();
    }else if(menu2==3){
        prisma_segitiga_sembarang();
    }
}

int prisma_segitiga_samasisi(){
    //Prisma segitiga sama sisi
    float alas_prisma_samasisi, tinggi_prisma_samasisi, volume_prisma_samasisi, lp_prisma_samasisi;
    printf("\n\t==============================================");
    printf("\n\t||              PRISMA SEGITIGA             ||");
    printf("\n\t||                 SAMA SISI                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang alas prisma: ");
    while (scanf("%f", &alas_prisma_samasisi)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang alas prisma:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan tinggi prisma: ");
    while (scanf("%f", &tinggi_prisma_samasisi)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tinggi prisma:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    volume_prisma_samasisi = f_volume_prisma_samasisi(alas_prisma_samasisi, tinggi_prisma_samasisi);
    lp_prisma_samasisi = f_lp_prisma_samasisi(alas_prisma_samasisi, tinggi_prisma_samasisi);

    printf("\t==============================================");
    printf("\n\tVolume prisma sama sisi adalah %.2f", volume_prisma_samasisi);
    printf("\n\tLuas permukaan prisma sama sisi adalah %.2f", lp_prisma_samasisi);
    printf("\n\t==============================================");
    close();
}

float f_volume_prisma_samasisi(float alas_prisma_samasisi, float tinggi_prisma_samasisi){
    float setengah_alas2 = (alas_prisma_samasisi/2);
    float tinggi_alas = (sqrt((alas_prisma_samasisi*alas_prisma_samasisi)-(setengah_alas2*setengah_alas2)));
    float luas_alas1 = ((0.5)*alas_prisma_samasisi*tinggi_alas);
    float volume_prisma_samasisi = (luas_alas1*tinggi_prisma_samasisi);
    return volume_prisma_samasisi;
}

float f_lp_prisma_samasisi(float alas_prisma_samasisi, float tinggi_prisma_samasisi){
    float setengah_alas2 = (alas_prisma_samasisi/2);
    float tinggi_alas = (sqrt((alas_prisma_samasisi*alas_prisma_samasisi)-(setengah_alas2*setengah_alas2)));
    float luas_alas1 = ((0.5)*alas_prisma_samasisi*tinggi_alas);
    float kll_alas1 = (3*alas_prisma_samasisi);
    float lp_prisma_samasisi = ((2*luas_alas1) + (kll_alas1*tinggi_prisma_samasisi));
    return lp_prisma_samasisi;
}

int prisma_segitiga_sikusiku(){
    //Prisma segitiga siku-siku
    float alas1_prisma_siku, alas2_prisma_siku, tinggi_prisma_siku, volume_prisma_siku, lp_prisma_siku;
    printf("\n\t==============================================");
    printf("\n\t||              PRISMA SEGITIGA             ||");
    printf("\n\t||                 SIKU-SIKU                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang alas: ");
    while (scanf("%f", &alas1_prisma_siku)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang alas:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan tinggi alas: ");
    while (scanf("%f", &alas2_prisma_siku)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tinggi alas:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan tinggi prisma: ");
    while (scanf("%f", &tinggi_prisma_siku)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tinggi prisma:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    volume_prisma_siku = f_volume_prisma_siku(alas1_prisma_siku, alas2_prisma_siku, tinggi_prisma_siku);
    lp_prisma_siku = f_lp_prisma_siku(alas1_prisma_siku, alas2_prisma_siku, tinggi_prisma_siku);

    printf("\t==============================================");
    printf("\n\tVolume prisma siku-siku adalah %.2f", volume_prisma_siku);
    printf("\n\tLuas permukaan prisma siku-siku adalah %.2f", lp_prisma_siku);
    printf("\n\t==============================================");
    close();
}

float f_volume_prisma_siku(float alas1_prisma_siku, float alas2_prisma_siku, float tinggi_prisma_siku){
    float luas_alas2 = ((0.5)*alas1_prisma_siku*alas2_prisma_siku);
    float volume_prisma_siku = (luas_alas2*tinggi_prisma_siku);
    return volume_prisma_siku;
}

float f_lp_prisma_siku(float alas1_prisma_siku, float alas2_prisma_siku, float tinggi_prisma_siku){
    float miring_alas_prisma_siku = (sqrt((alas1_prisma_siku*alas1_prisma_siku)+(alas2_prisma_siku*alas2_prisma_siku)));
    float luas_alas2 = ((0.5)*alas1_prisma_siku*alas2_prisma_siku);
    float kll_alas2 = (alas1_prisma_siku+alas2_prisma_siku+miring_alas_prisma_siku);
    float lp_prisma_siku = ((2*luas_alas2)+(kll_alas2*tinggi_prisma_siku));
    return lp_prisma_siku;
}

int prisma_segitiga_sembarang(){
    //Prisma segitiga sembarang
    float alas1_prisma_s, alas2_prisma_s, alas3_prisma_s, tinggi_prisma_s, volume_prisma_s, lp_prisma_s;
    printf("\t==============================================");
    printf("\n\t||              PRISMA SEGITIGA             ||");
    printf("\n\t||                 SEMBARANG                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang alas pertama: ");
    while (scanf("%f", &alas1_prisma_s)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang alas pertama:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang alas kedua: ");
    while (scanf("%f", &alas2_prisma_s)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang alas kedua:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang alas ketiga: ");
    while (scanf("%f", &alas3_prisma_s)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang alas ketiga:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan tinggi prisma: ");
    while (scanf("%f", &tinggi_prisma_s)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tinggi prisma:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    volume_prisma_s = f_volume_prisma_s(alas1_prisma_s, alas2_prisma_s, alas3_prisma_s, tinggi_prisma_s);
    lp_prisma_s = f_lp_prisma_s(alas1_prisma_s, alas2_prisma_s, alas3_prisma_s, tinggi_prisma_s);

    printf("\t==============================================");
    printf("\n\tVolume prisma adalah %.2f", volume_prisma_s);
    printf("\n\tLuas permukaan prisma adalah %.2f", lp_prisma_s);
    printf("\n\t==============================================");
    close();
}

float f_volume_prisma_s(float alas1_prisma_s, float alas2_prisma_s, float alas3_prisma_s, float tinggi_prisma_s){
    float kll_alas3 = (alas1_prisma_s + alas2_prisma_s + alas3_prisma_s);
    float stgh_kll = ((kll_alas3)/2);
    float luas_alas3 = (sqrt(stgh_kll*(stgh_kll-alas1_prisma_s)*(stgh_kll-alas2_prisma_s)*(stgh_kll-alas3_prisma_s)));
    float volume_prisma_s = (luas_alas3*tinggi_prisma_s);
    return volume_prisma_s;
}

float f_lp_prisma_s(float alas1_prisma_s, float alas2_prisma_s, float alas3_prisma_s, float tinggi_prisma_s){
    float kll_alas3 = (alas1_prisma_s + alas2_prisma_s + alas3_prisma_s);
    float stgh_kll = ((kll_alas3)/2);
    float luas_alas3 = (sqrt(stgh_kll*(stgh_kll-alas1_prisma_s)*(stgh_kll-alas2_prisma_s)*(stgh_kll-alas3_prisma_s)));
    float lp_prisma_s = ((kll_alas3*tinggi_prisma_s)+(2*luas_alas3));
    return lp_prisma_s;
}

int kerucut(){
    //Kerucut
    float radius_kerucut, tinggi_kerucut, volume_kerucut, lp_kerucut;
    printf("\n\t==============================================");
    printf("\n\t||                  KERUCUT                 ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang radius: ");
    while (scanf("%f", &radius_kerucut)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang radius:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan tinggi kerucut: ");
    while (scanf("%f", &tinggi_kerucut)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tinggi kerucut:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    volume_kerucut = f_volume_kerucut(radius_kerucut, tinggi_kerucut);
    lp_kerucut = f_lp_kerucut(radius_kerucut, tinggi_kerucut);

    printf("\t==============================================");
    printf("\n\tVolume kerucut adalah %.2f", volume_kerucut);
    printf("\n\tLuas permukaan kerucut adalah %.2f", lp_kerucut);
    printf("\n\t==============================================");
    close();
}

float f_volume_kerucut(float radius_kerucut, float tinggi_kerucut){
    float volume_kerucut = (0.3333333*3.14*radius_kerucut*radius_kerucut*tinggi_kerucut);
    return volume_kerucut;
}

float f_lp_kerucut(float radius_kerucut, float tinggi_kerucut){
    float selimut = (sqrt((radius_kerucut*radius_kerucut)+(tinggi_kerucut*tinggi_kerucut)));
    float kll_alas4 = (2*3.14*radius_kerucut);
    float luas_alas4 = (3.14*radius_kerucut*radius_kerucut);
    float luas_selimut = (3.14*radius_kerucut*selimut);
    float lp_kerucut = (luas_alas4 + luas_selimut);
    return lp_kerucut;
}

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("cls");
}

void ulang(){
    int menu9;
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t==============================================");
    printf("\n\t||Apakah anda ingin mengulang ?             ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    while(scanf("%d", &menu9) < 0 || menu9 > 1){
        printf("\t----------------------------------------------");
        printf("\n\t     [Mohon masukkan pilihan yang benar]");
        printf("\n\t----------------------------------------------");
        printf("\n\tPilihan : ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    if (menu9==1){
        close();
        main();
    }else if(menu9==0){
        close();
        end();
    }
    return 0;
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
