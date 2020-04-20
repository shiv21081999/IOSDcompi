#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
const int N = 100005, M = 11;
int mod = 1000000007;
int32_t main(){
    int n; 
    char str[101];
    cin>>n>>str;
    char ans[3];
    int max = INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        char a = str[i];
        char b = str[i+1];
        int count = 0;
        for (int j = i; j < n-1; j++)
        {
            if(a == str[j] && b == str[j+1])
                count++;
        }
        if(count> max)
        {
            max = count;
            ans[0] = a;
            ans[1] = b;
            ans[2] = '\0';
        }
        
    }
    cout<<ans<<endl;
    
    return 0;
}