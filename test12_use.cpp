#include <stdbool.h>
#include <stdio.h>
#include <math.h>
bool primes(int n){
    if(n<2)
        return false;
    else
        for(int i=2;i<sqrt(n);i++)
            if(n%i==0){
                return false;
                break;
            }
return true;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        int t=a;
        a=b;b=t;
    }
    for(int i=a;i<=b;i++)
        if(primes(i))
            printf("%d ",i);
}