#include<stdio.h>
#include<string.h>
int main(){
  int a[1000]={0};
  char b[103];
  scanf("%s",b);
  for(int i=0;i<strlen(b);i++){
    for(int j='a';j<='z';j++){
      if(b[i]==j)a[j]++;
    }
  }
  for(int i='a';i<='z';i++){
    printf("%d ",a[i]);
  }
}

