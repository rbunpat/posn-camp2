#include <bits/stdc++.h>

using namespace std;

int main()
{
    stringstream output;

    bool solved = false;

    long long in1, in2, in3, out1, out2, out3;

    cin >> in1;
    cin >> in2;
    cin >> in3;

    out1 = out2 = out3 = 0;

    for (out1 = -10000; out1 <= in1; out1++)
    {
        for (out2 = -10000; out2 <= in1 - out1; out2++)
        {
            out3 = in1 - out1 - out2;

            if (out1 * out2 * out3 == in2 && out1 * out1 + out2 * out2 + out3 * out3 == in3)
            {
                solved = true;
                break;
            }
        }
        if (solved)
        {
            break;
        }
    }
    if (solved)
    {
        output << out1 << " " << out2 << " " << out3 << endl;
    }
    else
    {
        output << "No solution." << endl;
    }

    cout << output.str();
    return 0;
}