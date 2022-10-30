#include<stdio.h>
int main(){
	int islem,sayi1,sayi2;
	printf("toplama(1) fark(2) carpma(3) bolme(4) mod(5)\n");
	printf("yapmak istediginiz islemi seciniz : 1/2/3/4/5 "); scanf("%d",&islem);
	printf("sayilari giriniz : "); scanf("%d\n%d",&sayi1,&sayi2);
	
	switch(islem){
		case 1:
			printf("sayilarin toplami : %d\n",sayi1+sayi2);
			break;	
			
		case 2:
			if  (sayi1>sayi2){
				printf("sayilarin farki : %d ",sayi1-sayi2);
				break;}
			else{
				printf("sayilarin farki : %d ",-(sayi1-sayi2));
				break;}
		
		case 3:
			printf("sayilarin çarpimi : %d \n",sayi1*sayi2);
			break;	
		
		case  4:
			printf("sayilarin bolumu : %f\n",float(sayi1)/float(sayi2));
			break;
		case 5:
			if  (sayi1>sayi2){
				printf("mod : %d ",sayi1%sayi2);
				break;}
			else{
				printf("mod : %d ",sayi1%sayi2);
				break;}		
			
		default :
			printf("hatali tuslama yaptiniz. \n1/2/3/4/5 birini seciniz.");
			break;				
	}
}
