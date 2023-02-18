#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int k=n-1;k>=i;k--){
      printf(" ");
    }
    for(int j=2*i-1;j>=1;j--){
      printf("*");
    }
    printf("\n");
  }
  n-=1;
  for(int i=n;i>0;i--){
    for(int j=n-i;j>=0;j--){
      printf(" ");
    }
    for(int k=2*i-1;k>0;k--){
      printf("*");
    }
    printf("\n");
  }
}