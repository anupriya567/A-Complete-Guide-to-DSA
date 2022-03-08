#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define pll pair<long long int,long long int>
#define pii pair<int,int>
#define endl "\n"
#define mod 1000000007
#define fastip ios_base::sync_with_stdio(false); cin.tie(NULL);
#define N 1000000
using namespace std;

// sieve of count of no. of primes factors of a no. 
vector<int>sieve(N,0);
vector<int>prime3;

void calculate_sieve()
{
  int i,j;
  for(i=2; i*i<=N; i++)
  {
     if(sieve[i] == 0)
     {
       sieve[i]++;
        for(j=2*i; j<=N; j+=i)
        {
          sieve[j]++;
        }
     }
    
  }

  for(i=0;i<N;i++)
  {
    if(sieve[i] >= 3)
      prime3.push_back(i);
  }
}
void solve()
{
   int n;
   cin>>n;

   cout<<prime3[n-1]<<endl;
}
    int main() 
{
  calculate_sieve();
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }
   return 0;    
}


