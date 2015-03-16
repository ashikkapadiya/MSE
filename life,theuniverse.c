//this program is the solutionn for life the universe and everything

#include<stdio.h>

int main()
{
    int number,i;
    scanf("%d\n",&number);
    for(i=0;;i++)
    {
        if(number==42)
            break;
        else
            printf("%d\n",number);
            scanf("%d\n",&number);
    }
}
