#include<stdio.h>
#include<math.h>
int main(){
  long long int n,a;
  long long int cnt=0;
  scanf("%lld %lld",&n,&a);
  long long int x=a;
  while(x<=n){
    cnt+=n/x;
    x*=a;
  }
  printf("%lld",cnt);
}
