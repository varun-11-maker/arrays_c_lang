#include <stdio.h>
main()
{
    int i,j,arr[50],n,temp;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array elemnts");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for (i=0;i<n;i++)
    {
        if (arr[i]<temp)
        {
            temp=arr[i];
        }
    }
    printf("smallest element is %d",temp);

}
