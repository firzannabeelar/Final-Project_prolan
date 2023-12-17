#include <stdio.h>
#include <string.h>

void sequentSearch(int targetJumlahTanggungan) {
    int found = 0;

    printf("Data Desa dengan jumlah tanggungan %d:\n", targetJumlahTanggungan);
    printf("-------------------------------------------------\n");

    for (int i = 0; i < sizeof(dataDesa) / sizeof(dataDesa[0]); i++) {
        if (dataDesa[i].jumlahTanggungan == targetJumlahTanggungan) {
            printf("Nama Kepala: %s\n", dataDesa[i].namaKepala);
            printf("Alamat: %s\n", dataDesa[i].alamat);
            printf("Jumlah Tanggungan: %d\n", dataDesa[i].jumlahTanggungan);
            printf("Pekerjaan: %s\n", dataDesa[i].pekerjaan);
            printf("---------------------------------------\n");
            found = 1;
        }
    }

    if (!found) {
        printf("Tidak ada data Desa dengan jumlah tanggungan %d.\n", targetJumlahTanggungan);
    }
}

void displayserching() {
    int targetJumlahTanggungan;

    printf("Masukkan jumlah tanggungan yang ingin dicari: ");
    scanf("%d", &targetJumlahTanggungan);

    sequentSearch(targetJumlahTanggungan);
}
