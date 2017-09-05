#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

/// g is a function  pointer.
int fun(int a, int b, int (*g) (int, int)) {
    /// original syntax reqiured to derefernce g. Call would be like (*g)(a, b).
    /// But now this is not required.
    cout << g(a, b) << endl;
}

int main() {
    int a, b;
    a = 6;
    b = 3;
    /// originally address of the function was required. like fun(a, b, &add). Now
    /// this is also not required.
    fun(a, b, add);
    fun(a, b, sub);
}
