/*Kendisi hari� b�t�n pozitif tamsay� �arpanlar�n�n toplam� kendisine e�it olan say�lara 
m�kemmel say� denir. �rne�in, 28 say�s�n�n kendisi hari� pozitif �arpanlar� toplam� 
1+2+4+7+14 = 28 oldu�undan 28 say�s� m�kemmel bir say�d�r.*/
//m�kemmel sayi
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
