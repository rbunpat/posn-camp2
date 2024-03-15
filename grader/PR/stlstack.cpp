#include <bits/stdc++.h>

using namespace std;

int main()
{

    stringstream output;

    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++)
    {

        int n;
        cin >> n;

        stack<int> input;

        for (int i = 0; i < n; i++)
        {
            char cmd;
            cin >> cmd;

            if (cmd == 'a')
            {
                int a;
                cin >> a;
                input.push(a);
            }

            if (cmd == 'b')
            {
                if (!input.empty())
                {
                    output << input.top() << " ";
                    input.pop();
                }
                else
                {
                    output << "-1" << " ";
                }
            }

            if (cmd == 'c')
            {
                output << input.size() << " ";
            }

            if (cmd == 'd')
            {
                if (!input.empty())
                {
                    output << input.top() << " ";
                }
                else
                {
                    output << "-1" << " ";
                }
            }
        }

        output << endl;

        
    }

    cout << output.str();

    return 0;
}