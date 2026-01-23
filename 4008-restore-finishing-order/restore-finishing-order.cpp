class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
    int i,j;
    vector<int> res;
    for(i=0;i<order.size();i++){
        for(j=0;j<friends.size();j++){
            if(order[i]==friends[j])
                res.push_back(order[i]);
            else
                continue;
        }
    }
     return res;   
    }
};