#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,bit=0,nib=0,byt=0,a,num;
        cin>>n;
        if(n%16 ==0)
        {
            a = n/16;
            cout<<0<<" "<<0<<" "<<" "<<pow(2,a-1)<<endl;
        }
        else {
            a = n/16;
            int num = n-a*16;
            if(num<=2)
            {
                cout<<pow(2,a)<<" "<<0<<" "<<" "<<0<<endl;
            }
            else if(num > 2 && num <=8)
                {
                cout<<0<<" "<<pow(2,a-1)<<" "<<" "<<0<<endl;
                }
                else if(num >8 && num <=15)
                {
                    cout<<0<<" "<<0<<" "<<pow(2,a-1)<<endl;
                }


        }
    }
    return 0;
}
