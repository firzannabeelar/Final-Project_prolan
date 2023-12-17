#include <stdio.h>

void merge(struct Desa arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    struct Desa L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i].jumlahTanggungan <= R[j].jumlahTanggungan) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(struct Desa arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int displaysort() {
    int n = sizeof(dataDesa) / sizeof(dataDesa[0]);
    mergeSort(dataDesa, 0, n - 1);

    printf("Data Desa setelah diurutkan berdasarkan jumlah tanggungan:\n");
    for (int i = 0; i < n; i++) {
        printf("Nama Kepala Desa: %s, Jumlah Tanggungan: %d\n", dataDesa[i].namaKepala, dataDesa[i].jumlahTanggungan);
    }

    return 0;
}