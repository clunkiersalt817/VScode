#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct eq
{
    int a;
    int b;
    int c;
    float D;
};

int main()
{
    int n;
    printf("How many equations do you want to find the roots for : ");
    scanf("%d",&n);
    eq *a;
    a=new eq[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the coefficients a, b, c respectively : ");
        scanf("%d%d%d",&a[i].a,&a[i].b,&a[i].c);
        a[i].D=(a[i].b*a[i].b)-4*a[i].a*a[i].c;
        if(a[i].D>=0)
            {
                printf("roots are %f and ",(-a[i].b+sqrt(a[i].D))/(2*a[i].a));
                printf("%f",(-a[i].b-sqrt(a[i].D))/(2*a[i].a));
            }
        else
        printf("The root is complex");
    }
    return 0;
}