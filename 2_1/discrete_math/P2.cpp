#include <iostream>
#include <vector>

using namespace std;

//input.txt
//4
//1 2 3 4

int main() {
    //freopen("input.txt", "r", stdin);
    unsigned int n;
    cout << "Enter the size of set A: ";
    cin >> n;
    //array can be used but vector make this program more efficient and less complex
    vector<int> v(n);
    //making pair to store result relations
    vector<pair<int, int>> result1, result2;
    //taking input
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            //making 1st relation
            if (v[i] % v[j] == 0) {
                //pushing pair into result1 vector
                result1.emplace_back(v[i], v[j]);

            }
            //making 2nd relation
            if (v[i] > v[j]) {
                result2.emplace_back(v[i], v[j]);
            }

        }
    }

    //printing
    cout << "R1={";
    for (int k = 0; k < result1.size(); ++k) {
        cout << "(" << result1[k].first << "," << result1[k].second << ")";

        if (k < result1.size() - 1)
            cout << ",";
    }
    cout << "}" << endl;

    cout << "R2={";
    for (int k = 0; k < result2.size(); ++k) {
        cout << "(" << result2[k].first << "," << result2[k].second << ")";

        if (k < result2.size() - 1)
            cout << ",";
    }
    cout << "}" << endl;

    return 0;
}

