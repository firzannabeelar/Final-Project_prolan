#include <stdio.h>
#include "desa.c"
#include "sort.c"

int main() {
    printf("\n");
    printf("===== Final Project Kelompok 8 =====\n");
    printf("=====   Manajemen Data Desa   ======\n");
    printf("\n");
    printf("Dirancang oleh : \n");
    printf("Firzannabeel Aqila Rafid (22081010285)\nBenaya Titus Natanael (22081010302)\nBayu Setia Aji (22081010294)\n");
    printf("\n");
    printf("Pilihan menu : \n");
    printf("1. Struct Data Desa\n");
    printf("2. Sorting Data Desa (Jumlah Tanggungan)\n");
    int pil;
    printf("Pilih : ");
    scanf("%d", &pil);

    if(pil == 1){
        displayDesa();
    }
    else if(pil == 2){
        displaysort();
    }
    else{
            printf("Pilihan salah.\n");
            return 1;
    }

    return 0;
}
