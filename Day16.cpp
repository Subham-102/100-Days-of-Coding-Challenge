class Solution {
public:
    int dominantIndex(vector<int>& arr) {
        int n = arr.size();
        int idx = 0;
        int max = INT_MIN;

        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max = arr[i];
                idx = i;
            }
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(max<2*arr[i] && arr[i]!=max) return -1;
        }

        return idx;
    }
};