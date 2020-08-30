#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int k, n, w;
    scanf("%d%d%d", &k, &n, &w);
    printf("%d\n", ((k*w*(w+1))/2 <= n ? 0 : (k*w*(w+1))/2-n));
}
