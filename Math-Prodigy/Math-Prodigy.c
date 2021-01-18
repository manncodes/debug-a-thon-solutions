#include<stdio.h>
#include<math.h>
#define u unsigned int 

/** 
 * @brief Solution to "Math Prodigy" Problem.
 * 
 * @author Ridham Karia (@ridhamkaria) 
*/


/**
 * @brief finds gcd
 * 
 * @param a 
 * @param b 
 * @return u 
 */
u gcd(u a,u b)
{
    if(a<b)
    {
        u t;
        t=a;
        a=b;
        b=t;
    }
    if(b==0)
        return a;
    else
        return gcd(a%b,b);
}

/**
 * @brief F1 function is basically Euler Toilent Function
 * 
 * @param N 
 * @return double 
 */
double F1(u N)
{
    double val=0;
    for(int i=1;i<=N;i++)
        if(gcd(i,N)==1)
            val++;
    return val;
}


/**
 * @brief returns Nth fibonacci number.
 * 
 * @param N 
 * @return double 
 */
double F2(u N)
{
    double val=0;
    int a[6]={0,1,1,2,3,5};
    if(N<=5)
        val=a[N];
    else
    {
        int t=5;
        val=a[5];
        while(t<N)
        {
            val=round(val1.61803398875);
            t++;
        }
    }
    return val;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        u N;
        double ma;
        scanf("%u",&N);
        ma=1.4F1(N)+0.875*F2(N);
        printf("%0.2lf\n",ma);
    }
    // printf("%lf\n",F2(63));
    return 0;
}
