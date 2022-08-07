#include<bits/stdc++.h>
using namespace std;

#define M 32

int main()
{
    bitset<M> bset1; //default constructor initializes with all bits 0
    bitset<M> bset2(20); //bset2 with 20 bits
    bitset<M> bset3(string("1100")); //bset3 with bits of specified binary strings
    cout<<bset1<<endl; //00000000000000000000000000000000
    cout<<bset2<<endl; //00000000000000000000000000010100
    cout<<bset3<<endl; //00000000000000000000000000001100
    cout<<endl;
    
    bitset<8> set8; //00000000 (Set 8 with 8 bits)
    set8[1]= 1; //00000010 (set 1st bit i.e. 6th index)
    set8[4]= set8[1]; //00010010
    cout<<set8<<endl;
    
    int a= set8.count(); //returns number of set bits in bitset
    int b= set8.size(); //returns total number of bits in bitset
    int c= b-a; // DIffernce of size and count gives number of unset(0) bits in bitset
    cout<<set8<<" has "<<a<<" ones and "<<c<<" zeros"<<endl;
    
    cout<<"Bool representation of "<<set8<<" : ";
    for(int i=0; i<set8.size(); i++)
     cout<<set8.test(i)<<" "<<endl;
    //test function return 1 if bit is set else return 0
    
    if(!set8.any())
     cout<<"set8 has no bit set"<<endl;
    if(!bset1.any())
     cout<<"bset1 has no bit set"<<endl;
    //"any" function returns true if atleast 1 bit is set
    
    if(!bset1.none())
     cout<<"bset1 has some bit set"<<endl;
    //"none" function returns true if none of the bit is set
    
    cout<<set8.set()<<endl; //bset.set() sets all bits
    cout<<set8.set(4,0)<<endl; //bset.set(pos,b) makes bset[pos]=b
    cout<<set8.set(4)<<endl; //bset.set(pos) sets bset[pos]=1
    cout<<set8.reset(2)<<endl;
    cout<<set8.reset()<<endl; //reset makes all bits 0
    cout<<set8.flip(2)<<endl;
    cout<<set8.flip()<<endl; //"flip" flips all bits i.e. 1<->0 and 0<->1
    
    //To convert decimal number to binary
    int num=100;
    cout<<"Decimal Number: "<<num<<endl<<"Binary Number: "<<bitset<8>(num);
    return 0;
}
