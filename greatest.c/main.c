#include <stdio.h>

int main()
{   int a,b,c;
    printf("enter three numbers :");
    scanf("%d %d %d" ,&a ,&b ,&c);
     if(a-b>0 && a-c>0)
     printf("%d is the greatest",a);
     else if(b-c>0)
     printf("%d is the greatest",b);
     else
     printf("c%d is the greatest",c);

    return 0;
}