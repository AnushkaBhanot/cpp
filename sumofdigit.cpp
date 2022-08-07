#include<bits/stdc++.h>
using namespace std;

void sum(int n)
{
    int sum=0;
    while(n>0)
    {
    int a=n%10;
    int b=n/10;
    sum+=a;
    n=b;
    }

    cout<<"Sum of each digit= "<<sum<<endl;
}
int main()
{
    int n=687;
    sum(n);
}
