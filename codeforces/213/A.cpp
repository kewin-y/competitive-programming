#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/* clang-format on */

/* Main()  function */
int main()
{
        // TODO: How do you do this greedy?
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        int res = 0;
        cin >> n;

        for (int i = 0; i < n; ++i) {
                int c = 0;

                for (int j = 0; j < 3; ++j) {
                        int k;
                        cin >> k;
                        c +=k;
                }

                if (c >= 2) res++;

        }

        cout << res;

        return 0;
}
/* Main() Ends Here */
