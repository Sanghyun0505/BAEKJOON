#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort1();void sort2();
int n,a[10001],b[10001],s=0;
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    scanf("%d",&b[i]);
  }
  sort1();sort2();
  // for(int i=0;i<n;i++) printf("%d ",a[i]);
  // printf("\n");
  // for(int i=0;i<n;i++) printf("%d ",b[i]);
  for(int i=0;i<n;i++){
    s+=a[i]*b[i];
  }
  printf("%d",s);
}
void sort1(){
  int temp,min;
  for(int i=0;i<n-1;i++){
    min=i;
    for(int j=i+1;j<n;j++){
      if(a[j]<a[min])min=j;
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
}
void sort2(){
  int temp,min;
  for(int i=0;i<n-1;i++){
    min=i;
    for(int j=i+1;j<n;j++){
      if(b[j]>b[min])min=j;
    }
    temp=b[i];
    b[i]=b[min];
    b[min]=temp;
  }
}