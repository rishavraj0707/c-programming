// Binary search

#include<stdio.h>
void insertion_sort(int arr[]);
void binary_search(int arr[],int x,int low,int high);
int main()
{
    int arr[9] = {15,5,24,8,1,3,16,10,20};
    int low = 0;
    int high = 8;
    int x;
    printf("enter the no. to be searched : ");
    scanf("%d",&x);
    insertion_sort(arr);
    binary_search(arr,x,low,high);
    return 0;
}
void insertion_sort(int arr[])
{
    for(int i = 1;i<9;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}
void binary_search(int arr[],int x,int low,int high)
{
    int mid = (low + high) / 2;
 if(low<=high){
        if(x==arr[mid]){
            printf("following no. is found");
        }
        else if(x<arr[mid]){
            binary_search(arr,x,low,(mid-1));
        }
        else{
            binary_search(arr,x,(mid+1),high);
    }
    }
}