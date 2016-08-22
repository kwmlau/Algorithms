#include <iostream>
using namespace std;

typedef struct tagSTreeNode{
    int value;
    tagSTreeNode* pLeft;
    tagSTreeNode* pRight;
}STreeNode;

typedef void (*visit)(int value);

class CBinaryTree {
private:
    STreeNode* m_pRoot;
public:
    
};