#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if( a+b+c< x+y)
        {
            cout<<"NO"<<endl;
        }
        else if( (x < a && x <b) || (y  < a || y <b))
        {
            cout<<"NO"<<endl;
        }
        else {
            int p ,q,r,s;
            p = x-a;
            q = y-b;
            r = y-a;
            s = x-b;
            if( p + q  <= c || r+s <=c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO";
            }
        }
    }
    return 0;
}
