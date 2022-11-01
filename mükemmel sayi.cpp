/*Kendisi hariç bütün pozitif tamsayý çarpanlarýnýn toplamý kendisine eþit olan sayýlara 
mükemmel sayý denir. Örneðin, 28 sayýsýnýn kendisi hariç pozitif çarpanlarý toplamý 
1+2+4+7+14 = 28 olduðundan 28 sayýsý mükemmel bir sayýdýr.*/
//mükemmel sayi
#include<stdio.h>
int main(){
	int i,sayi,toplam=0;
	printf("sayiyi giriniz: "); scanf("%d",&sayi);
	
	for(i=1; i<sayi; i++){
		if(sayi%i==0){
			printf("i : %d\n",i); 
			toplam+=i;
			}
	}
	printf("toplam : %d\n",toplam);
	
	if(toplam==sayi)
		printf("%d sayisi mukemmel sayidir.",toplam);
	else
		printf("%d mukemmel sayi degildir.",sayi);
}
