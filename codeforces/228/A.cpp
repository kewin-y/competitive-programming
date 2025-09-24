#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        unordered_set<int> s;

        for (int i = 0; i < 4; i++) {
                int n;
                cin >> n;
                s.insert(n);
        }

        cout << 4 - s.size();
        return 0;
}
