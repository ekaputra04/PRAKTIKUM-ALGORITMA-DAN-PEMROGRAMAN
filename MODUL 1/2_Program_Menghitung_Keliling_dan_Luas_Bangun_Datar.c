#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||       MENGHITUNG LUAS DAN KELILING       ||");
    printf("\n\t||               BANGUN DATAR               ||");
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
    open();
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilihan Bangun Datar:                     ||");
    printf("\n\t|| 1. Segitiga Sembarang                    ||");
    printf("\n\t|| 2. Belah Ketupat                         ||");
    printf("\n\t|| 3. Jajar Genjang                         ||");
    printf("\n\t|| 4. Trapesium                             ||");
    printf("\n\t|| 5. Lingkaran                             ||");
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
        segitiga_sembarang();
    }else if(menu==2){
        belah_ketupat();
    }else if(menu==3){
        jajar_genjang();
    }else if(menu==4){
        trapesium();
    }else if(menu==5){
        lingkaran();
    }
    ulang();
}

int segitiga_sembarang(){
    //Segitiga sembarang
    float sisi1, sisi2, sisi3, keliling1, setengah_kll, luas1;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||            SEGITIGA SEMBARANG            ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang sisi 1: ");
    while (scanf("%f", &sisi1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi 1: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang sisi 2: ");
    while (scanf("%f", &sisi2)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi 2: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang sisi 3: ");
    while (scanf("%f", &sisi3)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi 3: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    keliling1 = sisi1 + sisi2 + sisi3;
    setengah_kll = ((keliling1)/2);
    luas1 = (sqrt(setengah_kll*(setengah_kll-sisi1)*(setengah_kll-sisi2)*(setengah_kll-sisi3)));

    printf("\t==============================================");
    printf("\n\tKeliling segitiga sembarang adalah %.2f", keliling1);
    printf("\n\n\tLuas segitiga sembarang adalah %.2f", luas1);
    printf("\n\t==============================================");
    close();
}

int belah_ketupat(){
    //Belah ketupat
    int menu2;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||               BELAH KETUPAT              ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Jenis Belah Ketupat:              ||");
    printf("\n\t|| 1. Belah Ketupat Simetris (d1 = d2)      ||");
    printf("\n\t|| 2. Belah Ketupat Asimetris (d1 != d2)    ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan menu:");
    while (scanf("%d", &menu2)==0 || menu2 < 1 || menu2 > 2){
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
        belah_ketupat_simetris();
    }else if(menu2==2){
        belah_ketupat_asimetris();
    }
    close();
}

int belah_ketupat_simetris(){
    //belah ketupat simetris
    float sisi4, keliling2, luas2;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||     Belah Ketupat Simetris (d1 = d2)     ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang sisi: ");
    while (scanf("%f", &sisi4)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    keliling2 = 4*sisi4;
    luas2 = sisi4*sisi4;

    printf("\t==============================================");
    printf("\n\tKeliling belah ketupat adalah %.2f", keliling2);
    printf("\n\n\tLuas belah ketupat adalah %.2f", luas2);
    printf("\n\t==============================================");
}

int belah_ketupat_asimetris(){
    //belah ketupat asimetris
    float diagonal1, diagonal2, keliling3, luas3;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||    Belah Ketupat Asimetris (d1 != d2)    ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang diagonal 1: ");
    while (scanf("%f", &diagonal1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang diagonal 1: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang diagonal 2: ");
    while (scanf("%f", &diagonal2)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang diagonal 2: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    keliling3 = 4*(sqrt((diagonal1/2)*(diagonal1/2)+(diagonal2/2)*(diagonal2/2)));
    luas3 = (diagonal1*diagonal2)/2;

    printf("\t==============================================");
    printf("\n\tKeliling belah ketupat adalah %.2f", keliling3);
    printf("\n\n\tLuas belah ketupat adalah %.2f", luas3);
    printf("\n\t==============================================");
}

int jajar_genjang(){
    //Jajar genjang
    float alas1, tinggi1, miring1, keliling4, luas4;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||              JAJAR GENJANG               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang alas jajar genjang: ");
    while (scanf("%f", &alas1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang alas jajar genjang: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang tinggi jajar genjang: ");
    while (scanf("%f", &tinggi1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang tinggi jajar genjang: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang sisi miring jajar genjang: ");
    while (scanf("%f", &miring1)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi miring jajar genjang: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    keliling4 = 2*(alas1 + miring1);
    luas4 = (alas1 * tinggi1);

    printf("\t==============================================");
    printf("\n\tKeliling jajar genjang adalah %.2f", keliling4);
    printf("\n\n\tLuas jajar genjang adalah %.2f", luas4);
    printf("\n\t==============================================");
    close();
}

int trapesium(){
    //Trapesium
    int menu3;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                 TRAPESIUM                ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Pilihan Jenis Trapesium:                  ||");
    printf("\n\t|| 1. Trapesium Sama Kaki                   ||");
    printf("\n\t|| 2. Trapesium Siku-Siku                   ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan menu:");
    while (scanf("%d", &menu3)==0 || menu3 < 1 || menu3 > 2){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan menu:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    if(menu3==1){
        trapesium_sama_kaki();
    }else if(menu3==2){
        trapesium_siku_siku();
    }
    close();
}

int trapesium_sama_kaki(){
    //Trapesium sama kaki
    float alas2, atas2, tinggi2, miring2, keliling5, luas5;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||           TRAPESIUM SAMA KAKI            ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang sisi alas: ");
    while (scanf("%f", &alas2)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi alas: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang sisi atas: ");
    while (scanf("%f", &atas2)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi atas: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang tinggi: ");
    while (scanf("%f", &tinggi2)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang tinggi: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    miring2 = sqrt(((alas2-atas2)/2)*((alas2-atas2)/2) + (tinggi2)*(tinggi2));
    keliling5 = alas2 + atas2 + (2*miring2);
    luas5 = ((alas2 + atas2)/2)*tinggi2;

    printf("\t==============================================");
    printf("\n\tKeliling trapesium adalah %.2f", keliling5);
    printf("\n\n\tLuas trapesium adalah %.2f", luas5);
    printf("\n\t==============================================");
}

int trapesium_siku_siku(){
    //Trapesium siku-siku
    float alas3, atas3, tinggi3, miring3, keliling6, luas6;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||           TRAPESIUM SIKU-SIKU            ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang sisi alas: ");
    while (scanf("%f", &alas3)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi alas: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang sisi atas: ");
    while (scanf("%f", &atas3)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang sisi atas: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n\tInputkan panjang tinggi: ");
    while (scanf("%f", &tinggi3)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang tinggi: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    miring3 = sqrt((alas3-atas3)*(alas3-atas3) + (tinggi3)*(tinggi3));
    keliling6 = alas3 + atas3 + tinggi3 + miring3;
    luas6 = ((alas3 + atas3)/2)*tinggi3;

    printf("\t==============================================");
    printf("\n\tKeliling trapesium adalah %.2f", keliling6);
    printf("\n\n\tLuas trapesium adalah %.2f", luas6);
    printf("\n\t==============================================");
}

int lingkaran(){
    //Lingkaran
    float radius, keliling7, luas7;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||   PROGRAM MENGHITUNG LUAS DAN KELILING   ||");
    printf("\n\t||               BANGUN DATAR               ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                LINGKARAN                 ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan panjang radius lingkaran: ");
    while (scanf("%f", &radius)==0){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan angka yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan panjang radius lingkaran: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    keliling7 = 2*3.14*radius;
    luas7 = 3.14*radius*radius;

    printf("\t==============================================");
    printf("\n\tKeliling lingkaran adalah %.2f", keliling7);
    printf("\n\n\tLuas lingkaran adalah %.2f", luas7);
    printf("\n\t==============================================");
    close();
}

void close(){
    printf("\n\tSelanjutnya...");
    getch();
    system("cls");
}

int ulang(){
    int menu9;
    printf("\n\t==============================================");
    printf("\n\t||                   MENU                   ||");
    printf("\n\t||==========================================||");
    printf("\n\t||Apakah Anda ingin mengulang?              ||");
    printf("\n\t|| 1. Ulangi                                ||");
    printf("\n\t|| 0. Exit                                  ||");
    printf("\n\t==============================================");
    printf("\n\tPilihan : ");
    while(scanf("%d", &menu9)==0 || menu9< 0 || menu9 > 1){
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
