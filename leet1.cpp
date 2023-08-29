class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        int m=matrix.size();
        vector<int> v;
        cout<<n<<" "<<m<<endl;
        int k=0,counter=0,z=0,o=0,p=n-1;
        for(int i=0;i<m+2;i++){
            // if(counter%3==0&&counter!=0&&counter%5!=0){
            //     k++;
            // }
            // if(counter%5==0&&counter!=0){
            //     z++;
            // }
            if(i%4==0){
                for(int j=0+z;j<n-k;j++){
                    v.push_back(matrix[o][j]);
                }
            }else if(i%4==1){
                for(int j=0+z;j<m-k;j++){
                    v.push_back(matrix[j][p]);
                }
                p++;
            }else if(i%4==2){
                for(int j=n-1-z;j>=0+k;j--){
                    v.push_back(matrix[p][j]);
                }
            }else{
                for(int j=m-1-z;j>=0+k;j--){
                    v.push_back(matrix[j][o]);
                }
                o++;
            }
            counter++;
        }
        return v;
    }
};