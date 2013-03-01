/*
 * VEBTree.h
 *
 *  Created on: Mar 1, 2013
 *      Author: sr2chowd
 */

#ifndef VEBTREE_H_
#define VEBTREE_H_

#include "VEBNode.h"

class VEBTree
{
	long u;
	VEBNode* root;

public:
	VEBTree();
	VEBTree(int u);

	int getUniverseSize() const { return this->u; }
	void setUniverseSize(int u){ this->u = u; }

	VEBNode* getRoot() const { return root; }

	long getMin();
	long getMax();
	bool isMember(long x);
	VEBNode* getSuccessor(long x);
	VEBNode* getPredecessor(long x);

	void insert(long x);
	void remove(long x);

	virtual ~VEBTree();
};

#endif /* VEBTREE_H_ */
