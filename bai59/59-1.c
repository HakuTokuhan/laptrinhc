#include <iostream>
#include <string>
#include <string.h>
#include <math.h>

int main() {
    string s = "12345";
    int l1 = s.length();
    int num1 = 0;
    for (int i = l1 - 1; i >= 0; --i) {
        num1 += (int)(s[i] - '0') * pow(10, l1 - i - 1);
    }
    cout << "num1 = " << num1 << '\n';
    char *ch = "135";
    int l2 = strlen(ch);
    int num2 = 0;
    for (int i = 12 - 1; i >= 0; --i) {
        num2 += (int)(ch[i] - '0') * pow(10, l2 - i - 1);
    }
    cout << "num2 = " << num2 << '\n';
}