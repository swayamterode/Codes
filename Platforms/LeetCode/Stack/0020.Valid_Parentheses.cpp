class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (auto i : s)
        {
            if (i == '(' or i == '{' or i == '[')
                st.push(i); // if we find the opening bravket we push it into the stack
            else
            { // if we reach else part thsi means we having closing bracket
                if (st.empty() or (st.top() == '(' and i != ')') or (st.top() == '{' and i != '}') or (st.top() == '[' and i != ']'))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};