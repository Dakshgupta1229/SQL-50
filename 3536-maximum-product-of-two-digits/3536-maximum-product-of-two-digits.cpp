class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        int count = 0;
        while(n!=0){
            int num = n%10;
            v.push_back(num);
            n = n/10;
            count++;
        }
        sort(v.begin(),v.end());
        return v[count-1] * v[count-2];
    }
};