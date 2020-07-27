#include <bits/stdc++.h>
#define forn(x, n) for(int x = 0; x < n; ++x)
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    forn(x, n) {
        string s;
        scanf("%s", &s)
        if (s.size() > 10) cout << s[0] << s.size()-2 << s[s.size()-1];
        else cout << s;
        cout << "\n";
    }
}
