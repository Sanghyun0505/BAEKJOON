#include<stdio.h>
int main(){
  int n,compare=1,times=1;
  scanf("%d",&n);
  if(n==1)printf("1");
  else{
    while(n>compare){
      compare+=times*6;
      times+=1;
    }
    printf("%d",times);
  }
}