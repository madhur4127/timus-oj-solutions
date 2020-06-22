// O(N log N)
#include "bits/stdc++.h"
using namespace std;
using i64 = int64_t;
using i32 = int32_t;
#define all(x) x.begin(), x.end()
#define int i64
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

    int n;
    cin >> n;
    using pii = pair<int, int>;
    vector<pii> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].first >> v[i].second;
    sort(all(v), [](const auto &a, const auto &b) { return a.second == b.second ? a.first < b.first : a.second < b.second; });
    int end = v[0].second, ans = 1;
    for (const auto &[l, r] : v) {
        if (end < l) end = r, ans++;
        dbg(l, r, ans);
    }
    cout << ans << el;

    return 0;
}
