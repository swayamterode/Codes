class Solution {
public:
    string interpret(string command) {
        string ans= "";
        for(int i = 0; i<command.size(); i++)
        {

            if(command[i] == '(')
            {
                if(command[i+1] == ')')
                ans+="o";
                if(command[i+1] == 'a' && command[i+2]=='l')
                {
                    ans+= "al";
                    i +=2;
                }
            }
            if(command[i] == 'G') {
                ans+="G";
            }
        }
        return  ans;
    }
};
