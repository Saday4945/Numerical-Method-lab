#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x*x-5*x+1);
}
float df(float x)
{
    return (3*x*x-5);
}
main()
{
    int i,maxitr;
    float x0,x1,h,allerr,a,b;
    printf("enter the value of a and b");
    scanf("%f %f",&a,&b);
    x0=(a+b)/2;
    printf("\n enter the value of x0 :\n");
    scanf("%f",&x0);
    printf("\n enter the maxitr and allowed error :\n");
    scanf("%d%f",&maxitr,&allerr);
    for(i=1;i<maxitr;i++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf("\n at iteration  %d  root is %f",i,x1);
        if(fabs(h)<allerr)
        {
            printf("\n after %d iteration   root =%f",i,x1);
            return(0);
        }
        x0=x1;
    }
}
