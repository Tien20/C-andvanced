#include "C:\Users\Lenovo\Desktop\C\C Advanced\Bai 1_makefile\Header\mString.h"



int compare_array(int array1[], int num1, int array2[], int num2)
{
   if(num1 != num2) return 0;
   else{
       for(int i=0; i< num1; i++){
           if(array1[i] != array2[i]) return 0;
       }
       return 1;
   }
}


int insertValue_Array(int array[],int n,int position, int valuesinsert)
{

 for(int i=n;i>=position;i--)
 {
 array[i]=array[i-1];
 }
 array[position]=valuesinsert;
 n++;
 printf("\nMang sau khi chen:\n");
 for (int i = 0; i < n; i++)
      printf("%d\n", array[i]);
}






