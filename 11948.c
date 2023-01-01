#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
int main(){
  int a[1000],b,temp,min,sum=0;
  int max=-100000;
  for(int i=0;i<4;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<2;i++){
    scanf("%d",&b);
    if(b>max)max=b;
  }
  for(int i=0;i<3;i++){
    min = i;
    for(int j=i+1;j<4;j++){
      if(a[min]<a[j])min=j;
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  for(int i=0;i<3;i++) {
    sum+=a[i];
  }
  printf("%d",sum+max);
  
}