#include <stdio.h>

int main() {
    int pilihan;
    int bilangan;
    int desimal = 0, pangkat = 0;
    
program dimulai dengan mengimpor header file 'stdio.h'

variabel 'pilihan' untuk menyimpan pilihan operasi konversi yang dimasukkan

variabel 'bilangan' utnuk menyimpan bilangan yang dimasukkan oleh pengguna atau hasil konvesr

variabel 'desimal' dan 'pangkat' untuk menghitung hasil konversi dari binner ke desimal

printf("Pilih operasi konversi anda:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");

    printf("Masukkan pilihan konversi anda (1-4): ");
    scanf("%d", &pilihan);

pengguna diminta untuk memilih operasi konversi yang diinginkan
fungsi 'scanf()' untuk pengguna memasukkan pilihan dan variabel 'pilihan' menyimpan nilai

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

'switch case' untuk mengevaluasi nilai 'pilihan' dan menentukan operasi konversi yang akan dilakukan
jika 'pilihan' adalah 2 maka program otomatis meminta pengguna memasukkan bilangan desimal lalu akan melakukan konversi ke binner menggunakan pembagian sisa dan mencetak hasilnya.

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

jika 'pilihan' adalah 2 program otomatis akan meminta pengguna memasukkan bilangan binner dan kemudian melakukan konversi ke desimal menggunakan pembagian sisa dan operasi bitshift kiri.

case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil konversinya adalah: %o", bilangan);
            break;

jika 'pilihan' adalah 3 maka program akan meminta pengguna memasukkan bilangan desimal dan kemudian mencetak hasil konversi dalam bentuk octal.

case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%o", &bilangan);
            printf("Hasil konversinya adalah: %d", bilangan);
            break;

jika 'pilihan' adalah 4 maka perogram akan meminta pengguna memasukkan bilangan octal dan kemudian mencetal hasil konversi dalam bentuk desimal.

 default:
            printf("Pilihan tidak valid\n");
            break;
    }

    return 0;
}

'default' digunakan untuk situasi dimana pengguna memasukkan pilihan yang tidak valid

fungsi 'main()' mengembalikan nilai 0, menandakan bahwa program telah berakhir.
