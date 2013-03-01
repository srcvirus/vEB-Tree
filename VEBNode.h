/*
 * VEBNode.h
 *
 *  Created on: Mar 1, 2013
 *      Author: sr2chowd
 */

#ifndef VEBNODE_H_
#define VEBNODE_H_

class VEBNode
{
	long u;
	long data;
	long max_value, min_value;
	VEBNode** cluster;
	VEBNode* summary;

public:
	VEBNode(){};
	VEBNode(int u);
	VEBNode(int u, int data);
	virtual ~VEBNode();
};

#endif /* VEBNODE_H_ */
