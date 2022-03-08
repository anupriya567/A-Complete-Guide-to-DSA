#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define pll pair<long long int,long long int>
#define pii pair<int,int>
#define endl "\n"
#define mod 1000000007
#define fastip ios_base::sync_with_stdio(false); cin.tie(NULL);
#define N 100000
using namespace std;
 int greatest_prime_factor[100001];
class Solution
{
   
public:

 void cal_sieve()
 {
    int i,j;
   for(i=0;i<=N;i++)
   {
   greatest_prime_factor[i] = i;
   }

 greatest_prime_factor[0] = greatest_prime_factor[1] = -1; 
 for(i=2;i<=N;i++)
 {
    if(greatest_prime_factor[i] == i)
    {
       for(j=2*i; j<=N;j+=i)
       {
         greatest_prime_factor[j] = i;
       }
    }
 }

 }

};
void solve()
{
 Solution s;
 s.cal_sieve();
 int n;
 cin>>n;

 map<int,int>mp;

 while(n>1)
 {
   mp[greatest_prime_factor[n]]++;
   n = n/greatest_prime_factor[n];
 }

// for(i=0;i<=n;i++)
// {
//  cout<<greatest_prime_factor[i]<<" ";
// }

for(auto x:mp)
{
   cout<<x.first<<" "<<x.second<<endl;

}


cout<<endl;
}
int main() 
{
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }
   return 0;    
}

