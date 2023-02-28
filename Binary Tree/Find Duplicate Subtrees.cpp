//https://leetcode.com/problems/find-duplicate-subtrees/description/

string serializeSubtrees(TreeNode* node, unordered_map<string, int>& subtrees, vector<TreeNode*>& duplicates) 
{
    if (node == nullptr) 
        return "#";
    string left = serializeSubtrees(node->left, subtrees, duplicates);
    string right = serializeSubtrees(node->right, subtrees, duplicates);
        
    string s = left + "," + right + "," + to_string(node->val);
        
    if (subtrees[s] == 1) duplicates.push_back(node); 
        subtrees[s]++;
    return s;
}

vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
{
    unordered_map<string, int> subtrees; 
    vector<TreeNode*> duplicates;
        
    serializeSubtrees(root, subtrees, duplicates); 
    return duplicates;
}
