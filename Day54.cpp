class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char> st;
       int count=0;
       int ans=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='{'||ch=='[' ||ch=='(')
            {
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                char top=st.top();
                if((ch=='}' && top=='{')
                || (ch==')' && top=='(')
                || (ch==']' && top=='['))
                {
                    st.pop();
                }
                else{
                   count++;
                }
                }
            
            else{
                count++;
            }
                
        }
        }
        if(!st.empty())
        {
            while(!st.empty())
            {
                count++;
                st.pop();
            }
        }
        return count;
         
    }
};