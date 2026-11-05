class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        int cnt = 0;

        sort(arr2.begin(), arr2.end());

        for(int i = 0; i < arr1.size(); i++){
            int case1 = arr1[i] - d;
            int case2 = arr1[i] + d;
            bool check = false;

            for(int i = 0; i < arr2.size(); i++){
                if(arr2[i] >= case1 && arr2[i] <= case2){
                    check = true;
                    break;
                }
            }

            if(!check) cnt++;
        }
        return cnt;
    }
};