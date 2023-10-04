class Solution {
public:
bool isNumber(const string& s) {
    if (s.empty()) return false;

    int i = 0;
    int n = s.size();

    // Handle optional sign
    if (s[i] == '+' || s[i] == '-') {
        i++;
        if (i == n) return false; // No digits after sign
    }

    bool hasDigit = false;

    // Check for digits before decimal point
    while (i < n && isdigit(s[i])) {
        i++;
        hasDigit = true;
    }

    // Check for decimal point and digits after it
    if (i < n && s[i] == '.') {
        i++;
        while (i < n && isdigit(s[i])) {
            i++;
            hasDigit = true;
        }
    }

    // Check for exponent part
    if (hasDigit && i < n && (s[i] == 'e' || s[i] == 'E')) {
        i++;
        if (i < n && (s[i] == '+' || s[i] == '-'))
            i++;
        hasDigit = false; // Reset hasDigit flag
        while (i < n && isdigit(s[i])) {
            i++;
            hasDigit = true;
        }
    }

    // Return true if we've consumed the entire string and at least one digit was found.
    return i == n && hasDigit;
}

    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for(auto i:tokens)
        {
            if(isNumber(i)==true)
            {
                stk.push(stoi(i));
            }

            else{
                int t1=stk.top();
                stk.pop();
                int t2=stk.top();
                stk.pop();

                char ch=i[0];
                int val;
                switch(ch)
                {
                    case '+': val=t1+t2;
                    stk.push(val);
                    break;

                    case '-': val=t2-t1;
                    stk.push(val);
                    break;

                    case '*':val=t1*t2;
                    stk.push(val);
                    break;

                    case '/':val=t2/t1;
                    stk.push(val);
                    break;

                    
                }

            }
        }

        return stk.top();
    }
};