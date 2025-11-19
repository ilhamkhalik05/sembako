#include <stdio.h>
#include <stdbool.h>

// Struktur data
// ---------------------------------------------------------
typedef enum
{
    KATEGORI_MAKANAN,
    KATEGORI_MINUMAN,
    KATEGORI_ALAT_RUMAH_TANGGA,
    KATEGORI_LAINNYA,
} Kategori;

typedef struct
{
    char nama[50];
    float harga;
    int stok;
    Kategori kategori;
} Produk;

typedef struct
{
    char namaProduk[50];
    int kuantitas;
    float subtotal; // subtotal = hargaProduk * kuantitas
} Item;

typedef struct
{
    char namaKustomer[50];
    int jumlahItem;
    float total;
    Item items[]; // Harus ditaruh di paling bawah
} Transaksi;

// Modul Produk dan submodulnya
// ---------------------------------------------------------
void modulProduk();
void lihatSemuaProduk();
void lihatProdukBerdasarkanKategori();
void cariProdukBerdasarkanNama();
void buatProdukBaru();
void ubahDataProduk();
void hapusProduk();

// Modul Transaksi dan submodulnya
// ---------------------------------------------------------
void modulTransaksi();
void buatTransaksiBaru();
void lihatRiwayatTransaksi();

// Utils/fungsi pembantu
// ---------------------------------------------------------
void header();
void headerModul(char *moduleName);
bool isValidChoice(int start, int end, int choice);

int main()
{
    int selectedMainModule = 0;
    const int startMainModule = 1;
    const int endMainModule = 3;

    // Akan terus mengulang program,
    // hingga user memilih keluar dari program
    bool isQuit = selectedMainModule == endMainModule;
    while (!isQuit)
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

        switch (selectedMainModule)
        {
        case 1:
            modulProduk();
            break;
        case 2:
            modulTransaksi();
            break;
        default:
            break;
        }
    }

    printf("Program akan berakhir...\n\n");

    return 0;
}

// ====================== MODUL PRODUK ==================================

/**
 * Modul produk.
 *
 * Modul ini berisi fungsi-fungsi yang berhubungan dengan produk,
 * seperti menampilkan daftar produk, menambah produk baru,
 * mengubah data produk, menghapus produk, dan lain sebagainya.
 */
void modulProduk()
{
    int selectedProductSubModule = 0;    // Menyimpan sub module yang dipilih
    const int startProductSubModule = 1; // Menu pertama
    const int endProductSubModule = 7;   // Menu terakhir (opsi keluar submodul)

    bool isQuit = selectedProductSubModule == endProductSubModule;
    while (!isQuit)
    {
        // Meminta user memilih submodul Produk
        do
        {
            printf("\n");
            headerModul("Produk");

            printf("Pilih submodul yang tersedia:\n");
            printf("1. Lihat semua produk\n");
            printf("2. Lihat produk berdasarkan kategori\n");
            printf("3. Cari produk berdasarkan nama\n");
            printf("4. Tambah produk baru\n");
            printf("5. Ubah data produk\n");
            printf("6. Hapus produk\n");
            printf("7. Keluar modul\n");

            printf("Pilih berdasarkan angka (%d-%d): ", startProductSubModule, endProductSubModule);
            scanf("%d", &selectedProductSubModule);
        } while (!isValidChoice(startProductSubModule, endProductSubModule, selectedProductSubModule));

        // Masuk ke submodul yang dipilih oleh user
        switch (selectedProductSubModule)
        {
        case 1:
            lihatSemuaProduk();
            break;
        case 2:
            lihatProdukBerdasarkanKategori();
            break;
        case 3:
            cariProdukBerdasarkanNama();
            break;
        case 4:
            buatProdukBaru();
            break;
        case 5:
            ubahDataProduk();
            break;
        case 6:
            hapusProduk();
            break;
        default:
            break;
        }
    }
}

