// O(max(a,b) * N)
#include "bits/stdc++.h"
using namespace std;
using i64 = int64_t;
using i32 = int32_t;
#define all(x) x.begin(), x.end()
template <class T, typename U>
constexpr inline bool exist(const T &s, const U &e) { return s.find(e) != s.end(); }
template <class T>
constexpr inline i32 SZ(const T &x) { return x.size(); }
template <class T>
constexpr inline bool rmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template <class T>
constexpr inline bool rmx(T &a, T b) { return a < b ? (a = b, true) : false; }
const char el = '\n';
const i32 MOD = 1e9 + 7, INF = 0x3f3f3f3f;
const i64 INFLL = ((i64)INF << 32) | INF;

#ifdef LOCAL // debugging swiss knife
template <typename Ostream, typename Cont>
typename enable_if<is_same<Ostream, ostream>::value, Ostream &>::type operator<<(Ostream &os, const Cont &v) {
    os << "{";
    for (const auto &x : v)
        os << x << ", ";
    return os << "}";
}
template <typename Ostream, typename... Ts>
Ostream &operator<<(Ostream &os, const pair<Ts...> &p) { return os << "(" << p.first << ", " << p.second << ")"; }
template <class... Args>
void dbg_out(Args... args) { ((std::cerr << "\e[32m" << args << "\e[37m, "), ...); }
#define dbg(...) cerr << "\e[1;31m" << __LINE__ << ": [" << #__VA_ARGS__ << "]\e[37m  = ", dbg_out(__VA_ARGS__), cerr << "\e[0m" << endl;
#else
#define dbg(...) ;
#endif

////////////////////////////////// TEMPLATE ENDS /////////////////////////////////
vector<vector<i32>> adj;
vector<i32> vis, color;

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cout << fixed << setprecision(13), cerr << fixed << setprecision(3);

    int n, ct[2];
    cin >> n >> ct[0] >> ct[1];
    int dp[n + 1][2];
    dp[0][0] = dp[0][1] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int cur : {0, 1}) {
            i64 temp = 0;
            for (int j = max(0, i - ct[cur]); j < i; ++j)
                temp += dp[j][cur ^ 1];
            dp[i][cur] = temp % MOD;
        }
        dbg(dp[i][0], dp[i][1]);
    }
    cout << (dp[n][0] + dp[n][1]) % MOD << el;

    return 0;
}
