#include <stdio.h>
#include "desa.c"
#include "sort.c"
#include "operasiString.c"
#include "operasiFile.c"
#include "searching.c"

int main() {
    printf("\n");
    printf("===== Final Project Kelompok 8 =====\n");
    printf("=====   Manajemen Data Desa   ======\n");
    printf("\n");
    printf("Dirancang oleh : \n");
    printf("Firzannabeel Aqila Rafid (22081010285)\nBenaya Titus Natanael (22081010302)\nBayu Setia Aji (22081010294)\n");
    printf("Anisa Amelia Fitri (2399100298)\nReynanda Sigit Purnama (22081010275)\nZenryo Yudi Arnava D.M (22081010303)\n");

    int pil;
    do{
    printf("\n");
    printf("Pilihan menu : \n");
    printf("1. Struct Data Desa\n");
    printf("2. Sorting Data Desa Berdasarkan Jumlah Tanggungan\n");
    printf("3. Operasi String\n");
    printf("4. Operasi File\n");
    printf("5. Searching Data Desa\n");
    printf("0. Keluar\n");
    printf("Pilih : ");
    scanf("%d", &pil);
    printf("\n");

    switch (pil){
    case 1:
        displayDesa();
        break;
    case 2:
        displaysort();
        break;
    case 3:
        displayString();
        break;
    case 4:
        displayfile();
        break;
    case 5:
        displayserching();
        break;
    case 0:
        printf("Pilihan = %d\n", pil);
        default:
        printf("Program Selesai\n");
    }
    }while (pil != 0);

    return 0;
}
