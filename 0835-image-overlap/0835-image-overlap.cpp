class Solution {
public:
    int overlap(vector<vector<int>>& img1, vector<vector<int>>& img2,int row_offset,int col_offset){
        int n=img1.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int b_i=i+row_offset;
                int b_j=j+col_offset;
                if(b_i<0 || b_i>=n || b_j<0 || b_j>=n) continue;
                if(img1[i][j]==1 && img2[b_i][b_j]==1) count++;
            }
        }
        return count;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        int maxoverlap=0;
        int count;
        for(int row_offset=-n+1;row_offset<n;row_offset++){
            for(int col_offset=-n+1;col_offset<n;col_offset++){
                count=overlap(img1,img2,row_offset,col_offset);
                maxoverlap=max(maxoverlap,count);
            }
        }
        return maxoverlap;
        
    }
};