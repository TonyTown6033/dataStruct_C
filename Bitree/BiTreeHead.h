#define elemType int
#ifndef __BiTree_HEAD__
#define __BiTree_HEAD__
#include "standRules.h"

typedef struct node
{
    elemType value;
    struct node *lchild, *rchild;
}BiNode, *BiTree;


Status InitTree(BiTree);

Status Destory(BiTree);

Status CreateTree(BiTree);

Status ClearTree(BiTree);

Status TreeEmpty(BiTree);

int TreeDepth(BiTree);

elemType Root(BiTree);

elemType Value(BiTree, BiNode e);

Status Assign(BiTree, BiNode e, elemType value);

BiNode Parent(BiTree, BiNode e);

BiNode LeftChild(BiTree, BiNode e);

BiNode RightChild(BiTree, BiNode e);

BiNode RightSibling(BiTree, BiNode e);

//Status InsertChild(&BiTree, &p, i, c);

Status DeleteChild(BiTree*,BiNode*,int i);

void PreTraverseTree(BiTree, Status (* visit)(elemType e));

void InTraverseTree(BiTree, Status (* visit)(elemType e));

void PostTraverseTree(BiTree, Status (* visit)(elemType e));

void LevelTraverseTree(BiTree, Status (* visit)(elemType e));

#endif