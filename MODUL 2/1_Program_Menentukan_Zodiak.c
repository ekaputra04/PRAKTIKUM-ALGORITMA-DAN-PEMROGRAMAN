#include <stdio.h>
#include <stdlib.h>

void open(){
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        SELAMAT DATANG DI PROGRAM         ||");
    printf("\n\t||            MENENTUKAN ZODIAK             ||");
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
    open();
    int menu;
    printf("\n\t==============================================");
    printf("\n\t||                                          ||");
    printf("\n\t||        PROGRAM MENENTUKAN ZODIAK         ||");
    printf("\n\t||                                          ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||                KELOMPOK 3                ||");
    printf("\n\t||------------------------------------------||");
    printf("\n\t||Pilih bulan kelahiran Anda:               ||");
    printf("\n\t|| 1.  Januari                              ||");
    printf("\n\t|| 2.  Februari                             ||");
    printf("\n\t|| 3.  Maret                                ||");
    printf("\n\t|| 4.  April                                ||");
    printf("\n\t|| 5.  Mei                                  ||");
    printf("\n\t|| 6.  Juni                                 ||");
    printf("\n\t|| 7.  Juli                                 ||");
    printf("\n\t|| 8.  Agustus                              ||");
    printf("\n\t|| 9.  September                            ||");
    printf("\n\t|| 10. Oktober                              ||");
    printf("\n\t|| 11. November                             ||");
    printf("\n\t|| 12. Desember                             ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan pilihan Anda: ");
    while (scanf("%d", &menu)==0 || menu < 1 || menu > 12){
        printf("\t----------------------------------------------");
        printf("\n\tAngka yang Anda inputkan salah!");
        printf("\n\tMohon inputkan pilihan yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan pilihan Anda:");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    close();

    if (menu==1){
        januari();
    }else if(menu==2){
        februari();
    }else if(menu==3){
        maret();
    }else if(menu==4){
        april();
    }else if(menu==5){
        mei();
    }else if(menu==6){
        juni();
    }else if(menu==7){
        juli();
    }else if(menu==8){
        agustus();
    }else if(menu==9){
        september();
    }else if(menu==10){
        oktober();
    }else if(menu==11){
        november();
    }else if(menu==12){
        desember();
    }
    ulang();
}

void januari(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||              BULAN JANUARI               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal<20){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                  CAPRICORN                   ");
        printf("\n\t==============================================");
    }else if(tanggal>=20 && tanggal <=31){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                  AQUARIUS                    ");
        printf("\n\t==============================================");
    }
    close();
}

void februari(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||             BULAN FEBRUARI               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 29){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal<19){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                  AQUARIUS                   ");
        printf("\n\t==============================================");
    }else if(tanggal >= 19 && tanggal <=29){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   PISCES                     ");
        printf("\n\t==============================================");
    }
    close();
}

void maret(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||               BULAN MARET                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal<21){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   PISCES                     ");
        printf("\n\t==============================================");
    }else if(tanggal >= 21 && tanggal <=31){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                    ARIES                     ");
        printf("\n\t==============================================");
    }
    close();
}

void april(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||               BULAN APRIL                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 30){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 20){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                    ARIES                     ");
        printf("\n\t==============================================");
    }else if(tanggal >= 20 && tanggal <=30){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   TAURUS                     ");
        printf("\n\t==============================================");
    }
    close();
}

void mei(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||                BULAN MEI                 ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 21){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   TAURUS                     ");
        printf("\n\t==============================================");
    }else if(tanggal >= 21 && tanggal <=31){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   GEMINI                     ");
        printf("\n\t==============================================");
    }
    close();
}

void juni(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||                BULAN JUNI                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 30){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 21){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   GEMINI                     ");
        printf("\n\t==============================================");
    }else if(tanggal >= 21 && tanggal <=30){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   CANCER                     ");
        printf("\n\t==============================================");
    }
    close();
}

void juli(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||                BULAN JULI                ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 23){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   CANCER                     ");
        printf("\n\t==============================================");
    }else if(tanggal >= 23 && tanggal <= 31){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                     LEO                      ");
        printf("\n\t==============================================");
    }
    close();
}

void agustus(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||              BULAN AGUSTUS               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 23){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                     LEO                      ");
        printf("\n\t==============================================");
    }else if(tanggal >= 23 && tanggal <=31){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                    VIRGO                     ");
        printf("\n\t==============================================");
    }
    close();
}

void september(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||             BULAN SEPTEMBER              ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 30){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 23){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                    VIRGO                     ");
        printf("\n\t==============================================");
    }else if(tanggal >= 23 && tanggal <= 30){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                    LIBRA                     ");
        printf("\n\t==============================================");
    }
    close();
}

void oktober(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||              BULAN OKTOBER               ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 23){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                    LIBRA                     ");
        printf("\n\t==============================================");
    }else if(tanggal >= 23 && tanggal <= 31){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   SCORPIO                    ");
        printf("\n\t==============================================");
    }
    close();
}

void november(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||             BULAN  NOVEMBER              ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 30){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 22){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                   SCORPIO                    ");
        printf("\n\t==============================================");
    }else if(tanggal >= 22 && tanggal <= 30){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                 SAGITARIUS                   ");
        printf("\n\t==============================================");
    }
    close();
}

void desember(){
    int tanggal;
    printf("\n\t==============================================");
    printf("\n\t||             ANDA LAHIR PADA              ||");
    printf("\n\t||             BULAN  NOVEMBER              ||");
    printf("\n\t==============================================");
    printf("\n\tInputkan tanggal lahir Anda: ");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
        printf("\t----------------------------------------------");
        printf("\n\tTanggal yang Anda inputkan salah!");
        printf("\n\tMohon inputkan tanggal yang benar...\n");
        printf("\t----------------------------------------------");
        printf("\n\tInputkan tanggal lahir Anda: ");
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    if(tanggal < 22){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                 SAGITARIUS                   ");
        printf("\n\t==============================================");
    }else if(tanggal >= 22 && tanggal <= 31){
        printf("\n\t==============================================");
        printf("\n\t             Zodiak Anda adalah:              ");
        printf("\n\t                  CAPRICORN                   ");
        printf("\n\t==============================================");
    }
    close();
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
    printf("\n\t==============================================");
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
