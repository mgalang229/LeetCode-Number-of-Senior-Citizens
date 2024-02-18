class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for (string& d : details) {   
            int age = (d[11] - '0') * 10 + (d[12] - '0');
            cnt += (age > 60);
        }
        return cnt;
    }
};
