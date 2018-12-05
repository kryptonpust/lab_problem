#include <bits/stdc++.h>
#include <sys/stat.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter Directory name: ";
    cin >> s;
    if (!mkdir(s.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH))
    {
        cout << "Generating internal structure." << endl;
        ofstream o((s + "/sol.cpp"));
        o << "#include <bits/stdc++.h>\n\nusing namespace std;\n\nint main()\n{\n\t//freopen(\"in.txt\",\"r\",stdin);\n\t\n\treturn 0;\n}";
        ofstream in((s + "/in.txt"));
    }
    else
    {
        cerr << "directory created failed";
    }
    return 0;
    //g++ init.cpp -o init
}
