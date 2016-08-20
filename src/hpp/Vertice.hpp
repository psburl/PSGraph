
	// -- Methods
template <class T>
string Vertice<T>::ToString(){
	return to_string(this->u);
};


	// -- Gets --
template <class T>
T Vertice<T>::GetAlias(){
	return this->alias;
};

	// -- Constructors --

template <class T>
Vertice<T>::Vertice(){

};

template <class T>
Vertice<T>::Vertice(T alias){
	this->alias = alias;
};
