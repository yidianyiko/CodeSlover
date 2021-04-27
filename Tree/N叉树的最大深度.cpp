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

    int maxDepth(TreeNode* root){
        queue<TreeNode*> que;
        if(root!=NULL){
            que.push(root);
        }
        int depth = 0;
        while(!que.empty()){
            int size = que.size();
            vector<int> vec;
            for(int i = 0; i <size;i++){
                Node* node = que.front();
                que.pop();
                for(int j = 0; j<children.size();j++){
                    if(node->children[j]) que.push(node.children[j]);
                }
            }
        }
        return depth;
    }
};