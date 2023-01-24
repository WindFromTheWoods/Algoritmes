#include "Binary tree.h"
#include <iostream>

using namespace std;

int tabs = 0; //Для создания отступов
//Кол-во отступов высчитывается по кол-ву рекурсивного вхождения при выводе в фукцию print

void Tree::FreeTree(Branch *aBranch)
{
    if (!aBranch) return;
    FreeTree(aBranch->LeftBranch);
    FreeTree(aBranch->RightBranch);
    delete aBranch;
    return;
}

void Tree::Print(Branch *aBranch)
{
    tabs = 0;
    if (!aBranch) return;
    tabs++;

    Print(aBranch->LeftBranch);

    for (int i = 0; i < tabs; i++) 		
        cout << "  ";

    cout << aBranch->Data << endl;

    Print(aBranch->RightBranch);

    tabs--;
    return;
}

void Tree::Add(int aData, Branch *&aBranch)
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	if (aBranch->Data>aData)
	{
		Add(aData, aBranch->LeftBranch);
	}
	else 
	{
		Add(aData, aBranch->RightBranch);
	};
}

int main()
{
    Tree myTree;
    char s[] = "12384562789";

    for (int i = 0; s[i]; i++)
    {
        myTree.Add(s[i], myTree.root);
    }
        
    myTree.Print(myTree.root);

    cin.get();
    return 0;
}
