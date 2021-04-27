/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    //递归
    int getDepth(Node *node){
        if(node == NULL) return 0;
        int depth = 0;
        for(int i = 0; i<node->children.size(); i++){
            depth = max(depth,getDepth(node->children[i]));
        }
        return depth+1;
    }
    int maxDepth(Node* root) {
        return getDepth(root);
    }
    //迭代
    int maxDepth(Node* root){
        int depth = 0;
        queue<Node*> que;
        if(root != NULL) que.push(root);
        while(!que.empty()){
            int size = que.size();
            depth++;
            for(int i = 0; i< size; i++){
                Node* node = que.front();
                que.pop();
                for(int j = 0; j < node->children.size();j++){
                    if(node->children[j]) que.push(node->children[j]);
                }
            }
        }
        return depth;

    }
};