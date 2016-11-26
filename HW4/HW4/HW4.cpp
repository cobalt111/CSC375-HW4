#include "Facebook.h"
#include "Queue.h"
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>

//Main Program:
//
//Your main program should #include the Facebook class and read the presidents and
//their home states in the file attached. This implies that it should work with
//Queue<Profile> that we defined in earlier assignments.

using namespace std;

int main() {

	cout << "Main program starting..." << endl;
	// TODO finish main




	//1.As you read the presidents and their home states from the file, your addFriend()
	//function should enqueue them into the Friendlist. All presidents become
	//Friends.

	// Instagram object using Stack<Profile> to create a linked list
	Facebook<Profile> facebook;
	// placeholder profile
	Profile tempProfile;



	// reading from file
	ifstream inThisFile("presidentsWstates.txt");
	// placeholder string
	string currentString;


	// loop to populate the friends list. All presidents become enqueued in the list
	cout << endl << "Adding friends to list..." << endl;
	if (inThisFile.is_open())
	{
		while (getline(inThisFile, currentString))
		{
			stringstream ss(currentString);
			getline(ss, tempProfile.user, '\t');
			getline(ss, tempProfile.state, '\t');
			facebook.addFriend(tempProfile);
		}
	}


	//2.Call firstFriend() function to see the earliest president name and state (It should
	//be George Washington, VA) and print it on the screen.
	cout << endl << "The first friend is: " << endl;
	cout << facebook.firstFriend() << endl;



	//3.Call removeFriend() function and print the name and the home state of the
	//removed president. (we need to see George Washington, VA on the screen
	//again)
	cout << endl << "Removing first queued friend..." << endl;
	facebook.removeFriend();




	//4.Call printFriendsF() to display all the names with their states (You can use your
	//earlier print function)
	cout << endl << "Printing friends list from earliest to latest..." << endl;
	facebook.printFriendsF();

	//5.Call printFriendsR()to display all the names with their states in reverse order.
	cout << endl << "Printing friends list from latest to earliest..." << endl;
	facebook.printFriendsR();



	//6.Call resetFriends() to remove all Friends .
	cout << endl << "Removing all friends..." << endl;
	facebook.resetFriends();

	//7.Call checklist to verify that your Facebook object has an empty Friendlist and
	//report your finding with a message on the screen.
	if (facebook.checkList()) {
		cout << endl << "The friends list is empty." << endl;
	}
	else cout << endl << "The friends list is not empty." << endl;

	cout << endl << endl << "Program exiting..." << endl;


	return 0;
}





// this is debug code






//Queue<Profile> myQueue;
//
//Profile profile;
//Profile anotherProfile;
//Profile placeholder;
//
//profile.user = "Tim";
//profile.state = "MI";
//
//anotherProfile.user = "Hannibal";
//anotherProfile.state = "MO";
//
//myQueue.enqueue(profile);
//
//myQueue.print();
//
//myQueue.dequeue(placeholder);
//
//myQueue.print();
//
//myQueue.isEmpty();
//
//myQueue.enqueue(anotherProfile);
//
//myQueue.enqueue(profile);
//
//myQueue.reversePrint();