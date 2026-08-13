class Solution {
public:
    vector<int> getRow(int row) {
         vector<int>anss;
         row++;
         anss.push_back(1);
         int ans=1;
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;        
            anss.push_back(ans);
        }
        return anss;
    }
};