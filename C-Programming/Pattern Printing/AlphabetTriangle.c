#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // No. of rows --> i
        int a=1;
        for(int j=1;j<=i;j++){   // No. of columns --> j
             int d=a+64;
             char ch=(char)d;
             printf("%c ",ch);
             a++;
        }
        printf("\n");
    }
   
    return 0;
}