#ifndef LIST_H
#define LIST_H
class List{
private:
	typedef struct Node{
		int dato;
		Node* siguiente;
	}* NodePtr;
		
	NodePtr head;
	NodePtr curr;
	NodePtr temp;
public:
	List();
	void agregarNode(int);
	void eliminarNode(int);
	void mostrar();
	
};
#endif
