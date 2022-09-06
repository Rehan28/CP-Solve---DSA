#include<stdio.h>
int main()
{
    int i,n;
    char text[10];
    scanf("%[^\n]",&text);
    scanf("%d",&n);
    printf("%d",n);
    for(i=0;i<n;i++){
        printf("%s\n",text);
    }
}
