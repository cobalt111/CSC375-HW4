#include "Facebook.h"
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>

//Main Program:
//
//Your main program should #include the Facebook class and read the presidents and
//their home states in the file attached. This implies that it should work with
//Queue<Profile> that we defined in earlier assignments.
//Additionally, your main program should satisfy the following conditions:

using namespace std;

int main() {

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
	cout << "Adding followers to list..." << endl;
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





	//3.Call removeFriend() function and print the name and the home state of the
	//removed president. (we need to see George Washington, VA on the screen
	//again)

	//4.Call printFriendsF() to display all the names with their states (You can use your
	//earlier print function)

	//5.Call printFriendsR()to display all the names with their states in reverse order.

	//6.Call resetFriends() to remove all Friends .

	//7.Call checklist to verify that your Facebook object has an empty Friendlist and
	//report your finding with a message on the screen.


	return 0;
}