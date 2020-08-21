#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n, b;
    scanf("%d%d", &n, &b);
    int a[n];
    for(int i = 0; i < n; i++){
        int x; scanf("%d", &x);
        a[i] = x;
    }
    int max_dif = 0, buy = -1, sell;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[j]-a[i] > max_dif) {
                buy = a[i]; sell = a[j];
                max_dif = a[j] - a[i];
            }
        }
    }
    if (buy == -1) printf("%d\n", b);
    else printf("%d\n", (b/buy)*sell + b%buy);
}
