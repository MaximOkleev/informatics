#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    int max1 = i;
    scanf("%d", &i);
    int max2 = i;
    
    if (max2>max1)
    {
        max2=max1;
        max1=i;
    }
    while(i!=0)
    {
        scanf("%d", &i);
        if(i!=0)
        {
            if (i> max1)
            {
                max2=max1;
                max1=i;
            }
            else
                if (i> max2)
                max2=i;
        }
    }
    printf("%d", max2);
    return 0;
}
