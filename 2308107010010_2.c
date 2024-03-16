#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int tahunkabisat(int tahun) {
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        return 1; // Tahun kabisat
    }
    return 0; // Bukan tahun kabisat
}

int main() {
    char input [5];
    int tahun;

    while (1) {
        printf("Masukkan tahun 4 digit: ");
        scanf("%s", input);

        // Memeriksa apakah input hanya terdiri dari 4 angka
        int i = 0;
        while (input[i] != '\0') {
            if (!isdigit(input[i])) {
                printf("Inputan harus berupa angka.\n");
                break;
            }
            i++;
        }
        if (i != 4) {
            printf("Inputan harus terdiri dari 4 digit.\n");
            continue;
        }

        // Konversi string ke integer
        tahun = atoi(input);

        // Memeriksa apakah tahun kabisat atau bukan
        if (tahunkabisat(tahun)) {
            printf("%d adalah tahun kabisat.\n", tahun);
        } else {
            printf("%d bukan tahun kabisat.\n", tahun);
        }

        break;
    }

    return 0;
}
