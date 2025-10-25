#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <cctype> // Include cctype for isdigit()

using namespace std;

class Solution {
public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;

        for (int i = 0; i < arr.size(); i++) {
            string s = arr[i]; // Get the string

            if (s.empty()) continue; // Skip empty strings
            
            // Check if it's a digit or an operator
            if (isdigit(s[0])) {
                st.push(stoi(s)); // Use stoi to convert string to int
            }
            else {
                // Pop top two operands
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();

                // Perform the operation
                switch (s[0]) { // Directly use the first character
                    case '+': st.push(val1 + val2); break;
                    case '-': st.push(val1 - val2); break;
                    case '*': st.push(val1 * val2); break;
                    case '/': st.push(val1 / val2); break;
                    case '^': st.push(pow(val1, val2)); break;
                }
            }
        }

        // Final result
        return st.top();
    }
};
