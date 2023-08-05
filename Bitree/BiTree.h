#ifndef __BiTree__
#define __BiTree__
#include "BiTreeHead.h"
#include <stdlib.h>
#include <stdio.h>

Status InitTree(BiTree T){
    T = (BiTree)malloc(sizeof(BiTree));
    if (T == NULL)
    {
        printf("malloc failed \n");
        return false;
    }
    return true;    
}

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