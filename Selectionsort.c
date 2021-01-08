#include<stdio.h>

void selectionsort(int a[])
{
    for(int i=0;i<3;i++)
    {   
        int small=a[i];
        int pos=i;
        for(int j=i;j<5;j++)
        {
            if(a[j]<small)
            {
                pos=j;
                small=a[j];
            }
            int temp=a[i];
            a[i]=small;
            a[pos]=temp;
        }
    }
}

int main()
{
    printf("Enter array elements\n\n ");
    int a[10];
    for(int i=0;i<5;i++)
    {   printf("Enter element %d: ",i+1);

        scanf("%d",&a[i]);

}
printf("\nBefore sorting:\n");
for(int i =0;i<5;i++)
{
    printf("%d\t",a[i]);
}

selectionsort(a);
printf("\nAfter sorting:\n");

for(int i =0;i<5;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}