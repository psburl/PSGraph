# PSGraph
A implementation of generic graph with C++ Templates 

#Documentation

The main logic to use this graph pack are that each inserted vertex is identified by your alias. So, if an vertex is called 'A', is not possible to insert other vertex with this alias. 

Actually, the PSGraph contains this artifices:

The vertex is a generic basic type (int, double, string..).

## Edges 
are composed by : 
######2 Vertex;
######A double weight;
######A bool flag called 'isDigraph' to set if this edge has direction.

###Methods

#####Constructor (T u, T w, bool isDigraph = false, double weight = 1) : 
Receives 2 vertex with type 'T' and 2 optionals attributes 'isDigraph' and weight to set, repectively, if this is a digraph and your weight (if the graph use weights);
#####GetEdge() : 
Returns a vector with vertex type with 2 vertex where if this is an digraph the first position has a path to second position;
#####ToString() :
Retuns current Edge as String follwing this rule: Be E an Edge and v,w your vertex, this fuction returns the string "v-w"; 
#####Contains(T v) :
This function takes a vertex and returns true if the given vertex is equal to 1 of the 2 vertices contained in the current edge.


