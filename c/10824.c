#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
char a[1000001],c[1000001],b[1000001], d[1000001];
int main(){
	int a1,b1,c1,d1;
	scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
	
	sprintf(a,"%d",a1);
	sprintf(b,"%d",b1);
	sprintf(c,"%d",c1);
	sprintf(d,"%d",d1);
	
	strcat(a,b);
	strcat(c,d);
	
	long long A=atoi(a);
	long long C=atoi(c);
	
	printf("%lld",atoll(a)+atoll(c));
}
