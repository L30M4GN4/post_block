#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main() {

	/* Variables */
	///////////////////////////////////////////////////////////////////////////////////
	string full_name, destin_name, destin_addr, postcode, frag, dec_val, sum; 
	string post_office_number, post_worker_id, post_office_postcode, tracking_number;
	int i;
	///////////////////////////////////////////////////////////////////////////////////

	cout << "Enter full_name" << endl;
	cin >> full_name;
	cout << endl;

	cout << "Enter destin_name" << endl;
	cin >> destin_name;
	cout << endl;

	cout << "Enter destin_addr" << endl;
	cin >> destin_addr;
	cout << endl;

	cout << "Enter postcode" << endl;
	cin >> postcode;
	cout << endl;

	cout << "Enter frag" << endl;
	cin >> frag;
	cout << endl;

	cout << "Enter dec_val" << endl;
	cin >> dec_val;
	cout << endl;

	cout << "Enter sum" << endl;
	cin >> sum;
	cout << endl;


	cout << "Enter post_office_number" << endl;
	cin >> post_office_number;
	cout << endl;

	cout << "Enter post_worker_id" << endl;
	cin >> post_worker_id;
	cout << endl;

	cout << "Enter post_office_postcode" << endl;
	cin >> post_office_postcode;
	cout << endl;

	cout << "Enter tracking_number" << endl;
	cin >> tracking_number;
	cout << endl;

	ofstream file;

	file.open("fi", ios_base::app);
	
	char* argv = new char;
	strcpy (argv, "/home/leo/Programming/Aes256/build/utils/encrypt ");
	strcat (argv, full_name.c_str());
	strcat (argv, " fi result");
	cout << argv;
	file << full_name << "|" << destin_name << "|" << postcode << "|" << frag << "|"  << dec_val << "|"  << sum << "|"  << post_office_number << "|"  << post_worker_id << "|"  << post_office_postcode << "|"  << tracking_number << "|" ;
	sleep(3); 
	/*ENCRYPTION*/
	/////////////////////////////////////////////////
//"/home/leo/Programming/Aes256/build/utils/encrypt 123 /home/leo/Programming/post/lol result"
	//printf ("Executing file...\n");
	//i = system (argv);                 
}



