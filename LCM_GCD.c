#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    return gcd(b%a,a);
}
int lcm(int a,int b)//                     uses the function gcd()
{
    return (a*b)/gcd(a,b);
}

int main()//                               driver
{
    int i,j,k,l;
    j=gcd(2,4);
    k=lcm(5,4);
    l=lcm(4,16);
    printf("%d %d %d",j,k,l);
    return 0;
}
