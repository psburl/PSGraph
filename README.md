# PSGraph
A implementation of generic graph with C++ Templates 

#Documentation

The main logic to use this graph pack are that each inserted vertex is identified by your alias. So, if an vertex is called 'A', is not possible to insert other vertex with this alias. 

Actually, the PSGraph contains this artifices:

The vertex is a generic basic type (int, double, string..).

The Edges are composed by : 2 Vertex, A double weight, A bool flag called 'isDigraph' to set if this edge has direction
