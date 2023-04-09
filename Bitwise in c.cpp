//Print the maximum values for the and, or and xor comparisons, each on a separate line.

#include <stdio.h>

#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
  int mAND,mOR,mXOR;
  mAND=mOR=mXOR=0;
for(int i=1;i<=n;i++)
{
    for(int j=i+1;j<=n;j++)
    {
        if((i&j)>mAND&&(i&j)<k) mAND=i&j;
        if((i|j)>mOR&&(i|j)<k) mOR=i|j;
        if((i^j)>mXOR&&(i^j)<k) mXOR=i^j;
    }
}
printf("%d\n%d\n%d",mAND,mOR,mXOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

