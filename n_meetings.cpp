#include<bits/stdc++.h>
using namespace std;

void maxMeetings(int n, int start[], int end[])
{
    if(start[0]<end[0])
    {
        cout<<"("<<start[0]<<","<<end[0]<<") ";
    }
    for(int i=0; i<n; i++)
    {
        if(start[i+1]==end[i]+1)
        {
            cout<<"("<<start[i+1]<<","<<end[i+1]<<") ";
        }
        else if(start[i+2]==end[i]+1)
        {
            cout<<"("<<start[i+2]<<","<<end[i+2]<<") ";
        }
    }
    cout<<endl;
}

int main()
{
    int n=6;
    int start[n]={1,3,0,5,8,5};
    int end[n]={2,4,6,7,9,9};
    maxMeetings(n,start,end);
    return 0;
}
