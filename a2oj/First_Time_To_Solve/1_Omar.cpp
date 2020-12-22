// Required headers
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
        // main logic
        sum = x + y;
        cout<<sum<<endl;
    }
    return 0;
}