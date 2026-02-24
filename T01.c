#include <stdio.h>
#include <string.h>

typedef struct {
    char kode[5];
    char nama[30];
    int harga;
} Menu;

int main() {
    Menu daftarMenu[] = {
        {"NGS", "Nasi Goreng Spesial", 15000},
        {"AP", "Ayam Penyet", 20000},
        {"SA", "Sate Ayam (10 Tusuk)", 25000},
        {"BU", "Bakso Urat", 18000},
        {"MAP", "Mie Ayam Pangsit", 15000},
        {"GG", "Gado-Gado", 15000},
        {"SAM", "Soto Ayam", 17000},
        {"RD", "Rendang Daging", 25000},
        {"IB", "Ikan Bakar", 35000},
        {"NUK", "Nasi Uduk Komplit", 20000}
    };
    int jumlahMenu = sizeof(daftarMenu) / sizeof(daftarMenu[0]);

    char inputKode[10];
    int porsi;
    int totalBelanja = 0;
    int ditemukan;

    while (1) {
        scanf("%s", inputKode);
  
        if (strcmp(inputKode, "END") == 0) {
            break;
        }

        scanf("%d", &porsi);
        ditemukan = 0;

        for (int i = 0; i < jumlahMenu; i++) {
            if (strcmp(inputKode, daftarMenu[i].kode) == 0) {
                totalBelanja += (daftarMenu[i].harga * porsi);
                ditemukan = 1;
                break;
            }
        }
    }

    float diskon = 0;
    char warnaKupon[15] = "Tidak Ada";

    if (totalBelanja >= 500000) {
        diskon = 0.25;
        strcpy(warnaKupon, "Hitam");
    } else if (totalBelanja >= 400000) {
        diskon = 0.20;
        strcpy(warnaKupon, "Hijau");
    } else if (totalBelanja >= 300000) {
        diskon = 0.15;
        strcpy(warnaKupon, "Merah");
    } else if (totalBelanja >= 200000) {
        diskon = 0.10;
        strcpy(warnaKupon, "Kuning");
    } else if (totalBelanja >= 100000) {
        diskon = 0.05;
        strcpy(warnaKupon, "Biru");
    }

    int potonganHarga = (int)(totalBelanja * diskon);
    int totalAkhir = totalBelanja - potonganHarga;

    printf("\n======================================\n");
    printf("        STRUK MAKAN MAK ROBY         \n");
    printf("======================================\n");
    printf("Total Belanja    : Rp %-10d\n", totalBelanja);
    printf("Kupon Didapat    : %s\n", warnaKupon);
    printf("Diskon Persen    : %.0f%%\n", diskon * 100);
    printf("Potongan Harga   : Rp %-10d\n", potonganHarga);
    printf("--------------------------------------\n");
    printf("TOTAL BAYAR      : Rp %-10d\n", totalAkhir);
    printf("======================================\n");
    printf(" Transaksi Transparan & Sistem Aman  \n");
    printf("======================================\n");

    return 0;
}