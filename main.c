#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i ,first=0 , second=1,result;
    printf("Enter the number upto which you want to print series :");
    scanf("%d",&n);
    printf("fabonacci series is :\n");
    for (i=0; i<=n; i++)
    {
        if(i<1)
        {
            result=i;
            printf("%d\n",result);
            
        }
        else
        {
            result = result + first;
            first = second;
            second = result;
            printf("%d\n",result);
        }

    }
    return 0;
}
