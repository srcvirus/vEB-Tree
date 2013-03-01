/*
 * VEBTree.cpp
 *
 *  Created on: Mar 1, 2013
 *      Author: sr2chowd
 */

#include "VEBTree.h"
#include <stdio.h>

VEBTree::VEBTree()
{
	this->root = NULL;
}

VEBTree::VEBTree(int u)
{
	this->u = u;
	root = new VEBNode(u);
}

VEBTree::~VEBTree()
{
	delete root;
}

