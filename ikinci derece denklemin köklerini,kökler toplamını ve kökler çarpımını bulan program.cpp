//ikinci derece denklemin köklerini,kökler toplamýný ve kökler çarpýmýný bulan program
//ax^2+bx+c
#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,delta,a,b,c,kokler_toplami,kokler_carpimi;
	printf("a : "); scanf("%f",&a);
	printf("b : "); scanf("%f",&b);
	printf("c : "); scanf("%f",&c);
		
	delta=(b*b)-(4*a*c); 
	kokler_toplami=-b/a;
	printf("kokler_toplami : %f\n",kokler_toplami);
	
	kokler_carpimi=c/a;
	printf("kokler carpimi : %f\n",kokler_carpimi);
		
	if (delta>0){
		x1=((-b+sqrt(delta))/(2*a)); 
		printf("x1 : %f\n",x1);
		x2=((-b-sqrt(delta))/(2*a));
		printf("x2 : %f",x2);
	}
	
	else if (delta<0){
		printf("delta 0 dan kucuktur.\nreel kok yoktur.");
	}
	
	else {
		printf("delta 0 a esittir.\nesit iki kok vardir ");
		x1=((-b+sqrt(delta))/(2*a)); 
		x2=((-b-sqrt(delta))/(2*a));
		printf("x1 ve x2 : %f %f ",x1,x2);
	}	
}

