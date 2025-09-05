#include<iostream>
using namespace std;
inline int sqaure(int a) {return a*a;}
int main()
{
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    sqaure(a);
    cout<<"squred value is:";
    cout<<sqaure(a);
    return 0;
}

