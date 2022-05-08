#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "calc.c"
#include "Convert.c"
#include "mString.c"


int main(){
int arr[]={4,4,7,3,2,9};
int arr2[]={4,4,7,8,2,9};
 printf("\n MAX= %d",valueMax_Array(arr,6));
 printf("\n Min= %d",sum_Array(arr, 6));

findValue_inArray(arr,6,4);
convert_dec_to_bin(10);
DectoHex(64);

if(compare_array(arr, 6, arr2, 6)==1)
{
    printf("\nHai mang trung nhau\n");
}
else  printf("\nHai mang khong trung nhau\n");

insertValue_Array(arr,6,2,21);
}