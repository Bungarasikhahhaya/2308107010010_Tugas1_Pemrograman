#include <stdio.h>

int main() {
    int pilihan;
    int bilangan;
    int desimal = 0, pangkat = 0;

    printf("Pilih operasi konversi anda:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");

    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

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

        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil konversinya adalah: %o", bilangan);
            break;

        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%o", &bilangan);
            printf("Hasil konversinya adalah: %d", bilangan);
            break;

        default:
            printf("Pilihan tidak valid\n");
            break;
    }

    return 0;
 
}