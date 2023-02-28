bool checkSubTree(TreeNode* root, TreeNode* subRoot)
{
    if(root == nullptr && subRoot == nullptr)
        return true;

    if(root == nullptr || subRoot == nullptr)
        return false;

    return ((root->val == subRoot->val) && checkSubTree(root->left,subRoot->left)  && checkSubTree(root->right,subRoot->right));
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) 
{
    //if root node is null, then it cannot have any subTree
    if(root == nullptr)
        return false;
    
    //if subRoot is null, then it is a subtree
    if(subRoot == nullptr)
        return true;
    
    //check if root and subRoot are identical using checkSubTree function
    if(checkSubTree(root,subRoot))
        return true;
    
    // if root and subRoot are not identical, check comapre with root and left subtree and root and right subtree
    return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot); 
}
