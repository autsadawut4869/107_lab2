#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,k=0;
    char A,B,C;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%c%c%c",&A,&B,&C);

    if(a<b&&a<c)
    {
        printf("A");
        if(b<c)
            printf("B");
        else if(b>c){
            printf("C");
            k=1;
        }
        if(k==1)
            printf("B");
        else
            printf("C");
    }
    else if(b<a&&b<c)
    {
        printf("A");
        if(a<c)
            printf("B");
        else if(a>c){
            printf("C");
            k=1;
        }
        if(k==1)
            printf("B");
        else
            printf("C");
    }
    if(c<b&&c<a)
    {
        printf("A");
        if(b<a)
            printf("B");
        else if(b>a){
            printf("C");
            k=1;
        }
        if(k==1)
            printf("B");
        else
            printf("C");
    }


    return 0;
}
