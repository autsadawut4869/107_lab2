#include <stdio.h>
#include <string.h>
int main()
{
    long long int input,a[500],x,c=0,y;
    int i;
    char s[30]={'\0'};
    scanf("%lld", &input);
    sprintf(s, "%lld",input);
    y=strlen(s);
    for(i=y;i>0;i--){
        x=input%10;
        a[i]=x;
        input=input/10;
    }
   for(i=0;i<=y;i++){
        if(a[i]==0){
            printf("Zero");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==1){
            printf("One");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==2){
            printf("Two");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==3){
            printf("Three");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==4){
            printf("Four");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==5){
            printf("Five");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==6){
            printf("Six");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==7){
            printf("Seven");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==8){
            printf("Eight");
            if(i!=y-1)
            printf("-");
        }
        else if(a[i]==9){
            printf("Nine");
            if(i!=y-1)
            printf("-");
        }
    }


    return 0;
}
