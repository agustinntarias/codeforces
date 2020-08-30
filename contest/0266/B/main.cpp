#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n, t;
    scanf("%d%d", &n, &t);
    string s = "BGGBG";
    cin >> s;
    while (t--) {
        size_t i = s.find("BG");
        while (i!=string::npos) {
            swap(s[i], s[i+1]);
            i = s.find("BG", i+2);
        }
    }
    cout << s << "\n";
}
