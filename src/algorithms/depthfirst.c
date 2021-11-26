#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5

struct Vertex {
	char label;
	bool visited;
};

void displayVertex() {
}

void depthFirst() {
	int i;

	// mark first node as visited
	lstVerticies[0]->visited = true;

	// display the vertex
	displayVertex(0);
}
