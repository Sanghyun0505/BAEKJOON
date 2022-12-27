#include<stdio.h>
int main(){
  int a[10]={500,100,50,10,5,1};
  int n,i=0,cnt=0;
  scanf("%d",&n);
  n=1000-n;
  while(n>0){
    if(n<=0)break;
    if(n>=a[i]){
      n-=a[i];
      cnt++;
    }
    else i++;
  }
  printf("%d",cnt);
}
