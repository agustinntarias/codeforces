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
    int min_cap = 0, cap = 0;
    while(n--){
        int a, b;
        scanf("%d%d", &a, &b);
        cap +=(b-a);
        if (cap > min_cap) min_cap = cap;
    }
    printf("%d\n", min_cap);
}
