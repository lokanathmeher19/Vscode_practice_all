#include<stdio.h>

int main()
{
    int n,i;
    float profit[20],weight[20],ratio[20],capacity,total=0;

    printf("Enter number of items: ");
    scanf("%d",&n);

    printf("Enter profit and weight:\n");

    for(i=0;i<n;i++)
    {
        scanf("%f %f",&profit[i],&weight[i]);
        ratio[i]=profit[i]/weight[i];
    }

    printf("Enter capacity: ");
    scanf("%f",&capacity);

    for(i=0;i<n;i++)
    {
        if(weight[i]<=capacity)
        {
            capacity-=weight[i];
            total+=profit[i];
        }
    }

    printf("Maximum Profit = %f",total);
}