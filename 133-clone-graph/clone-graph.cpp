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
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        unordered_map<Node*,Node*>mpp;
        
        return helper(node,mpp);
    }


    Node* helper(Node* node,unordered_map<Node*,Node*>&mpp){
        Node* newnode= new Node(node->val);
        mpp[node]=newnode;
        for(auto neighbour:node->neighbors){
            if(mpp.find(neighbour)==mpp.end()){
                (newnode->neighbors).push_back(helper(neighbour,mpp));
            }

            else{
                (newnode->neighbors).push_back(mpp[neighbour]);
            }
        }
        return newnode;
    }
};