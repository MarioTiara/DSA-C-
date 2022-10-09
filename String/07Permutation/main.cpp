#include <iostream>
#include <vector>
using namespace std;

void perm (char s[], int k){
    static int A[10] ={0};
    static char Res [10];
    int i;
    if (s[k]=='\0'){
        Res[k]='\0';
        cout<<Res<<endl;
    }else {
        for (i=0; s[i]!='\0'; i++){
            if (A[i]==0){
                Res[k]=s[i];
                A[i]=1;
                perm(s,k+1);
                A[i]=0;
            }
        }
    }
};
void backtrack(vector<vector<int>> &res, vector<int>&nums, vector<int>&permutation, vector<bool> &used){
    if (permutation.size()==nums.size()){
        res.push_back(permutation);
        return;
    }
    for (int i=0; i<nums.size(); i++){
        if (!used[i]){
            used[i]=true;
            permutation.push_back(nums[i]);
            backtrack(res, nums, permutation, used);
            used[i]=false;
            permutation.pop_back();
        }
    }
};

int main(){
   vector<int> nums={1,2,3};
   vector<vector<int>> res;
   vector<int> permutation;
   vector<bool> used;
   backtrack(res,nums,permutation,used);
   return 0;
};

