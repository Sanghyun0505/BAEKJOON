#include <stdio.h>
#include <string.h>
int main(void) {
  int n;
  char a[10001];
  scanf("%d",&n);
  for(int i = 0; i<n;i++){
    scanf("%s",a);
    if(strlen(a)==1)printf("%s%s\n",a,a);
    else printf("%c%c\n",a[0],a[strlen(a)-1]);
  }
}