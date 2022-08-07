#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int s1=0, s2=0, sum;
    for(int i=size-1; i>=0; i-=2)
    {
        s1+=(arr[i]*arr[i]);
    }
    for(int i=size-2; i>=0; i-=2)
    {
        s2+=(arr[i]*arr[i]);
    }
    sum=s1-s2;
    cout<<"Sum="<<sum;
}

int main()
{
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    return 0;
}
