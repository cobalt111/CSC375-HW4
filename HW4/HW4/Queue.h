// queue.h -- class template for the linked list implementation of a queue
// note:  use of the copy constructor, overloaded assignment operator, or enqueue function
// can cause an exception to be thrown when heap memory is exhausted

#pragma once



template <class DataType>
struct Node {
	DataType info;
	Node<DataType> *next;
};

template <class DataType>
class Queue
{
public:
	Queue( );
	Queue( const Queue<DataType> & apqueue ); 
	~Queue( );
	Queue<DataType> & operator =( const Queue<DataType> & rqueue );
	void enqueue( const DataType & element );	

	// dequeues element and returns it in deqElement
	// returns false if called on an empty queue; otherwise returns true
	bool dequeue( DataType & deqElement );

	// returns element at the front of the queue into frontElement without removing it
	// returns false if called on an empty queue; otherwise returns true
	bool peek( DataType & frontElement );  	
	bool isEmpty( ) const;		// returns true if queue is empty
					// otherwise returns false
	void makeEmpty( );
private:
	Node<DataType> *front;
	Node<DataType> *back;
	Node<DataType> header;
	inline void deepCopy( const Queue<DataType> & original );
};

//#include "Queue.cpp"

template<class DataType>
inline Queue<DataType>::Queue()
{
	front = &header;
}

template<class DataType>
inline Queue<DataType>::Queue(const Queue<DataType> & apqueue)
{
}

template<class DataType>
inline Queue<DataType>::~Queue()
{
}

template<class DataType>
inline Queue<DataType>& Queue<DataType>::operator = (const Queue<DataType> & rqueue)
{
	// TODO: insert return statement here
}

template<class DataType>
inline void Queue<DataType>::enqueue(const DataType & element)
{
	// create new node to put the enqueued element in
	Node<DataType> *ptr = new Node<DataType>;

	//
}

template<class DataType>
inline bool Queue<DataType>::dequeue(DataType & deqElement)
{
	return false;
}

template<class DataType>
inline bool Queue<DataType>::peek(DataType & frontElement)
{
	return false;
}

template<class DataType>
inline bool Queue<DataType>::isEmpty() const
{
	return false;
}

template<class DataType>
inline void Queue<DataType>::makeEmpty()
{
}

template<class DataType>
inline void Queue<DataType>::deepCopy(const Queue<DataType>& original)
{
}
