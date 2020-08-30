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
    while(n--){
        int x;
        scanf("%d", &x);
        if (x/3-(2*x+6)/7<0) cout << "NO\n";
        else cout << "YES\n";
    }
}
