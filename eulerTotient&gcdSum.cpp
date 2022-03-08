#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pll pair<long long int, long long int>
#define pii pair<int, int>
#define endl "\n"
#define mod 1000000007
#define fastip ios_base::sync_with_stdio(false); cin.tie(NULL);
#define N 1000000 + 1
using namespace std;
ll int greatest_prime_factor[1000001];
/*

Ques- Euler Totient and gcd sum

naive approach:-
(given = n)

int res = 0;
for(i=0; i<= n; i++)
{
  res+=gcd(i,n);
}

TC => O(N*log(N))

*/
void cal_sieve()
{

    int i, j;
    for (i = 0; i <= N; i++)
    {
        greatest_prime_factor[i] = i;
    }

    greatest_prime_factor[0] = greatest_prime_factor[1] = -1;
    for (i = 2; i <= N; i++)
    {
        if (greatest_prime_factor[i] == i)
        {
            for (j = 2 * i; j <= N; j += i)
            {
                greatest_prime_factor[j] = i;
            }
        }
      
    }

    //   for (i = 2; i <= 10; i++)
    //   {
    //     cout << greatest_prime_factor[i] << " ";
    //   }
}
 int get_count(int p, int n)
    {
            
      int num = n/p;
      int nnum = num;

      if (greatest_prime_factor[num] == num)
        {
            return num-1;
        }
        unordered_map<int, int> mp;

        while (nnum > 1)
        {
            mp[greatest_prime_factor[nnum]]++;
            nnum = nnum / greatest_prime_factor[nnum];
        }

        ll int res = num;
        for (auto x : mp)
        {
            int pr = x.first;
            res/=pr;
            res*=(pr - 1);
        }

        return res;
    }
    void solve()
    {
        int num;
        cin >> num;
        int sz = pow(2,num);
       vector<int>arr(sz);

       for(int i =0;i<sz;i++)
       {
           cin>>arr[i];
       }
                 
          
    
        
      
    }
   
    int main()
    {
        cal_sieve();
        int t;
        cin >> t;
        while (t--)
        {
         solve();
        }
        return 0;
    }