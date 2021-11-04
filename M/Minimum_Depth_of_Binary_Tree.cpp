// Minimum Dept of binary tree
// https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Aman Kumar

int getMinHeight(TreeNode *root, int h)
{
    h++ ;
    if( root == NULL )
        return INT_MAX  ;
    else if( root -> left == NULL && root -> right == NULL )
        return h ;

    return min( getMinHeight( root -> left, h), getMinHeight( root -> right, h)) ;
}
int minDepth(TreeNode* root) 
{
    if( root == NULL )
        return 0 ;
    else if( root -> left == NULL && root -> right == NULL )
        return 1 ;

    return min(getMinHeight(root -> left,1), getMinHeight(root->right,1)) ;
}
