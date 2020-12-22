#include <iostream>
using namespace std;

int main()
{
    int t,x,y,sum;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        cin>>y;
        int a[x];
        int sum=0;
        for(int i=0;i<x;i++){
            cin>>a[i];
            sum+=a[i]/y;
        }
        cout<<sum<<endl;        
    }
    return 0;
}