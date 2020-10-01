/*

*-----------------------------------------------------------*
|                                                           |
|                                                           |
|               AUTHOR: Pawan Solanki                       |
|              Website: pawansolanki.me                     |
|                                                           |
|                                                           |
*-----------------------------------------------------------*

*/
#define JaiShreeRam _/\_
#include<bits/stdc++.h>
#define moduli 9460700327
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define um unordered_map
#define endl "\n"
#define fo(i,a,b) for (int i = a; i < b; ++i)
typedef long long ll;
typedef  __intptr_t llint;
const long double eps = (long double)1e-9;

using namespace std;

int32_t main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int n,k; cin>>n>>k;
        vi v(n);
       for (size_t i = 0; i < n; i++)
       {
            cin>>v[i];
        }
        int temp = -1;
        int mini = INT_MIN;
         for (size_t i = 0; i < n; i++){
            if(v[i]>0){
            if(k%v[i] == 0) {
                mini = max(mini, v[i]);
                temp = mini;
            }
        }
        }
        cout<<temp<<endl;
    }
}