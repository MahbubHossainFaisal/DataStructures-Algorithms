/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void Dfs(Node* node, Node* copy, vector<Node*>&vis){
        vis[copy->val] = copy;
        
        for(auto i: node->neighbors){
            if(vis[i->val] == NULL){
                Node* newNode = new Node(i->val);
                (copy->neighbors).push_back(newNode);
                Dfs(i,newNode,vis);
            }
            else{
                (copy->neighbors).push_back(vis[i->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        
        Node* copy = new Node(node->val);
        
        vector<Node*> vis(1000,NULL);
        
        Dfs(node,copy,vis);
        return copy;
    }
};