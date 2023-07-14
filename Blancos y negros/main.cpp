#include <iostream>
#include<set>
using namespace std;
int main()
{
    set <int> a;
    int n;
    (n%2==0)?n/=2:(n*=3)+1;
    a.insert(1);
    for(int i=n;i<n;i++){
           a.insert(i);
           cout<<'sale';
    }
    for (auto& str : a) {
        cout <<str<< ' ';

    }
    return 0;
}
