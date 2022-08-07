#include<bits/stdc++.h>
using namespace std;

struct item
{
    int value, weight;
    item(int value, int weight)
    {
        this->value= value;
        this->weight= weight;
    }
};

bool compare(struct item a, struct item b)
{
    double r1= (double)a.value/(double)a.weight;
    double r2= (double)b.value/(double)b.weight;
    return r1>r2;
}

double fractional_knapsack(int w, struct item arr[], int n)
{
    sort(arr, arr+n, compare);
    for(int i=0; i<n; i++)
     cout<<arr[i].value<<" "<<arr[i].weight<<" "<<((double)arr[i].value/(double)arr[i].weight)<<endl;

    double final_value=0.0;
    for(int i=0; i<n; i++)
    {
        if(arr[i].weight<w)
        {
            w-=arr[i].weight;
            final_value+= arr[i].value;
        }
        else
        {
            final_value+= arr[i].value*((double)w/ (double)arr[i].weight);
            break;
        }
    }
    return final_value;
}

int main()
{
    int w=50; //weight of knapsack
    item arr[]={{60,10},{100,20},{120,30}};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Max value we can obtain= "<<fractional_knapsack(w,arr,n);
    return 0;
}
