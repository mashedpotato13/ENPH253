#ifndef _PATH_h
#define _PATH_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

class courseGraph {
public:
	//Node structure that stores neighbors, in order of appearance clockwise from south axis relative to figure
	//NOTE: add distances between nodes in future
	struct node {
		//enum dir { N, S, E, W }; //show possible branch directions of each node wrt global coordinates
								 //vector<int> neighbors;
		const node *neighbors[4];
		void addNeighbor(const node *n);
		const node* nextDir(int index) const;
		const node* prevDir(int index) const;
		int neighborCount = 0;
		int i = 0;
		node *preferred1;
		node *preferred2;
	};

	node n1;
	node n2;
	node n3;
	node n4;
	node n5;
	node n6;
	node n7;
	node n8;
	node n9;
	node n10;
	node n11; //endpoint
	node n12;
	node n13;
	node n14;
	node n15; //endpoint
	node n16;
	node n17;
	node n18;
	node n19;
	node n20;

	courseGraph();

};

#endif
