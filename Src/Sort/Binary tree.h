#ifndef ALGORITMES_BINARY_TREE_H
#define ALGORITMES_BINARY_TREE_H

class Tree
{
private:
    struct Branch
    {
        char Data;
        Branch *LeftBranch;
        Branch *RightBranch;
    };
    Branch *root;
    int tabs;

public:
    Tree(){root = nullptr;}
    ~Tree(){FreeTree(root);}

    void FreeTree(Branch *aBranch);

    void Print(Branch *aBranch);

    void Add(char aData, Branch *&aBranch);
};

#endif //ALGORITMES_BINARY_TREE_H
