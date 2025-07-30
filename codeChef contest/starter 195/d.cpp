#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Sort in descending order
        sort(A.rbegin(), A.rend());

        // Prefix sum array
        vector<long long> S(N + 1, 0);
        for (int i = 0; i < N; ++i) {
            S[i + 1] = S[i] + A[i];
        }
     

        int Kmax = 2 * N;
        vector<long long> ans(Kmax + 1, 0);

        for (int K = 1; K <= Kmax; ++K) {
            long long best = 0;
            int limit = min(N, K);

            for (int j = 1; j <= limit; ++j) {
                int t = min(j, K - j);
                long long x_add = 1LL * t * ((2 * j - t - 1) / 2);
                long long val = S[j] + x_add;

                if (val > best) {
                    best = val;
                }
            }

            ans[K] = best;
        }

        for (int i = 1; i <= Kmax; ++i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
