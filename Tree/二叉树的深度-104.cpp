class Solution {
public:
    int getDepth(TreeNode* Node){
        if(node == NULL) return 0;
        int leftDepth = getDepth(node->leftNode);
        int rightDepth = getDepth(node->right);
        int depth = 1 + max(leftDepth, rightDepth);
        return depth;
    }
    int maxDepth(TreeNode* root){
        return getDepth(root);
    }

    int maxDepth(TreeNode* root){
        if(node == NULL)  return 0;
        int depth = 0;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size;
            depth++;
            for(int i = 0; i < size; i++){
                TreeNode* node = que.front();
                que.pop();
                if(node->left) que.push(node->left);
                if(node->right) que.psuh(node->right);
            }
        }
        return depth;
    }
};