#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char buff[100];
    cin >> buff;
    int len = strlen(buff);
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (buff[i] != buff[len-1-i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "yes\n";
    else
        cout << "no\n";
}
