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
    int r = 0;
    while(n--){
        int p,q;
        scanf("%d%d", &p, &q);
        if (q-p >= 2) r++;
    }
    printf("%d\n", r);
}
