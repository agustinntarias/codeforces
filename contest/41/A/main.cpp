#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    string s, t;
    cin >> s >> t;
    bool yes = s.size() == t.size();
    for(int i = 0; i < s.size() && yes; i++) yes &= (s[i] == t[t.size()-i-1]);
    cout << (yes ? "YES" : "NO") << endl;
}
