#include<bits/stdc++.h>
using namespace std;

int phi(int n)
{
    int result= n;

    for(int p=2; p*p<=n; ++p)
    {
        if(n%p ==0)
        {
            while(n%p == 0)
             n/=p;

            result-= result/p;
        }
    }

    if(n>1)
    {
        result-=result/n;
    }
    return result;
}

int main()
{
    float n;
    int i;
    float arr[20];
    for(n=1, i=0; n<=6, i<6; n++,i++)
    {
            arr[i]= n/phi(n);
            cout<<arr[i]<<" ";
    }
    int max=arr[0];
    for(int j=0; j<6; j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    cout<<endl<<"MAX: "<<max;
    return 0;
}
