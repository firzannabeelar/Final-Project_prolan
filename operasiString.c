#include <stdio.h>
#include <string.h>

void tampilkanDataLebihDari(int jumlahTanggungan) {
    printf("Data Desa dengan Jumlah Tanggungan Lebih Dari %d:\n", jumlahTanggungan);
    printf("%-15s %-15s %-20s %-15s\n", "Nama Kepala", "Alamat", "Jumlah Tanggungan", "Pekerjaan");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < sizeof(dataDesa) / sizeof(dataDesa[0]); i++) {
        if (dataDesa[i].jumlahTanggungan > jumlahTanggungan) {
            printf("%-15s %-15s %-20d %-15s\n", dataDesa[i].namaKepala, dataDesa[i].alamat, dataDesa[i].jumlahTanggungan, dataDesa[i].pekerjaan);
        }
    }
}

void displayString() {
    int jumlahTanggungan;

    printf("Masukkan jumlah tanggungan: ");
    scanf("%d", &jumlahTanggungan);

    tampilkanDataLebihDari(jumlahTanggungan);
}



