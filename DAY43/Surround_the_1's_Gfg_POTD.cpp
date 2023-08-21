//GFG POTD-------------------------------------------------------------21/08/2023
//Surround the 1's

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int i,j;
        int ans=0;
        int dirx[]={1,-1,0,0,1,1,-1,-1};
        int diry[]={0,0,1,-1,1,-1,1,-1};
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j])
                {
                    int cnt=0;
                    for(int k=0;k<8;k++)
                    {
                        int r = i+dirx[k];
                        int c = j+diry[k];
                        if(r>=0 && c>=0 && r<n && c<m && !matrix[r][c]) cnt++;
                    }
                    
                    if(cnt && cnt%2==0) ans++;
                }
            }
        }
        
        return ans;
    }
};
