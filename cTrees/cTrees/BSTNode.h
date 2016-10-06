#ifndef BSTNODE_H
#define BSTNODE_H

struct BSTNode {
	char *key;
	const char *value[5];
	struct Node *lChild;
	struct Node *rChild;
	struct Node *parent;
} Node;


#endif // !BSTNODE_H
