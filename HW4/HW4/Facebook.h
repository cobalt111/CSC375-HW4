#pragma once

#include "Queue.h"
#include <string>
#include <iostream>


//Facebook Class:
//You’re going to #include the Queue class in your Facebook class that will have the
//following functions and data members:

//Functions:

//1. addFriend(): a given Friend should be added to the Friend list which is a Queue
//object. That means when you call this function enqueue function from Queue
//should be triggered and the new Friend should be added to the end of your
//Queue.

//2. removeFriend(): you don’t have to pass a user name, but whenever this function
//is called the dequeue function from Queue should be triggered. That means the
//Friend at the front should be removed from the list and his/her name should be
//provided.

//3. printFriendsF(): this should trigger the print() function of Queue so that you can
//print all the Friends from front to the end.

//4. printFriendsR(): this should trigger the reversePrint() function of Queue so that
//you can print all the Friends from end to the front.

//5. firstFriend(): this should trigger the peek() function of Queue so that you can
//print the Friend who was added first.

//6. resetFriends(): this should trigger the makeEmpty() function of Queue so that
//your list can be emptied.

//7. checklist(): this should trigger the isEmpty() function of Queue to verify that your
//list is empty.

//Data members:

//8. “int numofFriends” to keep track of the total number of Friends

//9. “DataType user” who’s going to be followed.

//10. “Queue<DataType>Friendlist” (this is the Friendlist in a Queue form, not an
//array!)



// Uses the struct Profile made in earlier assignments
struct Profile {
	string user;
	string state;

	// overloaded operator for printing out the contents of info
	friend ostream& operator << (ostream& os, Profile profile) {
		os << endl << profile.user << endl << profile.state;
		return os;
	}
};


// added Facebook class
template <class DataType>
class Facebook {
public:
	Facebook();
	~Facebook();
	void addFriend(DataType newFriend);
	void removeFriend();
	void printFriendsF();
	void printFriendsR();
	DataType firstFriend();
	void resetFriends();
	bool checkList();
private:
	int numFriends;
	DataType user;
	Queue<DataType> friendList;
};

template<class DataType>
inline Facebook<DataType>::Facebook()
{
	numFriends = 0;
}

template<class DataType>
inline Facebook<DataType>::~Facebook()
{
}

template<class DataType>
inline void Facebook<DataType>::addFriend(DataType newFriend)
{
}

template<class DataType>
inline void Facebook<DataType>::removeFriend()
{
}

template<class DataType>
inline void Facebook<DataType>::printFriendsF()
{
}

template<class DataType>
inline void Facebook<DataType>::printFriendsR()
{
}

template<class DataType>
inline DataType Facebook<DataType>::firstFriend()
{
	return DataType();
}

template<class DataType>
inline void Facebook<DataType>::resetFriends()
{
}

template<class DataType>
inline bool Facebook<DataType>::checkList()
{
	return false;
}