/**
 * Menampilkan daftar produk yang tersedia.
 *
 * Fungsi ini akan menampilkan daftar produk yang tersedia,
 * mencakup nama produk, kategori, stok, dan harga.
 */
void lihatSemuaProduk()
{
}

/**
 * Menampilkan produk berdasarkan kategori.
 *
 * Fungsi ini akan menampilkan daftar produk yang sesuai dengan kategori yang
 * diinputkan oleh user. User akan diminta untuk menginputkan kategori produk
 * yang ingin dilihat.
 */
void lihatProdukBerdasarkanKategori()
{
}

/**
 * Mencari produk berdasarkan nama.
 *
 * Fungsi ini akan menampilkan produk yang sesuai dengan nama yang
 * diinputkan oleh user. User akan diminta untuk menginputkan nama produk
 * yang ingin dicari.
 */
void cariProdukBerdasarkanNama()
{
}

/**
 * Membuat produk baru.
 *
 * Fungsi ini akan meminta user untuk menginputkan data produk baru,
 * seperti nama produk, kategori, stok, dan harga. Data produk baru akan
 * disimpan di dalam array produk.
 */
void buatProdukBaru()
{
}

/**
 * Mengubah data produk yang tersedia.
 *
 * Fungsi ini akan meminta user untuk menginputkan data produk yang
 * ingin diubah, seperti nama produk, kategori, stok, dan harga. Data
 * produk yang diubah akan disimpan di dalam array produk.
 */
void ubahDataProduk()
{
}

/**
 * Menghapus produk yang tersedia.
 *
 * Fungsi ini akan meminta user untuk menginputkan nama produk yang
 * ingin dihapus. Produk yang dihapus akan dihilangkan dari array
 * produk.
 */
void hapusProduk()
{
}

// ====================== MODUL TRANSAKSI ==================================

/**
 * Modul transaksi.
 *
 * Modul ini berisi fungsi-fungsi yang berhubungan dengan transaksi,
 * seperti membuat transaksi baru, melihat seluruh history transaksi,
 * dan lain sebagainya.
 */
void modulTransaksi()
{
    int selectedTransactionSubModule = 0;    // Menyimpan sub module yang dipilih
    const int startTransactionSubModule = 1; // Menu pertama
    const int endTransactionSubModule = 3;   // Menu terakhir (opsi keluar submodul)

    bool isQuit = selectedTransactionSubModule == endTransactionSubModule;
    while (!isQuit)
    {
        // Meminta user memilih submodul Transaksi
        do
        {
            printf("\n");
            headerModul("Transaksi");

            printf("Pilih submodul yang tersedia:\n");
            printf("1. Buat transaksi baru\n");
            printf("2. Lihat seluruh history transaksi\n");
            printf("3. Keluar modul\n");

            printf("Pilih berdasarkan angka (%d-%d): ", startTransactionSubModule, endTransactionSubModule);
            scanf("%d", &selectedTransactionSubModule);
        } while (!isValidChoice(startTransactionSubModule, endTransactionSubModule, selectedTransactionSubModule));

        // Masuk ke submodul yang dipilih oleh user
        switch (selectedTransactionSubModule)
        {
        case 1:
            buatTransaksiBaru();
            break;
        case 2:
            lihatRiwayatTransaksi();
            break;
        default:
            break;
        }
    }
}

/**
 * Membuat transaksi baru.
 *
 * Fungsi ini akan meminta user untuk menginputkan data transaksi baru,
 * seperti nama customer, jumlah item, data item, dan total.
 * Data transaksi baru akan disimpan di dalam array transaksi.
 */
void buatTransaksiBaru()
{
}

/**
 * Menampilkan riwayat transaksi.
 *
 * Fungsi ini akan menampilkan riwayat transaksi yang telah dibuat,
 * mencakup nama customer, jumlah item, data item, dan total.
 */
void lihatRiwayatTransaksi()
{
}

// ====================== FUNGSI PEMBANTU ==================================

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
void headerModul(char *moduleName)
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
