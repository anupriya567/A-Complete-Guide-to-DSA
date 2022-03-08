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

    void solve()
    {
        int n;
        cin >> n;
        int num = n;
        // cout << greatest_prime_factor[n] << " ";
        if (greatest_prime_factor[n] == n)
        {
            cout<< n - 1 << endl;
            return;
        }
        unordered_map<int, int> mp;

        while (n > 1)
        {
            mp[greatest_prime_factor[n]]++;
            n = n / greatest_prime_factor[n];
        }

        ll int res = num;
        for (auto x : mp)
        {
            int p = x.first;
            res/=p;
            res*=(p - 1);
        }

        cout << res << endl;
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