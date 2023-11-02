#include <stdio.h>
int main() {
    int start,end,units,bill,charges;
    printf("enter the start reading",start);
    scanf("%d",&start);
    printf("enter the end reading",end);
    scanf("%d",&end);
    units=end-start;
    if(units<=100)
    {
        charges=units*1.50;
    }
    else if(units>100 && units<=200)
    {
        charges=units*2.50;
    }
    else if(units>200 && units<=500)
    {
        charges=units*3.50;
    }
    printf("total charges: %d",charges);
    return 0;
}
