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
    vector<int> a;
    for(int i = 0; i < n; i ++) {int x; scanf("%d", &x);a.push_back(x);}

    vector<int> b;
    for (int i = 0; i < k; i ++) b.push_back(count(a.begin(), a.end(), i+1));

    int c = 0;

    if (any_of(b.begin(), b.end(), [](int k) {return k>1;})){
        auto i = find_if(b.begin(), b.end(), [](int val) {return val>1;});
        do {
            // for (auto x: b) cout << x << " ";
            // cout << endl;
            // DBG(*i);
            c += *i/2;
            if (*i % 2 == 0) b.erase(i);
            else *i = 1;
            i = find_if(i, b.end(), [](int val) {return val>1;});
        } while (i != b.end());
    }
    if (n > 24) {

    cout << "c: " << c << endl;
    cout << "b size: " << b.size() << endl;
    }
    if (!b.empty()) cout << 2*c + (b.size()+1)/2<<endl;
    else cout << n << endl;


}
