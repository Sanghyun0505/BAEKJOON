#include<stdio.h>
int main(){
	int n,m,a,sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&m);
    for(int j=1;j<=m;j++){
      scanf("%d",&a);
      sum+=a;
    }
    printf("%d\n",sum);
    sum=0;
  }
}
