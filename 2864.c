#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
int main(){
  long long int k,f,sum1=0,sum2=0;
  char a[1000001];
  char b[1000001];
  scanf("%s %s",a,b);
  int c = strlen(a), d = strlen(b);
  //최솟값
  for(int i=0;i<c;i++){
    if(a[i]=='6')a[i]='5';
  }
  for(int i=0;i<d;i++){
    if(b[i]=='6')b[i]='5';
  }
  k=atoi(a);
  f=atoi(b);
  sum1=k+f;
  //최댓값
  for(int i=0;i<c;i++){
    if(a[i]=='5')a[i]='6';
  }
  for(int i=0;i<d;i++){
    if(b[i]=='5')b[i]='6';
  }
  k=atoi(a);
  f=atoi(b);
  sum2=k+f;
  printf("%lld %lld",sum1,sum2);
}