#include<stdio.h>
#include<string.h>
int main(){
  char a[101];
  scanf("%s",a);
  int b = strlen(a);
  for(int i=0;i<b;i++){
    if(i%10==0&&i!=0)printf("\n%c",a[i]);
    else printf("%c",a[i]);
  }
}
