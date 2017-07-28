#include<stdio.h>
#define STOP 0
main()
{
int n, min, max;
printf("unesite niz cijelih brojeva [0 za kraj]: \n");

scanf("%d", &n);
max=0;
min=999999;
while(n!=STOP)
{
    if(n<min)
        min=n;
    if (n>max)
        max=n;
    scanf("%d", &n);
}
printf("max broj je: %d, a min broj je: %d.\n", max, min);
}

