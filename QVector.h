#ifndef _QVECTOR
#define _QVECTOR

#define DEFAULT_SIZE 16

template <typename T>
class QVector {
private:
	T *_elems;
	int _size;
	void grow();
	void shrink();
public:
	QVector();
	QVector(int size);
	QVector(int size, T *elems);
	void add(T elem);
	void remove(int pos);
	void insert(T elem, int pos);
};

template <typename T>
QVector<T>::QVector() {
	this->_elems = new T[DEFAULT_SIZE];
	this->_size = DEFAULT_SIZE;
	this->_elemc = 0;
}

template <typename T>
QVector<T>::QVector(int size) {
	this->_elems = new T[size];
	this->_size = size;
	this->_elemc = 0;
}

template <typename T>
QVector<T>::QVector(int count, T *elems) {
	this->_elems = new T[count*2];
	this->_size = count*2;
	this->_elemc = count;
}

#endif
