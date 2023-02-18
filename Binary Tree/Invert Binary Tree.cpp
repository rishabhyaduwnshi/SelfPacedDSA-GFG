TreeNode* invertTree(TreeNode* root) 
{
    if(root != nullptr)
    {
        if(root->left != nullptr || root->right != nullptr)
        {
            TreeNode *temp = root->left;
            root->left = root->right;
            root->right = temp;
        }

        if(root->left != nullptr)
            invertTree(root->left);

        if(root->right != nullptr)
            invertTree(root->right);
    }
        
    return root;
}
