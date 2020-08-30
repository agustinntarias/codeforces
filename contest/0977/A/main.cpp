#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    while(k--) {
        if (n%10 == 0) n/=10;
        else n--;
    }
    printf("%d\n", n);
}
