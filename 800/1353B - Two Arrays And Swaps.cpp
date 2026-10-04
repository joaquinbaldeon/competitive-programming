#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, k, n;
    cin >> t;

    while (t--) {
        int sum = 0;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        for (int i = 0; i < k; i++) {
            if (b[i] > a[i])
                swap(a[i], b[i]);
            else
                break;
        }

        for (int x : a)
            sum += x;

        cout << sum << '\n';
    }

}


