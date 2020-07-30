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
    int x = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s[0] != 'X') {
            if (s[0] == '+') x++;
            else x--;
        } else {
            if (s[1] == '+') x++;
            else x--;
        }
    }
    printf("%d\n", x);
}
