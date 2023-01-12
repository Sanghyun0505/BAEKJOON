#include<stdio.h>
int main() {
	int n,m;
	int sum=0;
	int max=-10000000;
    for(int i=1;i<=10;i++){
    	scanf("%d %d",&n,&m);
    	sum-=n;
    	sum+=m;
    	if(sum>max)max=sum;
	}
	printf("%d",max);
}
