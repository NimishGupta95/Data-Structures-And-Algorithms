//QuestionLink - https://practice.geeksforgeeks.org/problems/delete-array-elements-which-are-smaller-than-next-or-become-smaller/0

#include<iostream>
#include<stack>
using namespace std;
int main() {
	int t;
    cin >> t;
	while(t > 0) {
	    stack<int> s, outputStack;
	    int n, array[100];
	    cin >> n;
	    for(int i=0; i<n; i++) {
	        cin >> array[i];
	    }
	    int k;
	    cin >> k;
	    s.push(array[0]);
	    for(int i=1; i<n; i++) {
            if (k >0) {
                if (array[i] > s.top()) {
                    while(!s.empty() && s.top() < array[i]) {
                        s.pop();
                        k--;
                    }  
                    s.push(array[i]); 
                } else {
                    s.push(array[i]);
                }
            } else {
                s.push(array[i]);
            }
	    }
        while(!s.empty()) {
            outputStack.push(s.top());
            s.pop();
        }
        while(!outputStack.empty()) {
            cout << outputStack.top() << " ";
            outputStack.pop();
        }
        cout << endl;
	    t--;
	}
	return 0;
}