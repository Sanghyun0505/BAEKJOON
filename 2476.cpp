#include<stdio.h>
int main(){
	int n,d[10000];
	int a,b,c;
	int s1;
	int max=-10000000;
	int max2;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a==b&&a==c) {
			s1=10000+a*1000;
		}
		else if((a==b&&a!=c)||(a!=b&&a==c)){
			s1=1000+a*100;
		}
		else{
			if(a>=b&&a>=c)max2=a;
			else if(b>=a&&b>=c)max2=b;
			else max2=c;
			
			s1=max2*100;
		}
		if(s1>max)max=s1;
	}
	
	printf("%d",max);
}
