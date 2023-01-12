#include<stdio.h>
int main(){
	int a,b,c;
	int d,d1,d2,d3;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d",&d);
	c+=d;
	while(c>=60){
		b++;
		c-=60;
	}
	while(b>=60){
		a++;
		b-=60;
	}
	while(a>=24){
		a-=24;
	}
	
	printf("%d %d %d",a,b,c);
}
