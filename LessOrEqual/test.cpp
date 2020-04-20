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
    int n,k;
    cin>>n>>k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    int i = 0;
    int j = 0;
    int ans = 0;
    if(k-1 <0)
    {
        ans = arr[0]-1;
    }
    else
    {
        ans = arr[k-1];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<=ans)
            flag++;
    }
    if(flag > k)
        cout<<-1;
    else if(ans < 1)
        cout<<-1;
    else
        cout<<ans;
    delete [] arr;
    return 0;
}