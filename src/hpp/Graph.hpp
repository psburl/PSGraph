
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

	for (typename std::map<string,t_Edge>::iterator it=this->Edges.begin(); it!=this->Edges.end(); ++it)
		Sum+= (it->second.Contains(v)) ? 1 : 0;

	return Sum;
};

/*Make a hashCode to insert a new edge */

template<class T>
string Graph<T>::MakeHash(t_Edge e){
	return e.ToString();
};

/* Verify if this Graph contains the Vertice v */

template<class T>
bool Graph<T>::ContainsVertice(T v){
	
	for(int i = 0; i < this->vertices.size(); i++){
		if(vertices[i] == v){
			return true;
		}
	}
	return false;
};

/* Insert a vertice in Graph if her not contains it */

template<class T>
void Graph<T>::InsertVertice(T v){
	
	if(!this->ContainsVertice(v)){
		this->vertices.push_back(v);

		this->SortVertices();
	}
};

/* Verify if this Graph contains the Edge e */

template<class T>
bool Graph<T>::ContainsEdge(t_Edge e){
	
	return (this->Edges.find(this->MakeHash(e))!= this->Edges.end());
};

/* Insert an Edge in Graph if her not contains it */

template<class T>
void Graph<T>::InsertEdge(t_Edge e){

	if(!this->ContainsEdge(e)){
		this->Edges.insert(std::pair<string,t_Edge>(this->MakeHash(e),e));
	}
};

/* Remove an Edge in Graph if her contains it */

template<class T>
void Graph<T>::RemoveEdge(t_Edge e){

	if(this->ContainsEdge(e)){
		this->Edges.erase(this->MakeHash());
	}
};

/* Verify if has an way from vertice u to vertice w */

template<class T>
bool Graph<T>::HasWay(T u, T w){

	map<T, bool> visits = map<T,bool>();

	ReachV(u, visits);

	return visits[w];
};

/* Reach the Graph - Complementary function of Graph<T>::HasWay */

template<class T>
void Graph<T>::ReachV(T v, map<T, bool>& visited){

	visited[v] = true;
	
	vector<T> neighboors = GetNeighboors(v);

	for(int i = 0; i < neighboors.size(); i++){

		if(!visited[neighboors[i]]){
			ReachV(neighboors[i], visited);
		}
	}
};

/* Sort the vertice vector **Is used ever a vertice is inserted */

template <class T>
void Graph<T>::SortVertices(){

	sort (this->vertices.begin(), this->vertices.begin() + this->vertices.size());
};

/* Get the Neighboors of vertice v */

template <class T>
vector<T> Graph<T>::GetNeighboors(T v){
	
	vector<T> neighboors = vector<T>();
	neighboors.clear();

	for (typename std::map<string,t_Edge>::iterator it=this->Edges.begin(); it!=this->Edges.end(); ++it){
		if(it->second.IsInitial(v, this->isDigraph)){
			neighboors.push_back(it->second.GetOtherV(v));
		}
	}
	return neighboors;
}

/* Print a representation of this Graph */

template<class T>
void Graph<T>::Print(){

	for(int i = 0; i < this->vertices.size(); i++){
		cout << this->vertices[i] << ": ";
		
		for (typename std::map<string,t_Edge>::iterator it=this->Edges.begin(); it!=this->Edges.end(); ++it){
			if(this->isDigraph ? it->second.u == this->vertices[i] : it->second.Contains(this->vertices[i])){
				cout << it->second.GetOtherV(this->vertices[i]) << " ";
			}
		}

		printf("\n");
	}
};
	// -- Constructors
	
template<class T>
Graph<T>::Graph(){
	this->vertices.clear();
	this->Edges.clear();
	this->isDigraph = false;
};

template<class T>
Graph<T>::Graph(bool isDigraph){
	this->vertices.clear();
	this->Edges.clear();
	this->isDigraph = isDigraph;
};