#include<stdio.h>
int main(){
  int n,t,c,p,j=1,i;
  i=j;
  int sum=0;
  scanf("%d %d %d %d",&n,&t,&c,&p);
  while(j<=n){
    j+=t;
    if(j>n)break;
    sum+=c;
  }
  printf("%d",p*sum);
  
}
