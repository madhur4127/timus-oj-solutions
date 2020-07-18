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
void dbg_out(Args... args) { ((std::cerr << "\033[32m" << args << "\033[37m, "), ...); }
#define dbg(...) cerr << "\033[1;31m" << __LINE__ << ": [" << #__VA_ARGS__ << "]\033[37m  = ", dbg_out(__VA_ARGS__), cerr << "\033[0m" << endl;
#else
#define dbg(...) ;
#endif
////////////////////////////////// TEMPLATE ENDS /////////////////////////////////
vector<vector<i32>> adj;
vector<i32> vis, color;

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cout << fixed << setprecision(13), cerr << fixed << setprecision(3);

    int arr[38 + 1] = {-1, 2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107, 127, 521, 607, 1279, 2203, 2281, 3217, 4253, 4423, 9689, 9941, 11213, 19937, 21701, 23209, 44497, 86243, 110503, 132049, 216091, 756839, 859433, 1257787, 1398269, 2976221, 3021377, 6972593};
    int NT = 1;
    cin >> NT;
    for (int cur_tc = 1; cur_tc <= NT; ++cur_tc) {
        int t;
        cin >> t;
        cout << arr[t] << el;
    }

    return 0;
}