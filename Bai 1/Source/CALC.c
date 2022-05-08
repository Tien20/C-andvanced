#include "C:\Users\Lenovo\Desktop\C\C Advanced\Bai 1_makefile\Header\CALC.h"

void nhapMang(int x[], int n)
{
	do {
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[], int n){
	printf("\n");
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int sum_Array(int x[], int n)
{
	int Sum=0;
	for(int i=0; i<n; i++){
        Sum+=x[i];
		
	}
    return Sum;
}
int valueMax_Array(int x[],int n)
{
	int max=x[0];int i;
	for(i=0;i<n;i++)
	{
		  if(max < x[i])
		  max=x[i];
	}
	return max;
}
int valueMin_Array(int x[],int n)
{
	int min=x[0];
	for(int i=0;i<n;i++)
	{
		  if(min>x[i])
		  min=x[i];
	}
	return min;
}
int findValue_inArray(int x[],int n,int findValue)
{
	int i=0;
	for( i;i<n;i++)
	{
		if(findValue==x[i])
		printf("\n so %d o vi tri x[%d]",findValue,i);


	
		
	}
	printf("\n--------\n");


	
}

