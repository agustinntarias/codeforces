#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, counter = 0;
    scanf("%d", &n);
    while(n--){
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (x+y+z >= 2) counter++;
    }
    printf("%d\n", counter);
}
