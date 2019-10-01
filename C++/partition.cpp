#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int sum = 0;
	    for(int i = 0; i < n; i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	   
	    if(sum%2==0)
	    {
	        bool dp[n+1][(sum/2)+1];
	        int m = sum/2;
	        for(int i = 1; i <=m; i++)
	        {
	           dp[0][i]=false;
	        }
	        
            for(int i = 0; i <=n; i++)
	        {
	           dp[i][0]=true;
	        }
	        
	        for(int i = 1; i <=n; i++)
	        {
	            for(int j = 0; j <=m; j++)
	            {
	                if(a[i-1] > j)
	                {
	                   dp[i][j]=dp[i-1][j]; 
	                } else {
	                    dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
	                }
	            }
	        }
	        if(dp[n][sum/2])
	        {
	            cout<<"YES"<<endl;
	        } else {
	            cout<<"NO"<<endl;
	        }
	        
	    } else {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
