#include <stdio.h>
#include <string.h>

void tulisDataKeFile(FILE *file) {
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

    fwrite(dataDesa, sizeof(struct Desa), sizeof(dataDesa) / sizeof(struct Desa), file);
}

void tampilkanLebihDari(int jumlahTanggungan, FILE *file) {
    struct Desa desa;

    fseek(file, 0, SEEK_SET); 

    printf("Data Desa dengan Jumlah Tanggungan Lebih Dari %d:\n", jumlahTanggungan);
    printf("%-15s %-15s %-20s %-15s\n", "Nama Kepala", "Alamat", "Jumlah Tanggungan", "Pekerjaan");
    printf("------------------------------------------------------------\n");

    while (fread(&desa, sizeof(struct Desa), 1, file) == 1) {
        if (desa.jumlahTanggungan > jumlahTanggungan) {
            printf("%-15s %-15s %-20d %-15s\n", desa.namaKepala, desa.alamat, desa.jumlahTanggungan, desa.pekerjaan);
        }
    }
}


void displayfile() {
    FILE *file = fopen("data_desa.dat", "wb+");

    if (file == NULL) {
        fprintf(stderr, "Gagal membuka file.\n");
        return;
    }

    tulisDataKeFile(file);

    int jumlahTanggungan;

    printf("Masukkan jumlah tanggungan: ");
    scanf("%d", &jumlahTanggungan);

    tampilkanLebihDari(jumlahTanggungan, file);

    fclose(file);
}



