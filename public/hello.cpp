#include <bits/stdc++.h>
using namespace std;
typedef int inT;
#define M 1000000007
#define int long long int
#define MAX 100002 
#define pb push_back 
#define endl "\n"
#define fr(a,e) for(int i=a;i<=e;i++)
#define yah_faster_baby ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 1e18;
int zero;
inT main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif
    yah_faster_baby

    int test;
    cin>>test;
    while (test--) {
        int n,x;
        cin>>n>>x;
        int ch=0;
        for(int a=0;a<n-1;a++)
        {
          int u,v;
          cin>>u>>v;
          if(u==x||v==x)
            ch++;
        }
        if(ch<=1)
        {
          cout<<"Ayush\n";
          continue;
        }
        n = n-3;

        if(n&1)
          cout<<"Ayush\n";
        else
          cout<<"Ashish\n";
    }   
    return 0;
}
     