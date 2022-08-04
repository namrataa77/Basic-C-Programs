#include<iostream>
using namespace std;

class TreeNode{
    public: int val;
            TreeNode* left;
            TreeNode* right;
            TreeNode(int data){
                val = data;
                left = NULL;
                right = NULL;
            }
};

int main()
{
    TreeNode* root  = new TreeNode(5);
    

    return 0;
}