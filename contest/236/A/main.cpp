#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif

int main() {
    string s;
    cin >> s;
    int res=0;
    auto i = s.begin();
    while (i!=s.end()) {
        if (all_of(i+1, s.end(), [i](char c){return c!=*i;})) res++;
        i++;
    }
    cout << (res % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
}
