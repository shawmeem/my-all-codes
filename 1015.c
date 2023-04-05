#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x;
    scanf("%lf%lf%lf%lf", &a,&c,&b,&d);
    x=(((b-a)*(b-a)) + ((d-c)*(d-c)));

    printf("%.4lf\n",pow(x, .5));

    return 0;

}

