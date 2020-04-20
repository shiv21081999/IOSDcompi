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
    int n, k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10 > 0)
        {
            n--;
        }
        else
        {
            n/=10;
        }
    }
    cout<<n;
    return 0;
}