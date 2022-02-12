#include<stdio.h>
#define pi 3.14 
int main(){
	float r , d , c , a ;
	
	printf("enter the radius of the circle :");
	scanf("%f", &r);
	
	printf("%f diameter of the circle :", 2*r);
	printf("%f circumfarance of the circle :" , 2*r*pi);
	printf("%f area of the circle :" , pi*r*r);
}
