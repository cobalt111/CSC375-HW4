#pragma once

#include "Queue.h"
#include <string>
#include <iostream>


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
