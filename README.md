##KONVERSI BILIANGAN##

#include <stdio.h>

int main() {
    int pilihan;
    int bilangan;
    int desimal = 0, pangkat = 0;

1. Program dimulai dengan mengimpor header file 'stdio.h'
2. Variabel 'pilihan' untuk menyimpan pilihan operasi konversi yang dimasukkan
3. Variabel 'bilangan' utnuk menyimpan bilangan yang dimasukkan oleh pengguna atau hasil konvesr
4. Variabel 'desimal' dan 'pangkat' untuk menghitung hasil konversi dari binner ke desimal

printf("Pilih operasi konversi anda:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");

    printf("Masukkan pilihan konversi anda (1-4): ");
    scanf("%d", &pilihan);

1. Pengguna diminta untuk memilih operasi konversi yang diinginkan
2. Fungsi 'scanf()' untuk pengguna memasukkan pilihan dan variabel 'pilihan' menyimpan nilai

switch (pilihan) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil konversinya adalah: ");
            while (bilangan > 0) {
                printf("%d", bilangan % 2);
                bilangan /= 2;
            }
            break;

1. 'switch case' untuk mengevaluasi nilai 'pilihan' dan menentukan operasi konversi yang akan dilakukan
2. Jika 'pilihan' adalah 2 maka program otomatis meminta pengguna memasukkan bilangan desimal lalu akan melakukan konversi ke binner menggunakan pembagian sisa dan mencetak hasilnya.

case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &bilangan);
            while (bilangan > 0) {
                desimal += (bilangan % 10) * (1 << pangkat);
                bilangan /= 10;
                pangkat++;
            }
            printf("Hasil konversinya adalah: %d", desimal);
            break;

1. Jika 'pilihan' adalah 2 program otomatis akan meminta pengguna memasukkan bilangan binner dan kemudian melakukan konversi ke desimal menggunakan pembagian sisa dan operasi bitshift kiri.

case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil konversinya adalah: %o", bilangan);
            break;

1. Jika 'pilihan' adalah 3 maka program akan meminta pengguna memasukkan bilangan desimal dan kemudian mencetak hasil konversi dalam bentuk octal.

case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%o", &bilangan);
            printf("Hasil konversinya adalah: %d", bilangan);
            break;

1. Jika 'pilihan' adalah 4 maka perogram akan meminta pengguna memasukkan bilangan octal dan kemudian mencetal hasil konversi dalam bentuk desimal.

 default:
            printf("Pilihan tidak valid\n");
            break;
    }

    return 0;
}

1. 'default' digunakan untuk situasi dimana pengguna memasukkan pilihan yang tidak valid
2. fungsi 'main()' mengembalikan nilai 0, menandakan bahwa program telah berakhir.



##TAHUNKABISAT##

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

1. program dimulai dengan mengimpor 3 header file
2. '<stdio.h>' untuk input output standar
3. '<stdlib.h>' untuk fungsi 'atoi()' yang mengkonversi string ke integer
4. '<ctype.h>' untung fungsi 'isdigit()' memeriksa apakah karakter adalah digit

int tahunkabisat(int tahun) {
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        return 1; // Tahun kabisat
    }
    return 0; // Bukan tahun kabisat
}

1. Fungsi 'tahunkabisat()' untuk memeriksa apakah tahun yang diberikan merupakan tahun kabisat atau tidak

int main() {
    char input [5];
    int tahun;

    while (1) {
        printf("Masukkan tahun 4 digit: ");
        scanf("%s", input);

1. Program memulai 'main()' sebagai titik utama masuk
2. Variabel 'input' untuk menyimpan input dari pengguna sebagai string
3. Variabel 'tahun' untuk menyimpan nilau tahun setelah konversi dari string ke integer


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

1. Menggunakan loop 'while' untuk memeriksa apakah input hanya terdiri dari digit, jika bukan angka maka program akan meminta pengguna memasukkan input kembali

        tahun = atoi(input);

        if (tahunkabisat(tahun)) {
            printf("%d adalah tahun kabisat.\n", tahun);
        } else {
            printf("%d bukan tahun kabisat.\n", tahun);
        }

        break;
    }

    return 0;
}

1. Menggunakan fungsi 'atoi()' untuk mengkonversi string input ke integer
2. Kemudian memanggil fungsi 'tahunkabisat()' untuk memeriksa apakah tahun yang dimasukkan adalah tahun kabisat atau tidak, lalu hasilnya akan dicetak dan ditampilkan dilayar
