// queue.h -- class template for the linked list implementation of a queue
// note:  use of the copy constructor, overloaded assignment operator, or enqueue function
// can cause an exception to be thrown when heap memory is exhausted

#pragma once

//Queue Class:
//Write a Queue class using doubly-linked structure and implement the following
//functionalities.






// changed the Node struct to handle doubly linked functions
template <class DataType>
struct Node {
	DataType info;

	Node<DataType> *next;
	// added previous pointer to point to previous Node in list;
	Node<DataType> *previous;
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

	// added these two functions to queue.h
	void print();
	void reversePrint();
private:
	Node<DataType> *front;
	Node<DataType> *back;
	Node<DataType> header;

	// added current pointer to "return" data with
	Node<DataType> *current;

	inline void deepCopy( const Queue<DataType> & original );
};

//#include "Queue.cpp"

template<class DataType>
inline Queue<DataType>::Queue()
{
	// added initialization
	front = back = current = &header;
}

template<class DataType>
inline Queue<DataType>::Queue(const Queue<DataType> & apqueue)
{
	// added deepCopy function
	deepCopy(apqueue);
}

template<class DataType>
inline Queue<DataType>::~Queue()
{
	// added makeEmpty
	makeEmpty();
}

// overloaded operator to assign queues
template<class DataType>
inline Queue<DataType>& Queue<DataType>::operator = (const Queue<DataType> & rqueue)
{
	if ((*this) == &rqueue)
		return (*this);

	makeEmpty();
	deepCopy(rqueue);
	return (*this);
}





// 1. enqueue (inserts element to the end)
template<class DataType>
inline void Queue<DataType>::enqueue(const DataType & element)
{
	// create new node to put the enqueued element in
	Node<DataType> *ptr = new Node<DataType>;

	// place element's data in the new node
	ptr->info = element;

	// point the back node's next towards the new pointer made
	back->next = ptr;

	// move the back pointer so that it points to the end node
	back = ptr;
}




// 2. dequeue (removes the front element and provides content)
template<class DataType>
inline bool Queue<DataType>::dequeue(DataType & deqElement)
{
	// early exit if the queue is empty
	if (front == back) {
		return false;
	}
	
	// create pointer prepare for node deletion;
	Node<DataType> *ptr = front->next;
	
	// put ptr->info into location deqElement
	deqElement = ptr->info;

	// move the header node's next around the element to be deleted
	front->next = ptr->next;

	// delete the element at front of queue
	delete ptr;
	
	// upon success
	return true;
}


// 5. peek (provides the element sitting at the top/front, but does not remove)
template<class DataType>
inline bool Queue<DataType>::peek(DataType & frontElement)
{
	return false;
}

// 3. isEmpty (checks whether the Queue is empty or not)
template<class DataType>
inline bool Queue<DataType>::isEmpty() const
{
	return false;
}


// 4. makeEmpty dequeues the entire queue
template<class DataType>
inline void Queue<DataType>::makeEmpty()
{
}

// 6. print (prints all the elements from front to the end)
template<class DataType>
inline void Queue<DataType>::print()
{
}

// 7. reversePrint(prints all the elements from end to the front with the help of back
// pointers inside your nodes)
template<class DataType>
inline void Queue<DataType>::reversePrint()
{
}

template<class DataType>
inline void Queue<DataType>::deepCopy(const Queue<DataType>& original)
{
}
