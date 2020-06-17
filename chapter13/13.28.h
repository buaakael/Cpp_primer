#include <string>

class TreeNode
{
public:
    TreeNode() : value(std::string()), count(new int(1)), left(nullptr), right(nullptr) { }
    TreeNode(const TreeNode &rhs) : value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) { ++*count; }
    TreeNode& operator=(const TreeNode &rhs);
    ~TreeNode()
    {
        if (--*count == 0)
        {
            delete left;
            delete right;
            delete count;
        }
    }
private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree
{
public:
    BinStrTree() : root(new TreeNode()) { }
    BinStrTree(const BinStrTree &bst) : root(new TreeNode(*bst.root)) { }
    BinStrTree& operator=(const BinStrTree &bst);
    ~BinStrTree() { delete root; }
private:
    TreeNode *root;
};
