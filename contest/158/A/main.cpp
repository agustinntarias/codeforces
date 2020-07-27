#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, q;
    scanf("%d%d", &n, &k);
    q = k;
    int x = 2, y, c=0;
    while(k-- && x > 0) scanf("%d", &x);
    if (x <= 0) printf("%d\n", q-k-2);
    else {
        y = x;
        while(y == x) {
            scanf("%d", &y);
            c++;
        }
        printf("%d\n", c+q-1);
    }
}
