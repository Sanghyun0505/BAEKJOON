#include<stdio.h>
int main(){
  long long int n,m,cnt=0;
  scanf("%lld %lld",&n,&m);
  cnt=n-m;
  if(cnt<0)printf("%lld",cnt*-1);
  else printf("%lld",cnt);
}
