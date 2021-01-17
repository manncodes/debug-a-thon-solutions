#include<stdio.h>

/**
 * @brief Solution to "Cost Counter" problem.
 * 
 * @author Ridham Karia (@ridhamkaria)
 */


/**
 * @brief returns cost of all slices of Pizzas.
 * 
 * @param rows 
 * @param m 
 * @return int 
 */
int cost(int rows,int m)
{
    int cost;
    cost=((rows)*(rows+1))/2;
    cost*=13;
    cost*=m;
    return cost;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int row=0,c=0,m=0;
        scanf("%d %d",&m,&row);
        c=cost(row,m);
        printf("%d\n",c);
    }
    return 0;
}