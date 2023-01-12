#include<stdio.h>
long long int gcd(long long int c,long long int d);
int main(){
  long long int n,m,sum=0;
  scanf("%lld",&n);
  for(int i=1;i<=n;i++){
    int a[101];
    scanf("%lld",&m);
    for(int j=1;j<=m;j++){
      scanf("%d",&a[j]);
    }
    for(int i=1;i<=m;i++){
      for(int j=i+1;j<=m;j++){
        sum+=gcd(a[i],a[j]);
      }
    }
    printf("%lld\n",sum);
    sum=0;
  }
}

long long int gcd(long long int c,long long int d){
    if(d == 0)return c;
    else return gcd(d, c%d);
}