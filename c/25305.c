#include<stdio.h>
int main(){
  int n,m,temp,min;
  int a[10001];
  scanf("%d %d",&n,&m);
  for(int i =0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n-1;i++){
    min=i;
    for(int j=i+1;j<n;j++){
      if(a[j]>a[min])min=j;
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  printf("%d",a[m-1]);
  // for(int i=0;i<n;i++){
  //   printf("%d ",a[i]);
  // }
}
