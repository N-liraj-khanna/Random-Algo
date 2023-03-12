// tc=o(N*M)
// sc=o(N*M)
class Solution {
public:
    int lcs(string s1, string s2){
        int n=s1.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(s1[i]==s2[j]){
                    dp[i][j]=dp[i+1][j+1]+1;
                }else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
    int longestPalindromeSubseq(string s) {
        
        string rev=s;
        reverse(rev.begin(), rev.end());

        return lcs(s,rev);
    }
};