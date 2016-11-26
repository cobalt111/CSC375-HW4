#pragma once

#include "Queue.h"
#include <string>
#include <iostream>


// Uses the struct Profile made in earlier assignments
struct Profile {
	std::string user;
	std::string state;

	// overloaded operator for printing out the contents of info
	friend std::ostream& operator << (std::ostream& os, Profile profile) {
		os << std::endl << profile.user << std::endl << profile.state;
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
	//TODO figure out what do with placeholder
	DataType placeholder;
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


// 1. addFriend(): a given Friend should be added to the Friend list which is a Queue
// object. That means when you call this function enqueue function from Queue
// should be triggered and the new Friend should be added to the end of your
// Queue.
template<class DataType>
inline void Facebook<DataType>::addFriend(DataType newFriend)
{
	friendList.enqueue(newFriend);
	numFriends++;
}

//2. removeFriend(): you don’t have to pass a user name, but whenever this function
//is called the dequeue function from Queue should be triggered. That means the
//Friend at the front should be removed from the list and his/her name should be
//provided.
template<class DataType>
inline void Facebook<DataType>::removeFriend()
{
	friendList.dequeue(placeholder);
	numFriends--;
}

//3. printFriendsF(): this should trigger the print() function of Queue so that you can
//print all the Friends from front to the end.
template<class DataType>
inline void Facebook<DataType>::printFriendsF()
{
	friendList.print();
}

//4. printFriendsR(): this should trigger the reversePrint() function of Queue so that
//you can print all the Friends from end to the front.
template<class DataType>
inline void Facebook<DataType>::printFriendsR()
{
	friendList.reversePrint();
}

//5. firstFriend(): this should trigger the peek() function of Queue so that you can
//print the Friend who was added first.
template<class DataType>
inline DataType Facebook<DataType>::firstFriend()
{
	placeholder = friendList.peek();
	return placeholder;
}

//6. resetFriends(): this should trigger the makeEmpty() function of Queue so that
//your list can be emptied.
template<class DataType>
inline void Facebook<DataType>::resetFriends()
{
	friendList.makeEmpty();
	numFriends = 0;
}

//7. checklist(): this should trigger the isEmpty() function of Queue to verify that your
//list is empty.
template<class DataType>
inline bool Facebook<DataType>::checkList()
{
	return friendList.isEmpty();
}
