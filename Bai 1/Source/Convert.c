
#include "C:\Users\Lenovo\Desktop\C\C Advanced\Bai 1_makefile\Header\Convert.h"

void convert_dec_to_bin(int number)
{
    int a[20], i;
    for (i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    printf("\n0b");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}
long DectoHex(long num_decimal)
{
    long remainder, hex;
    int a = 1, b, var;
    char hexanum_decimal[100];
    hex = num_decimal;
    while (hex != 0)
    {
        var = hex % 16;
        if (var < 10)
            var = var + 48;
        else
            var = var + 55;
        hexanum_decimal[a++] = var;
        hex = hex / 16;
    }
    printf(" \nso hex cua so thap phan %ld la : ", num_decimal);
    for (b = a - 1; b > 0; b--)
    {
        printf("%c", hexanum_decimal[b]);}
 
}

