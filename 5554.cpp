#include<stdio.h>
int main(){
	int a;
	int x=0;
	for(int i=1;i<=4;i++){
		scanf("%d",&a);
		x+=a;
	}
	printf("%d\n%d",x/60,x%60);
}

