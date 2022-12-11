// One good soln, but has integer overflow
class Solution {
public:
    vector<int> getRow(int row) {
        vector<int> out={1};
        if(row==0) return out;
        
        for(int i=1;i<row;i++){
            out.push_back((out[i-1]*(row-i+1))/i);
        }
        out.push_back(1);
        return out;
    }
};