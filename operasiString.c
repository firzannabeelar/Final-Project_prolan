#include <stdio.h>
#include <string.h>

void prosesDelimiter(struct Desa* desa) {
    char* token = strtok(desa->alamat, " ");
    while (token != NULL) {
        printf("Alamat: %s\n", token);
        token = strtok(NULL, " ");
    }
}

int displayString() {
    for (int i = 0; i < sizeof(dataDesa) / sizeof(dataDesa[0]); ++i) {
        printf("Data Desa %d:\n", i + 1);
        printf("Nama Kepala: %s\n", dataDesa[i].namaKepala);
        printf("Alamat: %s\n", dataDesa[i].alamat);
        printf("Jumlah Tanggungan: %d\n", dataDesa[i].jumlahTanggungan);
        
        printf("Hasil Pemisahan Alamat dengan STRTOK:\n");
        prosesDelimiter(&dataDesa[i]);

        printf("\n");
    }

    return 0;
}

