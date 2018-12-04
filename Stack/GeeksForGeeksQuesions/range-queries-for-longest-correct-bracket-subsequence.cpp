//QuestionLink - https://practice.geeksforgeeks.org/problems/range-queries-for-longest-correct-bracket-subsequence/0

#include<iostream>
#include<stack>
using namespace std;

int main() {
    string inputString;
    int t;
    cin >> t;
    while(t > 0) {
        stack <char> s;
        int l, r, count = 0;
        cin >> inputString;
        cin >> l >> r;
        for(int i=l; i<=r; i++) {
            if (inputString[i] == '(') {
                s.push(inputString[i]);
            } else if (inputString[i] == ')') {
                if (!s.empty()) {
                    s.pop();
                    count = count + 2;
                } else {
                    continue;
                }
            }
        }
        cout << count << endl;
        t--;
    }
    return 0;
}