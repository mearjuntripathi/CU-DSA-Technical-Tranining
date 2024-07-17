#include<bits/stdc++.h>
using namespace std;

bool isSubstring(const char* str1, const char* str2) {
    return strstr(str1, str2) != nullptr;
}

bool isRotation(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return false;
    }

    char* s1s1 = new char[len1 * 2 + 1]; // +1 for the null terminator
    strcpy(s1s1, s1);
    strcat(s1s1, s1);

    bool result = isSubstring(s1s1, s2);

    delete[] s1s1;

    return result;
}

int main() {
    // Test cases
    const char* s1 = "waterbottle";
    const char* s2 = "erbottlewat";

    cout << (isRotation(s1, s2) ? "True" : "False") << endl;

    s1 = "hello";
    s2 = "llohe";
    cout << (isRotation(s1, s2) ? "True" : "False") << endl;

    s1 = "hello";
    s2 = "lleho";
    cout << (isRotation(s1, s2) ? "True" : "False") << endl;

    return 0;
}
