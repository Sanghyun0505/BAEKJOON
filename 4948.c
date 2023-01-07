#include<stdio.h>
#include <math.h>
#include <math.h>
long long int n=1;
long long int check(long long int k);
int main(){
  long long int cnt=0,i=0;
  while(n!=0){
    scanf("%lld",&n);
    if(n==0)break;
    for(i=n+1;i<=2*n;i++){
      cnt+=check(i);
    }
    printf("%lld\n",cnt);
    cnt=0;
  }
}

long long int check(long long int k){
  long long int j;
  int root = sqrt(k);
  for(j=2;j<=root;j++){
    if(k%j==0)return 0;
  }
  if((k>n&&k<=2*n))return 1;
  else return 0;
}
