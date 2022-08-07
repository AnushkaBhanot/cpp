#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
const int MAX= 10000;

int product[MAX+1]; // product[i] is going to store product of primes till i (including i)

// Function to build the prefix product array
void buildProduct()
{
    bool prime[MAX+1];
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p<=MAX; p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*2; i<=MAX; i+=p)
             prime[i]=false;
        }
    }

    product[0]=product[1]=1;
    for(int p=2; p<=MAX; p++)
    {
        product[p]=product[p-1];
        if(prime[p])
         product[p]=(product[p]*p)%mod;
    }
}

// Iterative Function to calculate (x^y)%p in O(log y)
long long int power(long long int x, long long int y, int p)
{
    long long int res=1;
    x=x%p;
    while(y>0)
    {
        if(y&1)
         res= (res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}

// Returns modular inverse
long long int inverse(long long int n)
{
    return power(n, mod-2, mod);
}

// Function to return product of prime in range
long long int productPrimeRange(int L, int R)
{
    return (product[R] * inverse(product[L-1])) % mod;
}

int main()
{
    buildProduct();
    int L=10;
    int R=20;
    cout<<productPrimeRange(L,R)<<endl;
    return 0;
}
