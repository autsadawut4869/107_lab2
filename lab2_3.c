#include <stdio.h>
int main()
{
    int a;
    char A;
    scanf("%c %d",&A,&a);
    if(A>=65&&A<=90&&a>=1&&a<=31)
    {
        if(a%2!=0)
        {
            if(A>=65&&A<=73)
            {
                if(a%5==0)
                    printf("%c",92);
                printf("(^_^)");
                if(a%5==0)
                    printf("%c",47);
            }
            else if(A>=74&&A<=82)
            {
                if(a%5==0)
                    printf("%c",92);
                printf("(*o*)");
                if(a%5==0)
                    printf("%c",47);
            }
            else if(A>=83&&A<=90)
            {
                if(a%5==0)
                    printf("%c",92);
                printf("(T_T)");
                if(a%5==0)
                    printf("%c",47);
            }
        }
        else if(a%2==0)
        {
            if(A>=65&&A<=73)
            {
                printf("{@_@}");
            }
            else if(A>=74&&A<=82)
            {
                printf("{*v*}");
            }
            else if(A>=83&&A<=90)
            {
                printf("{x_x}");
            }
        }
    }



    return 0;
}
