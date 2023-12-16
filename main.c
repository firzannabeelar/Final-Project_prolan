#include <stdio.h>
#include "desa.c"
#include "sort.c"
#include "operasiString.c"
#include "operasiFile.c"

int main() {
    printf("\n");
    printf("===== Final Project Kelompok 8 =====\n");
    printf("=====   Manajemen Data Desa   ======\n");
    printf("\n");
    printf("Dirancang oleh : \n");
    printf("Firzannabeel Aqila Rafid (22081010285)\nBenaya Titus Natanael (22081010302)\nBayu Setia Aji (22081010294)\n");
    printf("\n");

    int pil;
    printf("Pilihan menu : \n");
    printf("1. Struct Data Desa\n");
    printf("2. Sorting Data Desa Berdasarkan Jumlah Tanggungan\n");
    printf("3. Operasi String\n");
    printf("4. Operasi File\n");
    printf("Pilih : ");
    scanf("%d", &pil);

    if(pil == 1){
        displayDesa();
    }
    else if(pil == 2){
        displaysort();
    }
    else if(pil == 3){
        displayString();
    }
    else if(pil == 4){
        displayfile();
    }   
    else{ 
        printf("Program Selesai");
    }
    

    return 0;
}
