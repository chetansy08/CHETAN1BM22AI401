//cpp for factorial using recursion @ 20/06/2023

#include<iostream>
using namespace std;
class number
{
    public :
    int n;
    int fact(int n);
    
};

int number::fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        
        return n*fact(n-1);
    }
    
}

int main()
{
    number factorial;
    cout<<"Enter number :";
    cin>>factorial.n;
    
    int res=factorial.fact(factorial.n);
    cout<<"Factorial of given number is "<<res;
    
}
