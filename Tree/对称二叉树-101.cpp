class Solution {
public:
    bool compare(Tree*Node* left, TreeNode* right){
        if(left == NULL && right != NULL) return false;
        else if (left != NULL && right == NULL) return false;
        else if (left == NULL && right == NULL) return true;
        else if (left->val != right->val) return false;

        bool outside = compare(left->left, right->right);

        bool inside = compare(left->right,right->left);

        return outside && inside;
    }

    bool isSymmetric(TreeNode* root){
        if(root == NULL) return true;
        return compare(root->left,root->right);
    }
    //迭代
    bool isSymmetric(TreeNode* root){
        if(root == NULL) return true;
        stack<TreeNode*> st;
        st.push(root.left);
        st.push(root.right);
        while(!st.empty()){
            
            TreeNode* leftNode = st.top();
            st.pop();
            TreeNode* rightNode = st.top();
            st.pop();
            if(!leftNode && !rightNode){
                continue;
            }

            if((!leftNode || !rightNode || (leftNode->val != rightNode->val))){
                return false;
            }
            st.push(leftNode->left);
            st.push(rightNode->right);
            st.push(leftNode->right);
            st.push(rightNode->left);
        }
        return true;
    }   
}