#include<stdio.h>
int main(){
	int n,a,sum=0;
	int cnt=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(a==1){
			cnt++;
			sum+=cnt;
		}
		else{
			cnt=0;
		}
	}
	printf("%d",sum);
}

