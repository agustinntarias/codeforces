#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode

#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << std::endl;} while (0)
#else
#define DBG(x)
#endif


int combinatoric_2(int m) {
    if (m < 2) return 0;
    return (m*(m-1))/2;
}


int main(){
    int n;
    map<char,int> m;
    scanf("%d", &n);
    while(n--){
        char s[20];
        scanf("%20s", s);
        m[s[0]]++;

    }
    int x = 0;
    for (auto c: m) {
        if(c.second >= 2)
            x+=(combinatoric_2(c.second/2) + combinatoric_2(c.second - c.second/2));
    }
    cout << x << endl;
}
