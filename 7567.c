#include<stdio.h>
#include<string.h>
int main(){
  char a[10001];
  int cnt=10;
  scanf("%s",a);
  for(int i=1;i<strlen(a);i++)
  {
    if(a[i]=='('){
      if(a[i-1]==')')cnt+=10;
      else cnt+=5;
    }
    else{
      if(a[i-1]=='(')cnt+=10;
      else cnt+=5;
    }
  }
  printf("%d",cnt);
}
