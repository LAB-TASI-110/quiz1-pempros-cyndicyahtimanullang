#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    char asrama[20];
    float berat;
    int hargaPerKg = 7000; 
    int totalHarga;

    printf("=== Operasional Laundry Del: Layanan Cuci Kering ===\n");

    printf("Nama Mahasiswa: ");
    scanf(" %[^\n]s", nama); 
    printf("Asrama (Simon Laplace/Ada Lovelace/Dll): ");
    scanf("%s", asrama);

    printf("Berat Cucian (kg): ");
    scanf("%f", &berat);

    totalHarga = (int)(berat * hargaPerKg);

    printf("\n==================================\n");
    printf("        STRUK LAUNDRY DEL        \n");
    printf("==================================\n");
    printf("Pelanggan    : %s\n", nama);
    printf("Asrama       : %s\n", asrama);
    printf("Layanan      : Cuci Kering\n");
    printf("Harga/kg     : Rp %d\n", hargaPerKg);
    printf("Berat        : %.2f kg\n", berat);
    printf("----------------------------------\n");
    printf("TOTAL BAYAR  : Rp %d\n", totalHarga);
    printf("==================================\n");
    printf("    Terima kasih, Semangat Belajar!   \n");
    printf("==================================\n");

    return 0;
}