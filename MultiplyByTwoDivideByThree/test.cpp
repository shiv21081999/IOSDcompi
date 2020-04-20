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

struct node{
    int num;
    int diff;
};

int32_t main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    node *predictor = new node[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int power_of_two = 0;
        int power_of_three = 0;
        while(x%2==0)
        {
            power_of_two++;
            x/=2;
        }
        while (x%3==0)
        {
            power_of_three++;
            x/=3;
        }
        predictor[i].num = arr[i];
        predictor[i].diff = power_of_two - power_of_three;
    }
    sort(predictor, predictor + n, [&](node a , node b){
        return a.diff<b.diff;
    });
    for (int i = 0; i < n; i++)
    {
        cout<<predictor[i].num<<" ";
    }
    cout<<endl;
    delete [] arr;
    delete [] predictor;
    return 0;
}