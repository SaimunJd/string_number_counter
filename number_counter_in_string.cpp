#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,c;
    char str[1000];
    scanf("%d\n",&t);
    while(t--)
    {
        gets(str);
        c = 0;
        for(i=0;str[i]!='\0';i++)
        {
            if((str[i]==' ')&&(str[i-1]!=' '))c++;
        }
        if(str[0]==' '||str[i-1]==' ')c--;
        printf("%d\n",c+1);
    }
    return 0;
}