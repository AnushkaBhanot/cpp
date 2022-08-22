#include<bits/stdc++.h>
using namespace std;

int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

int mergeSort(int arr[], int size)
{
    int temp[size];
    return _mergeSort(arr,temp,0,size-1);
}//sorts input array and returns number of inversions in array

int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count=0;
    if(right>left)
    {
        mid= (right+left)/2;

        //Inversion count will be sum of inversions in left-part, right-part and number of inversions in merging
        inv_count+= _mergeSort(arr,temp,left,mid);
        inv_count+= _mergeSort(arr,temp,mid+1,right);

        //merge 2 parts
        inv_count+= merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}//auxiliary recursive function

int merge(int arr[], int temp[], int left, int mid, int right)
{
    int inv_count=0;
    int i=left, //i is index of left subarray
        j=mid, //j is index of right subarray
        k=left; //k is index of resultant merged subarray
    while((i<=mid-1) && (j<=right))
    {
        if(arr[i]<=arr[j])
         temp[k++]=arr[i++];
        else
        {
         temp[k++]=arr[j++];
         inv_count= inv_count+(mid-i);
        }
    }
    while(i<=mid-1)
     temp[k++]=arr[i++];
    while(j<=right)
     temp[k++]=arr[j++];

    for(i=left; i<=right; i++)
     arr[i]=temp[i];

    return inv_count;
}

int main()
{
    int arr[]={1,20,6,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ans= mergeSort(arr,n);
    cout<<"Number of inversions are "<<ans;
    return 0;
}

