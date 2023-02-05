//Even Odd Program:
#include<iostream>
using namespace std;

// 1 -> Even
// 0 -> Odd
bool isEven( int num )
{
    if(num&1)
     //Odd
     return 0;
    else
     //Even
     return 1;
}
int main()
{
    int n;
    cin>>n;
    
    if(isEven(n))
    {
        cout <<"Number is Even "<<endl;
    }
    else
    {
        cout <<"Number is Odd "<<endl;
    }
}