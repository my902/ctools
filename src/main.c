#include <stdio.h>
#include <stdlib.h>
#include "max.h"
#include "sum.h"

int main(void)
{
int a=10,b=12;
int c,d;
c=max(a,b);
printf("max=%d\n",c);
d=sum(a,b);
printf("%d+%d=%d\n",a,b,d);
return 0;
}
