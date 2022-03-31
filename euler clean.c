#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
unsigned long long mathy(int cb);
int factsum(int yo);
int digitsum(int mum);
int main()
{
    int num = 0;
    int q;
    int m;
    int n;
    fflush(stdin);
    scanf("%d", &q);
    while (num < q)
    {
        fflush(stdin);
        scanf("%d %d", &n, &m);
        num = num + 1; 
        printf("%llu\n", mathy(n%m));
    }
    return 0;
}
unsigned long long mathy(int cb)
{
    int i         = 1;
    int sgi       = 0;
    int total     = 0;
    int n         = 0;
    int digitsumm = 0;
    int factsumm;
    while (i <= cb)   
    {                 
            while (digitsumm != i) 
            {
                n         = n + 1;  
                factsumm  = factsum(n);  
                digitsumm = digitsum(factsumm);  
            }
            sgi       = digitsum(n);
            total     = total + sgi;               
            i         = i + 1; 
            digitsumm = 0;  
            n         = 0;
    }
    return total; 
} 
int factsum(int yo)
{
    int sum = 0;
    int remainder;
    int f = 1;
    int i = 1;
    
    while (yo != 0)
    {
        remainder = yo%10;
        while (i <= remainder)
        {
            f = f * i;
            i = i + 1;
        }
        sum = sum + f;
        yo  = yo/10;
        f   = 1; i = 1;
    }
    return sum;
}
int digitsum(int mum)
{
    int sum = 0;
    int remainder;
    
    while (mum !=0)
    {
        remainder = mum%10;
        sum       = sum + remainder;
        mum       = mum/10;
    }
    return sum;
}
