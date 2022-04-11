#include <iostream>
using namespace std;
int main()
{
    long a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    long s = 2*(a*b + b*c + c*a);
    long v = a*b*c;
    cout<<s<<" "<<v;
}