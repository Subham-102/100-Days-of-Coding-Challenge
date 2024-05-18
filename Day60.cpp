class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<(matrix.size()+1)/2; i++){
            for(int j=i; j<(matrix[0].size()+1)/2; j++){
                if(i==0 && j==0){
                    int tl=matrix[i][j], tr=matrix[i][matrix[0].size()-j-1], bl=matrix[matrix.size()-i-1][j],br=matrix[matrix.size()-i-1][matrix[0].size()-j-1];
                    matrix[i][j]=bl;
                    matrix[i][matrix[0].size()-j-1]=tl;
                    matrix[matrix.size()-i-1][j]=br;
                    matrix[matrix.size()-i-1][matrix[0].size()-j-1]=tr;
                }
                else if((matrix.size()&2) && j==matrix.size()/2){
                    int tp=matrix[i][j], lft=matrix[j][i], rgt=matrix[j][matrix.size()-1-i], btm=matrix[matrix.size()-1-i][j];
                    matrix[i][j]=lft;
                    matrix[j][matrix.size()-1-i]=tp;
                    matrix[j][i]=btm;
                    matrix[matrix.size()-1-i][j]=rgt;
                }
                else{
                    int tplft=matrix[i][j], tprgt=matrix[i][matrix.size()-1-j];
                    int btmlft=matrix[matrix.size()-1-i][j], btmrgt=matrix[matrix.size()-1-i][matrix.size()-1-j];
                    int lftbtm=matrix[j][i], lfttp=matrix[matrix.size()-1-j][i];
                    int rgttp=matrix[matrix.size()-1-j][matrix.size()-1-i], rgtbtm=matrix[j][matrix.size()-1-i];
                    matrix[i][j]=lfttp;
                    matrix[i][matrix.size()-1-j]=lftbtm;
                    matrix[matrix.size()-1-i][j]=rgttp;
                    matrix[matrix.size()-1-i][matrix.size()-1-j]=rgtbtm;
                    matrix[j][i]=btmlft;
                    matrix[matrix.size()-1-j][i]=btmrgt;
                    matrix[matrix.size()-1-j][matrix.size()-1-i]=tprgt;
                    matrix[j][matrix.size()-1-i]=tplft;

                }
                // for(auto it: matrix){
                //     for(auto it1: it)cout<<it1<<" ";
                //     cout<<endl;
                // }cout<<endl;
            }
        }
    }
};