#include <string>
#include <queue>
#include <iostream>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class Solution {
public:
    //preorder -> difference between last and first depth

    int depth(TreeNode* root, int* maxDiameter){
        int depthL, depthR;
        if(!root)
            return 0;
        depthL = depth(root->left, maxDiameter);
        depthR = depth(root->right, maxDiameter);

        *maxDiameter = max(*maxDiameter, depthL + depthR);
        //printf("%d \n", *maxDiameter);

        return max(depthL+1, depthR+1);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter=0;
        depth(root, &maxDiameter);

        return maxDiameter;

    }

    // int maxDiameter = 0;

    // int depth(Treenode* root){
    //     int depthL, depthR;
    //     depthL = depth(root->left);
    //     depthR = depth(root->right);

    //     maxDiameter = max(maxDiameter, depthL + depthR);

    //     return max(depthL+1, dpethR+1);

    // }

    // int diameterOfBinaryTree(TreeNode* root, int ans) {
    //     int depthHere = depth(root);

    //     return maxDiameter;

    // }
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

TreeNode* stringToTreeNode(string input) {
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    if (!input.size()) {
        return nullptr;
    }

    string item;
    stringstream ss;
    ss.str(input);

    getline(ss, item, ',');
    TreeNode* root = new TreeNode(stoi(item));
    queue<TreeNode*> nodeQueue;
    nodeQueue.push(root);

    while (true) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        if (!getline(ss, item, ',')) {
            break;
        }

        trimLeftTrailingSpaces(item);
        if (item != "null") {
            int leftNumber = stoi(item);
            node->left = new TreeNode(leftNumber);
            nodeQueue.push(node->left);
        }

        if (!getline(ss, item, ',')) {
            break;
        }

        trimLeftTrailingSpaces(item);
        if (item != "null") {
            int rightNumber = stoi(item);
            node->right = new TreeNode(rightNumber);
            nodeQueue.push(node->right);
        }
    }
    return root;
}

int main() {
    string line;
    while (getline(cin, line)) {
        TreeNode* root = stringToTreeNode(line);
        
        int ret = Solution().diameterOfBinaryTree(root);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}