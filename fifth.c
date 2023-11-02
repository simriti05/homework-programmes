#include <stdio.h>
int main() {
    int a=5,b=10,c=15,d=20,e=25;
    printf("a is: %d\n",a);
    printf("b is: %d\n",b);
    printf("c is: %d\n",c);
    printf("d is: %d\n",d);
    printf("e is: %d\n",e);
    int smallest=a;
        if(b<smallest)smallest=b;
        if(c<smallest)smallest=c;
        if(a<smallest)smallest=a;
        if(d<smallest)smallest=d;
        if(e<smallest)smallest=e;
        printf("\nsmallest is: %d",smallest);
        return 0;
}