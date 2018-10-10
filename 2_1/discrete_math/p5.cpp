//GRAP COLORING (WELCH POWELL)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//    input.txt
//    8
//    32
//    5 2
//    5 4
//    5 7
//    5 8
//    5 6
//    5 3
//    3 1
//    3 2
//    3 5
//    3 6
//    7 1
//    7 4
//    7 5
//    7 8
//    1 2
//    1 4
//    1 7
//    1 3
//    2 1
//    2 3
//    2 4
//    2 5
//    4 1
//    4 2
//    4 5
//    4 7
//    6 3
//    6 5
//    6 8
//    8 5
//    8 6
//    8 7

    //for file input
    //freopen("input.txt", "r", stdin);
    cout << "Enter number of vertices: ";
    int n, e;
    cin >> n;
    //colored array store color state of vertices, un_colored stores number of non-colored vertices
    //matrix to represent graph
    int colored[n], un_colored = n, color = 0, matrix[n][n];
    //vertices vector is used to store vertices with degree.
    vector<pair<int, int>> vertices(n);
    //temp vector is used to find out adjacent vertex
    vector<int> temp;

    //initializing all variables
    for (int i = 0; i < n; ++i) {
        vertices[i] = make_pair(i, 0);
        colored[i] = 0;
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = 0;
        }
    }

    cout << "Enter number of Edges: ";
    cin >> e;
    //taking input
    for (int k = 0; k < e; ++k) {
        int i, j;
        cout << "Enter " << k + 1 << " edge: ";
        cin >> i >> j;
        //storing in matrix
        matrix[i - 1][j - 1] = 1;
        //also calculating vertex degree, it will help us to sort in descending order
        vertices[i - 1].second++;
    }

    //using STL algorithm to sort in descending order
    sort(vertices.begin(), vertices.end(), [](auto &left, auto &right) { return left.second > right.second; });

    //looping until all vertices are colored
    while (un_colored) {
        //taking new color every looping
        color++;
        for (int i = 0; i < n; ++i) {
            //find uncolored vertex from vertices variable,if found one color it and also color it's non adjacent vertices
            if (!colored[vertices[i].first]) {
                //coloring vertex
                colored[vertices[i].first] = color;
                //decreasing un_colored variable
                un_colored--;
                //resetting temp vector
                temp.clear();
                //finding vertices in matrix
                for (int j = 0; j < n; ++j) {
                    //only accepting non adjacent and non-colored vertices
                    if (!colored[j] && matrix[vertices[i].first][j] == 0) {
                        //when temp has no element just color vertex and push it to temp
                        if (temp.empty()) {
                            colored[j] = color;
                            un_colored--;
                            temp.push_back(j);
                        } else {
                            //otherwise compare with other vertex
                            for (int k : temp) {
                                //if non adjacent color it and push it
                                if (matrix[k][j] == 0) {
                                    colored[j] = color;
                                    un_colored--;
                                    temp.push_back(j);
                                }
                            }
                        }

                    }
                }
                //this will filter all adjacent vertex and take new color
                break;
            }
        }
    }
    //printing output
    cout << endl << "Total required color: " << color << endl;
    return 0;
}