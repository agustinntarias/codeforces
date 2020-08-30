#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;
    int res = 0;
    for(int i=1; i < s.size(); i++) {
        if (s[i-1] == s[i]) {
            while (s[i-1] == s[i]) {
                i++;res++;
            }
        }
    }
    printf("%d\n", res);
}
