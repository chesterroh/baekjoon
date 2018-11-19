#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
  int value;
  struct TreeNode *llink;
  struct TreeNode *rlink;
}TreeNode;

// Function type declaration
TreeNode * node_alloc( int );

int main( int argc, char **argv ){

  TreeNode *head;
  head = node_alloc(sizeof(TreeNode));
  head->value = 65536;

  printf("%d\n",head->value);
    
}


TreeNode * node_alloc( int size ){
  TreeNode *t;

  t = (TreeNode*)malloc(size);

  if(!t)
    fprintf(stderr,"node_alloc error\n");
  else
    return t;
}
