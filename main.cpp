//Title Contact directory system with address
#include <iostream>
/*  
     Yohanis Feleke
  
    */
using namespace std;
struct Contact{ //used to create Single linked list of Contact
    //data
    string Name;
    int  phoneNumber;
    string Email;
    //contact pointer/
    Contact *next;
};
 Contact *start = NULL;
void registration();
void deleteContact();
void displayContacts();
void sortContacts();
void searchContact();
void coverpage();
void logo(){
cout<<"\t\t      _   _   _   _   _   _   _  "<<endl;
cout<<"\t\t     / \\ / \\ / \\ / \\ / \\ / \\ / \\ "<<endl;
cout<<"\t\t    ( C | o | n | t | a | c | t )"<<endl;
cout<<"\t\t     \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ "<<endl;
cout<<"\t\t  _   _   _   _   _   _   _   _   _     "<<endl;
cout<<"\t\t / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\"<<endl;
cout<<"\t\t( D | i | r | e | c | t | o | r | y )"<<endl;
cout<<"\t\t \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/"<<endl;
cout<<"\t              _   _   _   _   _   _  "<<endl;
cout<<"\t\t     / \\ / \\ / \\ / \\ / \\ / \\  "<<endl;
cout<<"\t\t    ( S | y | s | t | e | m )"<<endl;
cout<<"\t\t     \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ "<<endl;
}
int main() {
	system("color a");
	logo();
    int choice;

    do {
        cout<<"\t----------------------------------------------------"<<endl;
        cout<<"\t------------------------MENU------------------------"<<endl;
        cout<<"\t----------------------------------------------------"<<endl;
        cout << "\t\t1.registration and Save Contact" << endl;
        cout << "\t\t2. Delete a contact" << endl;
        cout << "\t\t3.Display all contacts" << endl;
        cout << "\t\t4. Sort contacts by name" << endl;
        cout << "\t\t5. Search for a contact by name" << endl;
        cout <<  "\t\t6. coverpage"<<endl;
        cout << "\t\t7. Exit" << endl;
        cout << "\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            	registration();
                break;
            case 2:
            	deleteContact();
                break;
            case 3:
                displayContacts();
                break;
            case 4:
                sortContacts();
                break;
            case 5:
                searchContact();
                break;
             case 6:
                coverpage();
                break;
            case 7:
                cout << "Exiting the Contact directory." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
void registration(){
void SaveAtFirst();
void SaveAtEnd();
    int regOption;
    cout<<"\t-------------------------------------------"<<endl;
    cout<<"\t-----------Save Menu-----------------------"<<endl;
    cout<<"\t\t1. Save at first."<<endl;
    cout<<"\t\t2. Save at end."<<endl;
    cout<<"\t\t   Enter your option: ";
    cin>>regOption;
    cout<<"\t-------------------------------------------"<<endl;
    cout<<"\t-------------------------------------------"<<endl;



}
void SaveAtFirst(){
    Contact *temp1 = new  Contact;
   cout<<"\t\tEnter name: ";
    cin>>temp1->Name;
    cout<<"\t\tEnter phone number: ";
    cin>>temp1->phoneNumber;
    cout<<"\t\tEnter Email Address: ";
    cin>>temp1->Email;
    cout<<"\t\tBooked successfully :)\n";
    temp1->next=NULL;
    if(start == NULL){
        start = temp1;
    }
    else{
        temp1->next=start;
        start= temp1; 
    }
}
void SaveAtEnd(){
    Contact *temp1 = new  Contact;
    cout<<"\t\tEnter name: ";
    cin>>temp1->Name;
    cout<<"\t\tEnter phone number: ";
    cin>>temp1->phoneNumber;
    cout<<"\t\tEnter Email Address: ";
    cin>>temp1->Email;
    cout<<"\t\tBooked successfully :)\n";
    temp1->next=NULL;
    if(start==NULL)
        start = temp1;
    else
    {
     Contact *temp2 = start;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
}
    void deleteContact() {
     	string targetName;
    	cout<<"\t\tEnter contact's Name: ";
     	cin>>targetName;
        Contact* temp1 = start;
        Contact* temp2 = NULL;
        while (temp1 != NULL) {
            if (temp1->Name ==targetName ) {
                if (temp2 == NULL) {
                    start = temp1->next;
                } else {
                    temp2->next = temp1->next;
                }
                delete temp1;
                cout << "\t\tContact deleted from the directory." << endl;
                return;
            }
            temp2 = temp1;
            temp1 = temp1->next;
        }
        cout << "\t\tContact not found in the directory." << endl;
    }
        // Function to display all contacts in the Contact directory
    void displayContacts() {
    //print all  information
    Contact*temp1;
    if(start == NULL)
        cout<<"\t\t***There is no registration found!***\n";//list is empty
    else {
        temp1= start;
        while(temp1 != NULL){
            cout<<"\t--------------------------------------------\n";
            cout<<"\t\tName : "<<temp1->Name<<endl; //data
            cout<<"\t\tPhone Number : "<<temp1->phoneNumber<<endl; //data
            cout<<"\t\tEmail : "<<temp1->Email<<endl; //data
            temp1 = temp1->next; 
        }
    }
}
    // Function to sort contacts by name using the bubble sort algorithm
	 void sortContacts(){
	 	void sortbyASC();
	 	void sortbyDESC();
    int sortOption;
    cout<<"\t-------------------------------------------"<<endl;
    cout<<"\t-----------sort Menu-----------------------"<<endl;
    cout<<"\t\t1. sorting by Ascending."<<endl;
    cout<<"\t\t2. sorting by Descending."<<endl;
    cout<<"\t\t   Enter your option: ";
    cin>>sortOption;
    cout<<"\t-------------------------------------------"<<endl;
    cout<<"\t-------------------------------------------"<<endl;


    if(sortOption==1){
        sortbyASC();
    }
    else if(sortOption==2){
        sortbyDESC();
    }
    else{
        cout<<"\t\tWrong Input! \n\t\tPlease Try Again!\n";
    }

}
    // Function to sort contacts by name using the bubble sort algorithm BY ASCENDING
    void sortbyASC() {
        Contact* temp1, *temp2;
        string tempName,tempEmail;
        int tempPhone;
        if (start== NULL) {
            cout << "\t\tNo contacts to sort." << endl;
        }
        else {
        for (temp1 = start; temp1->next != NULL; temp1 = temp1->next) {
            for (temp2= temp1->next; temp2 != NULL; temp2 = temp2->next) {
                if (temp1->Name > temp2->Name) {
                    tempName = temp1->Name;
                    tempPhone=temp1->phoneNumber;
                    tempEmail=temp1->Email;
                    temp1->Name = temp2->Name;
                    temp1->phoneNumber=temp2->phoneNumber;
                    temp1->Email=temp2->Email;
                    temp2->Name = tempName;
                    temp2->phoneNumber=tempPhone;
                    temp2->Email=tempEmail;
                }
            }
        }
        cout << "\t\tContacts sorted by name." << endl;
    }
}
    // Function to sort contacts by name using the bubble sort algorithm BY DESCENDING
   void sortbyDESC() {
        Contact* temp1, *temp2;
        string tempName,tempEmail;
        int tempPhone;
        if (start== NULL) {
            cout << "\t\tNo contacts to sort." << endl;
        }
        else {
        for (temp1 = start; temp1->next != NULL; temp1 = temp1->next) {
            for (temp2= temp1->next; temp2 != NULL; temp2 = temp2->next) {
                if (temp1->Name < temp2->Name) {
                    tempName = temp1->Name;
                    tempPhone=temp1->phoneNumber;
                    tempEmail=temp1->Email;
                    temp1->Name = temp2->Name;
                    temp1->phoneNumber=temp2->phoneNumber;
                    temp1->Email=temp2->Email;
                    temp2->Name = tempName;
                    temp2->phoneNumber=tempPhone;
                    temp2->Email=tempEmail;
                }
            }
        }
        cout << "\t\tContacts sorted by name." << endl;
    }
}
 // Function to search for a contact by name
    void searchContact() {
    	    //search by name
        string targetName;
        cout<<"\t\tEnter contact Name: ";
    	cin>>targetName;
        Contact* temp1 = start;
        while (temp1 != NULL) {
            if (temp1->Name ==targetName) {
            cout<<"\t---------------------------------------------\n";
			cout<<"\t\tName : "<<temp1->Name<<endl;
			cout<<"\t\tPhone Number : "<<temp1->phoneNumber<<endl;
            cout<<"\t\tEmail : "<<temp1->Email<<endl;
                return;
            }
            temp1 = temp1->next;
        }
        cout << "\t\tContact not found in the Contact directory." << endl;
    }
void coverpage(){
	cout<<"\t*********************************************************"<<endl;
    cout<<"\t*------------------------------------------------------**"<<endl;
    cout<<"\t*------------------------------------------------------**"<<endl;
    cout<<"\t\t\t BONGA \t UNIVERSTIY  "<<endl;
    cout<<"\t\t COLLAGE OF ENGINEERING AND TECHNOLOGY"<<endl;
    cout<<"\t\t DEPARTMENT OF COMPUTER SCIENCE"<<endl;
    cout<<"\t\t DATA STRUCTURES AND ALGORITHM"<<endl;
    cout<<"\t\t PROJECT TITLE :CONTACT_DIRECTORY_SYSTEM "<<endl;
    cout<<"\t\t GROUP : 3 "<<endl;
    cout<<"\t\t *Group Members*  "<< "\t" <<"ID number"<<endl;
    cout<<"\t\t1. YOHANIS FELEKE "<<"\t" <<"RU1726/14"<<endl;
    cout<<"\t*------------------------------------------------------**"<<endl;
    cout<<"\t*------------------------------------------------------**"<<endl;
    cout<<"\t*********************************************************"<<endl;
}
