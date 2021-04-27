class Solution {
public:
    int getDepth(TreeNode* Node){
        if(node == NULL) return 0;
        int depth =0;
        for(int i = 0; i<root->children.size();i++){
            depth = max(depth, getDepth(root->children[i]));
        }
        return depth+1;
    }
    int maxDepth(TreeNode* root){
        return getDepth(root);
    }
}