#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, D, x1, x2;
    printf(" a = "); scanf("%d", &a);
    printf(" b = "); scanf("%d", &b);
    printf(" c = "); scanf("%d", &c);
    D = (b*b) - (4*a*c);
    if (D<0){
    printf("Akar Imajiner");
    }
    else if (D == 0){
    x1 = (-b) / (2*a);
    x2 = x1;
    printf("x1 = %2d\n", x1);
    printf("x2 = %2d\n", x2);
    }
    else
    {
    x1 = (-b + (sqrt(D)))/(2*a);
    x2 = (-b - (sqrt(D)))/(2*a);
    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
    }
    return 0;
}


