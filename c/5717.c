#include<stdio.h>
int main(){
	int n=1,m=1;
  while(n!=0&&m!=0){
    scanf("%d %d",&n,&m);
    if(n==0&&m==0)break;
    printf("%d\n",n+m);
  }
}
