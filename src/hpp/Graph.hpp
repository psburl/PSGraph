
	// -- Methods --

template<class T>
int Graph<T>::Deg(){
	return this->edges.size() * 2;
};

template<class T>
int Graph<T>::Deg(T v){
	
	int Sum = 0;

	for(int i = 0; i < this->edges.size(); i++)
		Sum+= (edges[i].Contains(v)) ? 1 : 0;

	return Sum;
};

template<class T>
bool Graph<T>::ContainsVertice(T v){
	
	for(int i = 0; i < this->vertices.size(); i++){
		if(vertices[i] == v){
			return true;
		}
	}
	return false;
};


template<class T>
void Graph<T>::InsertVertice(T v){
	
	if(!this->ContainsVertice(v)){
		this->vertices.push_back(t_Vertice(v));
	}
};

template<class T>
void Graph<T>::InsertEdge(t_Vertice u, t_Vertice v){

	this->edges.push_back(t_Edge(u, v));
	
};

	// -- Constructors
	
template<class T>
Graph<T>::Graph(){
	this->vertices.clear();
	this->edges.clear();
};