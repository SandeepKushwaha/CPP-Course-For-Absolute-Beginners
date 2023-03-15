#include<iostream>
using namespace std;

int power(int base, int power) {
    int result = 1;
    for (int i = 1; i <= power; i++) {
        result *= base;
    }

    return result;
}

int main() {

    int a, b;
    cin >> a >> b; // let a = 2, b = 3;
    int ans = power(a, b); 
    cout << ans << endl; // ans = 8

    cin >> a >> b; // let a = 3, b = 3;
    ans = power(a, b); 
    cout << ans << endl; // ans = 27;

    cin >> a >> b; // let a = 2, b = 5;
    ans = power(a, b);
    cout << ans << endl; // ans = 32;

    return 0;
}
