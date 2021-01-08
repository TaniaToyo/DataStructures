#include<stdio.h>
int b[5];
void merge(int a[],int lb,int mid,int ub){
    int i,j,k;
    
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;k++;

        }

        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
        
    }

    if(i>mid)
    {
        while(j<=mid)
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;k++;

        }
    }
    
}
void mergesort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid-1);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
         
    }
}



int main()
{
    int a[5],n,i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter number: ");
        scanf("%d",&a[i]);
    }
    mergesort(a,0,5);
   for(int o=0;o<5;o++)
    {
        printf("\t%d",b[o]);
    }
}
