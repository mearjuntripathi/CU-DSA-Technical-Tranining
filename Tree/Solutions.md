## sol 1
```
bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL && targetSum-root->val==0)return true;
        return hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val);
    }
```

## sol 2
```
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > paths;
        vector<int> path;
        findPaths(root, sum, path, paths);
        return paths;  
    }
private:
    void findPaths(TreeNode* node, int sum, vector<int>& path, vector<vector<int> >& paths) {
        if (!node) return;
        path.push_back(node -> val);
        if (!(node -> left) && !(node -> right) && sum == node -> val)
            paths.push_back(path);
        findPaths(node -> left, sum - node -> val, path, paths);
        findPaths(node -> right, sum - node -> val, path, paths);
        path.pop_back();
    }
};
```
