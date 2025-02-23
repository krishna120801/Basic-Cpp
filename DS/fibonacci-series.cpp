//-------------------------------------------------- Program for Fibonacci numbers //--------------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int fib (int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) 
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b ;
        a = b ;
        b = c ;
    }
    return b ;
}

int main() {
    int n = 9 ;
    cout << fib(n) ;
    return 0 ;
}

// T.C : O(n)            S.C : O(1)