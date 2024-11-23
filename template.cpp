#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) + (m) - 1) / (m))
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y <<"\n" 
#define fi first
#define se second
#define ll long long
#define ld long double
#define ull unsigned long long
#define EPS 1e-9
#define EACH(x, a) for (auto& x: a)
#define PI acos(-1)
#define vt vector
#define pb push_back
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define FORREV(i, n) for (int i = (n) - 1; i >= 0; --i)
#define present(c,x) ((c).find(x) != (c).end())
typedef priority_queue<int, vector<int>, greater<int>> minpq;
constexpr int INF = 1 << 30, Mod = 1e9 + 7;
constexpr ll LINF = 1LL << 62;
int gcd(int a, int b){if(b == 0) {return a;}else {return gcd(b, a % b);}}
int lcm(int a,int b){return (a*b)/gcd(a,b);}



void Solve(){
    
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    // cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        // cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}
