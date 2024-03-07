#include <bits/stdc++.h>

using namespace std;

int main() {
    stringstream output;

    string channelStorage = "";

    int msgCount;
    int invalidChannelCount = 0;
    cin >> msgCount >> ws;

    string messages[msgCount];

    for (int i = 0; i < msgCount; ++i) {
        getline(cin, messages[i]);
    }

    for (int i = 0; i < msgCount; i++) {
        if (messages[i].substr(0, 4) == "send") {
            string channelName = messages[i].substr(5, messages[i].find(" ", 5) - 5);
            string message = messages[i].substr(messages[i].find(" ", 5) + 1, messages[i].length() - messages[i].find(" ", 5) - 1);
            
            
            // cout << channelName << endl;
        } else {
            // cout << "Invalid Channel" << endl;
            invalidChannelCount++;
        }
    }

    //output admin log
    if (invalidChannelCount > 0) {
        output << "=== admin log ===" << endl;
        for (int i = 0; i < invalidChannelCount; i++) {
            output << "The format is not supported" << endl;
        }
    }


    cout << output.str();


    return 0;
}