#include <bits/stdc++.h>
using namespace std;


struct Node {
    long long val;
    Node *left, *right;
    Node(long long x) : val(x), left(NULL), right(NULL) {}
    Node() : val(0LL), left(NULL), right(NULL) {}
    Node(int x,Node* left,Node* right) : val(x), left(left), right(right) {}
};


vector<long long> f(Node* root, long long &ans) {
    if (!root) {
        return {LLONG_MAX, LLONG_MIN, true, 0LL}; // {minVal, maxVal, isBST, sum}
    }
    
    auto lt = f(root->left, ans);
    auto rt = f(root->right, ans);
    
    long long mn = min(root->val, lt[0],rt[0]);
    long long mx = max(root->val, lt[1],rt[1]);
    long long sum = lt[3] + rt[3] + root->val;
    
    bool flag = (lt[2] && rt[2]);
    if(lt[1] >= root->val || rt[0] <= root->val) {
        flag = false;
    }
    if(flag) {
        ans = max(ans, sum);
    }
    return {mn, mx, flag, sum};
}

long long getMaxSumBST(Node* root) {
    long long ans = LLONG_MIN;
    f(root, ans);
    return ans;
}





// Don't touch the below code
Node* getBinaryTree(vector<int>& arr){

    if(arr.size() == 0) return NULL;

    queue<Node*> qu;
    Node* root = new Node(arr[0]);
    qu.push(root);
    int idx = 1;
    
    while(idx < arr.size()){
      auto curr = qu.front();
      qu.pop();
      
      if(arr[idx] == -1){
        curr->left = NULL;
      }
      else{
        curr->left = new Node(arr[idx]);
        qu.push(curr->left);
      }
      idx++;
      
      if(arr[idx] == -1){
        curr->right = NULL;
      }
      else{
        curr->right = new Node(arr[idx]);
        qu.push(curr->right);
      }
      idx++;
    }
    
    return root;
}

int main(){
    
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;

    vector<int> nodeValues(n);
    for(int &x : nodeValues){
        cin >> x;
    }
    
    int idx = 0;
    Node* root = getBinaryTree(nodeValues);

    cout << getMaxSumBST(root);
    
    return 0;
}