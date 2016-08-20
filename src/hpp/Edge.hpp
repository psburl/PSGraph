
	// -- Methods


template <class T>
vector<T> Edge<T>::GetEdge(){

	vector<T> vertices;
	vertices.push_back(this->u);
	vertices.push_back(this->w);
	return vertices;
};

template <class T>
string Edge<T>::ToString(){

	string output;
	stringstream str;
	str << this->u.GetAlias() << "-" << this->w.GetAlias();
	str >> output;
	return output;
};

	// -- Constructors --

template <class T>
Edge<T>::Edge(T u){
	this->u = u;
};


template <class T>
Edge<T>::Edge(T u, T w){
	this->u = u;
	this->w = w;
};
