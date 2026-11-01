class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> seen;
        for(string s: emails){
            string b = "";
            int a = 0;
            while(a < s.size() && s[a] != '@' && s[a] != '+'){
                if(s[a] != '.'){
                    b += s[a];
                }
                a++;
            }
            while(a < s.size() && s[a] != '@'){
                a++;
            }
            string domain = s.substr(a);
            seen.insert(b + domain);
        }
        return seen.size();
    }
};