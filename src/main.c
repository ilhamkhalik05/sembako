#include <stdio.h>
#include <stdbool.h>

void productModule();
void transactionModule();
void header();
void headerModule(char *moduleName);
bool isValidChoice(int start, int end, int choice);

int main()
{
    // tes PR
    int selectedMainModule = 0;
    const int startMainModule = 1;
    const int endMainModule = 3;

    // Akan terus mengulang program,
    // jika user tidak memilih opsi terakhir
    while (selectedMainModule != endMainModule)
    {
        // Header program
        header();

        // Meminta user memilih modul utama
        do
        {
            printf("\n");

            printf("Pilih modul yang tersedia:\n");
            printf("1. Produk\n");
            printf("2. Transaksi\n");
            printf("3. Keluar program\n");

            printf("Pilih berdasarkan angka (%d-%d): ", startMainModule, endMainModule);
            scanf("%d", &selectedMainModule);
        } while (!isValidChoice(startMainModule, endMainModule, selectedMainModule));

        printf("\nPASSED\n");

        switch (selectedMainModule)
        {
        case 1:
            productModule();
            break;
        case 2:
            transactionModule();
            break;
        default:
            break;
        }
    }

    printf("Program akan berakhir...\n\n");

    return 0;
}

/**
 * Modul produk.
 *
 * Modul ini berisi fungsi-fungsi yang berhubungan dengan produk,
 * seperti menampilkan daftar produk, menambah produk baru,
 * mengubah data produk, menghapus produk, dan lain sebagainya.
 */
void productModule()
{
    int selectedProductSubModule = 0;
    const int startProductSubModule = 1;
    const int endProductSubModule = 6;

    while (selectedProductSubModule != endProductSubModule)
    {
        // Meminta user memilih submodul Produk
        do
        {
            printf("\n");
            headerModule("Produk");

            printf("Pilih submodul yang tersedia:\n");
            printf("1. Lihat semua produk\n");
            printf("2. Lihat produk berdasarkan kategori\n");
            printf("3. Tambah produk baru\n");
            printf("4. Ubah data produk\n");
            printf("5. Hapus produk\n");
            printf("6. Keluar modul\n");

            printf("Pilih berdasarkan angka (%d-%d): ", startProductSubModule, endProductSubModule);
            scanf("%d", &selectedProductSubModule);
        } while (!isValidChoice(startProductSubModule, endProductSubModule, selectedProductSubModule));

        printf("\nPASSED\n");
    }
}

/**
 * Modul transaksi.
 *
 * Modul ini berisi fungsi-fungsi yang berhubungan dengan transaksi,
 * seperti membuat transaksi baru, melihat seluruh history transaksi,
 * dan lain sebagainya.
 */
void transactionModule()
{
    int selectedTransactionSubModule = 0;
    const int startTransactionSubModule = 1;
    const int endTransactionSubModule = 3;

    while (selectedTransactionSubModule != endTransactionSubModule)
    {
        // Meminta user memilih submodul Transaksi
        do
        {
            printf("\n");
            headerModule("Transaksi");

            printf("Pilih submodul yang tersedia:\n");
            printf("1. Buat transaksi baru\n");
            printf("2. Lihat seluruh history transaksi\n");
            printf("3. Keluar modul\n");

            printf("Pilih berdasarkan angka (%d-%d): ", startTransactionSubModule, endTransactionSubModule);
            scanf("%d", &selectedTransactionSubModule);
        } while (!isValidChoice(startTransactionSubModule, endTransactionSubModule, selectedTransactionSubModule));

        printf("\nPASSED\n");
    }
}

/**
 * Menampilkan header program.
 *
 * Fungsi ini menampilkan header program yang
 * mencakup judul program dan garis pemisah.
 */
void header()
{
    printf("=============================================================\n");
    printf("========== Program Simulasi Manajemen Toko Sembako ==========\n");
    printf("=============================================================\n");
}

/**
 * Menampilkan header dari sebuah modul.
 *
 * Fungsi ini menampilkan header dari sebuah modul,
 * mencakup nama modul dan garis pemisah.
 *
 * @param moduleName nama modul
 */
void headerModule(char *moduleName)
{
    printf("====== Modul %s ======\n", moduleName);
}

/**
 * Mengecek apakah pilihan yang diberikan valid
 * berdasarkan rentang nilai `start` dan `end`.
 *
 * @param start nilai awal rentang
 * @param end nilai akhir rentang
 * @param choice pilihan yang ingin divalidasi
 * @return true jika pilihan valid, false jika tidak
 */
bool isValidChoice(int start, int end, int choice)
{
    return choice >= start && choice <= end;
}
