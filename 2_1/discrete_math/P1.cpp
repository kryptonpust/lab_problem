#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "0110110110", s2 = "1100011101", result;

    cout << "Given Strings are: " << s1 << " " << s2 << endl;

    cout << "Bitwise OR:";
    for (int i = s1.length() - 1; i >= 0; i--) {
        //taking chars from s1 and s2 using [] and converting them int, after performing bitwise operation, converting again char type
        //and inserting output beginning of the result string.
        result.insert(result.begin(), ((s1[i] - '0') | (s2[i] - '0')) + '0');
    }
    cout << result << endl;
    //resetting result string
    result = "";

    cout << "Bitwise AND:";
    for (int i = s1.length() - 1; i >= 0; i--) {
        result.insert(result.begin(), ((s1[i] - '0') & (s2[i] - '0')) + '0');
    }
    cout << result << endl;
    result = "";

    cout << "Bitwise XOR:";
    for (int i = s1.length() - 1; i >= 0; i--) {
        result.insert(result.begin(), ((s1[i] - '0') ^ (s2[i] - '0')) + '0');
    }
    cout << result << endl;
    result = "";

    return 0;
}