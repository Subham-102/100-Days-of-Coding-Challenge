class Solution {
public:
   string operation(int temp)
   {
            string val="";
               int fl=0;
                while(temp>1)
                {
                    int t=temp%10;
                    val+=to_string(t);
                    temp=temp/10;
                    fl=1;
                }
                 if(fl==1 && temp>0)
                {
                    val+=to_string(temp);
                }
                reverse(val.begin(),val.end());
    return val;
   }
    int compress(vector<char>& chars) {
        
        int count=0,n=chars.size(),temp=1;
        if(chars.size()==1)
        return 1;
        string ans="";
        ans+=chars[0];
        for(int i=1;i<n;i++)
        {
            if(chars[i]==ans[ans.length()-1])
            {
                temp++;
            }
            else
            {  
                ans+=operation(temp);
                ans+=chars[i];
                temp=1;
            }
        }
        
                ans+=operation(temp);
        count=ans.length();
    
        for(int i=0;i<count;i++)
        chars[i]=ans[i];
        return count;
    }
};