#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define pll pair<long long int,long long int>
#define pii pair<int,int>
#define endl "\n"
#define mod 1000000007
#define fastip ios_base::sync_with_stdio(false); cin.tie(NULL);
#define N 10000001
using namespace std;

vector<bool>sieve(N,true);
vector<int>store(N,0);

// sieve of count of primes <= n
void construct_sieve()
{
    int i,j;
    
    for(i = 2; i*i<=N;i++)
    {
        if(sieve[i])
        {
            for(j= 2*i; j<=N; j+=i)
            {
                sieve[j] = false;
            }
        }
    }
    
  for(i=2;i<=N;i++)
  {
      store[i]+=store[i-1];
      if(sieve[i])
       store[i]++;
  }
}
void solve()
{
    int x,y;
    
    cin>>x>>y;
    int count = 0;

    int px = store[x+2];
    int py = store[y];

    if(sieve[x+2])
    px--;

//    cout<<px<<" "<<py<<" ";
    int p = py-px;
    
    int total = y-x;

    count = total - p;
    
    cout<<"px"<<px<<"py"<<py<<"p"<<p<<" ";
    // while(i<y)
    // {
    //     if(sieve[i+2])
    //     {
    //         i = i+2;
           
    //     }
    //     else
    //     {
    //         i++;
    //     }
    //     count++;
    // }
    cout<<count<<endl;
}
int main() 
{
    construct_sieve();
    fastip
    
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }
   return 0;    
}
// 4
// 2 10
// 5 12
// 34 43
// 57 63
