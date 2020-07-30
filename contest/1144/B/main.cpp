#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define find(a, x) find_if(a.begin(), a.end(), [x](int val) {return (val-x) % 2 == 0;});


int main() {
    int n; scanf("%d", &n);  // read length
    vector<int> a; while(n--) {int x; scanf("%d", &x); a.push_back(x);}  // read vector
    sort(a.rbegin(), a.rend());  // sort vector
    auto i = a.begin();  // find the largest element
    bool not_initial_parity = (*i+1)%2;  // save its parity
    do {
        int x = (*i+1)%2; a.erase(i);  // save(only its parity) and erase the element with iterator i
        i =  find(a, x); // find the largest element
        // with changed parity from i
    } while (i != a.end());
    i = find(a, not_initial_parity); if (i != a.end()) a.erase(i);  // find and erase element with opposite parity from the first one
    printf("%d\n", accumulate(a.begin(), a.end(), 0));
}
