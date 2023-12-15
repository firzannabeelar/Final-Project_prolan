#include <stdio.h>

struct Desa {
    char namaKepala[50];
    char alamat[50];
    int jumlahTanggungan;
    char pekerjaan[50];
};

struct Desa dataDesa[] = {
    { "Siti", "Jalan Desa 4", 7, "Pedagang" },
    { "Agus", "Jalan Desa 2", 6, "Peternak" },
    { "Joko", "Jalan Desa 1", 8, "Nelayan" },
    { "Rina", "Jalan Desa 2", 2, "Pedagang" },
    { "Rina", "Jalan Desa 4", 2, "PNS" },
    { "Budi" ,"Jalan Desa 5", 3, "Pegawai"},
    { "Widi" ,"Jalan Desa 3", 5, "PNS"},
    { "Anton" ,"Jalan Desa 2", 7, "Wirausaha"},
    { "Budi" ,"Jalan Desa 5", 2, "Nelayan"},
    { "Antonio" ,"Jalan Desa 1", 4, "Kepala Desa"},
    { "Aden" ,"Jalan Desa 5", 3, "Peternak"},
    { "Uje" ,"Jalan Desa 2", 3, "PNS"},
};

int getJumlahDataDesa() {
    return sizeof(dataDesa) / sizeof(dataDesa[0]);
}

void displayDesa(){
    int jumlahDataDesa = sizeof(dataDesa) / sizeof(dataDesa[0]);
        printf("Data Desa:\n");
        for (int i = 0; i < jumlahDataDesa; ++i) {
        printf("Rumah %d:\n", i + 1);
        printf("Nama Kepala Desa: %s\n", dataDesa[i].namaKepala);
        printf("Alamat Desa: %s\n", dataDesa[i].alamat);
        printf("Jumlah Tanggungan: %d\n", dataDesa[i].jumlahTanggungan);
        printf("Pekerjaan: %s\n", dataDesa[i].pekerjaan);
        printf("-----------------------------\n");
}
}