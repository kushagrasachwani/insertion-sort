#include<stdio.h>
void insertionsort(int [],int);
int main()
{
int ele;
int arr[5]={2,5,4,3,1};
insertionsort(arr,5);
}
void insertionsort(int arr[],int size)
{
    int i,j,small;
    for(i=1;i<size;i++)
    {
        small=arr[i];
        for(j=i-1;j>=0 && small<arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=small;
    }
    printf("\n Array sorted by Insertion sort: \n");
    for(i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}
