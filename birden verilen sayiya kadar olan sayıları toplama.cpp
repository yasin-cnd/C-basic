//birden verilen sayiya kadar olan say�lar� toplama
#include<stdio.h>
int main(){
	int i,toplam=0,sayi;
 	printf("sayiyi giriniz : "); scanf("%d",&sayi);
	for (i=0; i<sayi; i++){
		toplam=toplam+i;
	}
	printf("%d\n",toplam);	
}
