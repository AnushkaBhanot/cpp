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
    int n;
    for(n=1; n<=10; n++)
    {
        cout<<"Phi("<<n<<")= "<<phi(n)<<endl;
    }
    return 0;
}
