#include<bits/stdc++.h>
using namespace std;

void simpleSieve(int limit, vector<int> &prime)
{
    vector<bool> mark(limit+1,true); // a boolean array "mark[0..n-1]" and initialize all entries of it as true
    
    for(int p=2; p*p<limit; p++)
    {
        if(mark[p]== true) // if p is not changed, then it is a prime
        {
            for(int i=p*p; i<limit; i++)
            {
                mark[i]=false;
            }
        }
    }
    for(int p=2; p<limit; p++)
    {
        if(mark[p]==true)
        {
            prime.push_back(p);
            cout<<p<<" ";
        }
    }
}

void segmentedSieve(int n)
{
    int limit= floor(sqrt(n))+1;
    vector<int> prime;
    prime.reserve(limit);
    simpleSieve(limit,prime);
    
    // Divide the range [0..n-1] in different segments
    // We have chosen segment size as sqrt(n)
    int low= limit;
    int high= 2*limit;
    
    // Process one segment at a time
    while(low<n)
    {
        if(high>=n)
         high=n;
        
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));
        
        for(int i=0; i<prime.size(); i++)
        {
            // For example, if low is 31 and prime[i] is 3,
            // we start with 33.
            int loLim= floor(low/prime[i])*prime[i];
            if(loLim<low)
             loLim+=prime[i];
            
            for(int j=loLim; j<high; j+=prime[i])
             mark[j-low]= false;
        }
        
        // Numbers which are not marked as false are prime
        for(int i=low; i<high; i++)
         if(mark[i-low]==true)
          cout<<i<<" ";
        
        low= low+limit;
        high= high+limit;
    }
}

int main()
{
    int n=100000;
    cout<<"Primes smaller than "<<n<<" :n";
    segmentedSieve(n);
    return 0;
}
