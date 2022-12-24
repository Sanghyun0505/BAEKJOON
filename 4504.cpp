#include<stdio.h>
int main(){
  int n,a=1;
  scanf("%d",&n);
  while(a!=0){
    scanf("%d",&a);
    if(a==0)break;
    if(a%n==0)printf("%d is a multiple of %d.\n",a,n);
    else printf("%d is NOT a multiple of %d.\n",a,n);
  }
}
