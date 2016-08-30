
	// -- Methods --

/* Returns the total Degress of Graph G(V,E) */

template<class T>
int Graph<T>::Deg(){
	return this->edges.size() * 2;
};

/* Returns the degress of v{V} */

template<class T>
int Graph<T>::Deg(T v){
	
	if(!this->ContainsVertice(v))
		return -1;

	int Sum = 0;

	for(int i = 0; i < this->edges.size(); i++)
		Sum+= (this->edges[i].Contains(v)) ? 1 : 0;

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
		this->vertices.push_back(v);
	}
};

template<class T>
bool Graph<T>::ContainsEdge(t_Edge e){
	
	for(int i = 0; i < this->edges.size(); i++){
		if(edges[i] == e){
			return true;
		}
	}
	return false;
};


template<class T>
void Graph<T>::InsertEdge(t_Edge e){

	if(!this->ContainsEdge(e)){
		this->edges.push_back(e);
	}
};


template<class T>
void Graph<T>::RemoveEdge(t_Edge e){

	if(this->ContainsEdge(e)){
		for(int i = 0; i < this->edges.size(); i++){
			if(edges[i] == e){
				edges.erase(edges.begin() + i);
				break;
			}
		}
	}
};


template<class T>
bool Graph<T>::HasWay(T u, T w){

};

template<class T>
void Graph<T>::ReachV(T v, map<T, bool> visited){

	visited[v] = true;
	
	vector<T> neighboors = GetNeighboors();

	for(int i = 0; i < neighboors.size(); i++){

		if()
	}

	
};


template <class T>
vector<T> Graph<T>::GetNeighboors(T v){
	
	vector<T> neighboors = new vector<T>();
	neighboors.clear();

	for(int i = 0; i < this->edges.size(); i++){

		if(this->edges[i].isInitial(v))
			neighboors.push_back(this->edges[i].GetOtherV(v));
	}

	return neighboors;
}


template<class T>
void Graph<T>::Print(){

	for(int i = 0; i < this->vertices.size(); i++){
		cout << this->vertices[i] << ": ";

		for(int j = 0; j < this->edges.size(); j++){
			
			if(this->isDigraph ? this->edges[j].u == this->vertices[i] : this->edges[j].Contains(this->vertices[i])){
				cout << this->edges[j].GetOtherV(this->vertices[i]) << " ";
			}
		}
		printf("\n");
	}
};
	// -- Constructors
	
template<class T>
Graph<T>::Graph(){
	this->vertices.clear();
	this->edges.clear();
	this->isDigraph = false;
};

template<class T>
Graph<T>::Graph(bool isDigraph){
	this->vertices.clear();
	this->edges.clear();
	this->isDigraph = isDigraph;
};