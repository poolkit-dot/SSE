#include <stdio.h>

int main()
{   int n;
    int iscomp=0;
    printf("enter a number to test prime or composite :");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
    if(n%i==0){
    iscomp=1;
    break;
    }
    }
    if(iscomp==1)
    printf("composite ");
    else
    printf("prime ");
    
    return 0;
}
