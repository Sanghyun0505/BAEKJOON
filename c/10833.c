#include<stdio.h>
int main(){
	int n,sum=0;
	int a,b,c;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		if(b<a) sum+=b;
		else{
			while(b>a){
				b-=a;
				if(b<a){
					sum+=b;
					break;	
				}
			}
		}
	}
	printf("%d",sum);
}

