#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char buff[100];
    cin >> buff;
    int len = strlen(buff);
    for (int i = 0; i < len / 2; i++) {
        swap(buff[i], buff[len-1-i]);
    }
    for (int i = 0; i < len; i++)
        cout << buff[i];
    cout << endl;
}
