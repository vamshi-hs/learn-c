struct Node {
	int num;
	struct Node * next;
};

struct Graph {
	int listLen;
	struct Node ** list;
	int * visited;
};

struct Node * createNode(int newValue);
void pushNode(struct Node** list,int newValue);
void printNodes(struct Node * list);
void bfs(struct Graph* graph);
void addEdge(struct Graph* graph,int src,int dest);
struct Graph* createGraph(int numVertices);
	/* struct Graph* next; */
