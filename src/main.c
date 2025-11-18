#include <stdio.h>
#include <stdbool.h>

void header();
bool isValidChoice(int start, int end, int choice);

int main()
{
    int selectedMainModule;

    header();

    do
    {
        printf("\n");

        printf("Pilih modul yang tersedia:\n");
        printf("1. Produk\n");
        printf("2. Transaksi\n");

        printf("Pilih berdasarkan angka (1-2): ");
        scanf("%d", &selectedMainModule);
    } while (!isValidChoice(1, 2, selectedMainModule));

    printf("\nPASSED\n");
    return 0;
}

/**
 * Prints the header of the program.
 *
 * This function prints the header of the program,
 * which includes the title of the program and
 * a separator line.
 */
void header()
{
    printf("=============================================================\n");
    printf("========== Program Simulasi Manajemen Toko Sembako ==========\n");
    printf("=============================================================\n");
}

/**
 * Checks if the given choice is valid
 * within the range of start and end
 *
 * @param start the start of the range
 * @param end the end of the range
 * @param choice the choice to be validated
 * @return true if the choice is valid, false otherwise
 */
bool isValidChoice(int start, int end, int choice)
{
    for (int i = start; i <= end; i++)
    {
        if (i == choice)
        {
            return true;
        }
    }

    return false;
}