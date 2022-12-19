#include<stdio.h>
int main(){
	int n,a,s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		s+=a;
		if(i==n){
			a=n-1;
			s=s-a;
		}
	}
	printf("%d",s);
}
