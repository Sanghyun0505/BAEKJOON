#include <stdio.h>
int main() {
  int n,a,sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&a);
    for(int i=1;i<a;i++){
      if(a%i==0)sum+=i;
    }
    printf("\n");
    if(sum==a) printf("%d is a perfect number.\n",a);
    else if(sum>a) printf("%d is an abundant number.\n",a);
    else printf("%d is a deficient number.\n",a);
    sum=0;
  }
}
