#include <stdio.h>

void bubbleSort(struct Desa arr[], int n) {
    int i, j;
    struct Desa temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].jumlahTanggungan > arr[j + 1].jumlahTanggungan) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void displaysort(){
    int jumlahDataDesa = 12;
    bubbleSort(dataDesa, jumlahDataDesa);
    printf("\nData Desa Setelah Diurutkan Berdasarkan Jumlah Tanggungan:\n");
    for (int i = 0; i < jumlahDataDesa; ++i) {
        printf("Rumah %d: %s, Jumlah Tanggungan: %d\n", i + 1, dataDesa[i].namaKepala, dataDesa[i].jumlahTanggungan);
    }
}