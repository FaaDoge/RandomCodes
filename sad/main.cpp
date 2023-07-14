#include <iostream>
using namespace std;
int main()
{
    long a,b,c,r=0;
    cin>>a>>b>>c;
    for(int i=0;i<b;i++)
    {
        for(int j=i;j<b;j++)
    {
        r*=j;
    }
    }
    cout <<r;
    return 0;
}
