#include <iostream>
#include <string>
using namespace std;
/*
    Pin Code Project -
        * Will require a specific code to access program.
        * After a certain amount of invalid tries, program will terminate.
        * After successful submission of PIN, will ask for user information and store it on a personal file.
        * Can have up to 4 different users on this program. 
        * Program made using GoTo statements.
        */

    struct UserInfo {
        string fullName;
        string majorInCollege;
        int ageUser;
        int studentID;
    } user1 , user2 , user3 , user4 , user5;

int main(){

    int PIN , attemptedTries = 0, age, ID, userCount = 0, userChoice;
    string answer, major, Name;

    cout << "=========================================================\n\n";
    cout << "Welcome to VolTech Industries. Please enter PIN Code : ";

    cin >> PIN;

    while(PIN != 2000) {                        // Meant to deny access to those who do not know the pin initially.
        
        if(attemptedTries == 3) {
            cout << "Maximum Tries Reached. Program will end.";
            return 0;
        }
        
        cout << "Incorrect Submission. Please try again. \n";
        cin >> PIN;
        
        attemptedTries++;
    }

    if(PIN == 2000){

        userInfo:               // Block statement add new users after the first intial run of the code. 
    
        if(userCount > 3) {
            cout << "Out of available users!";
            return 0;
        }

        cout << "========================\n\nWelcome To The Database.\n\n";
        cout << "We require all users to input information.\n\n";
        cout << "Please provide required information.\n\n";


        cin.ignore(numeric_limits<streamsize>::max(), '\n');    // Clears the input buffer and allows for successful input with space characters.

        cout << "FULL NAME : ";
        getline(cin, Name);


        cout << "MAJOR IN COLLEGE : ";
        getline(cin,major);

        cout << "AGE : ";
        cin >> age;

        cout << "ID NUMBER : ";
        cin >> ID;

        
    }
    
    userCount++;        // adds a User each time to keep track of how many users are registered on the program.

    switch (userCount)
    {
    case 1:
        user1.ageUser = age;
        user1.fullName = Name;
        user1.majorInCollege = major;
        user1.studentID = ID;
        goto repeatInfo;
    case 2:
        user2.ageUser = age;
        user2.fullName = Name;
        user2.majorInCollege = major;
        user2.studentID = ID;
        goto repeatInfo;
    case 3:
        user3.ageUser = age;
        user3.fullName = Name;
        user3.majorInCollege = major;
        user3.studentID = ID;
        goto repeatInfo;
    case 4:
        user4.ageUser = age;
        user4.fullName = Name;
        user4.majorInCollege = major;
        user4.studentID = ID;
        goto repeatInfo;
    }

        cout << "INFORMATION STORED. Would you like for information to be repeated? ";
        cin >> answer;

        if(answer == "Yes" || answer == "YES" || answer == "yes"){  // Statement to provide User Information if answered with "Yes", will provide information according to the UserCount counter.
            
            repeatInfo:

            if(userCount == 1) {
            cout <<"========================================================================\n";
            cout << "\nUser " << userCount << " Information : \nName : " << user1.fullName;
            cout << "\nAge = " << user1.ageUser << "\nMajor in College = " << user1.majorInCollege;
            cout << "\nStudentID = " << user1.studentID << "\n\n";
            }
                else if(userCount == 2) {
                cout <<"========================================================================\n";
                cout << "\nUser " << userCount << " Information : \nName : " << user2.fullName;
                cout << "\nAge = " << user2.ageUser << "\nMajor in College = " << user2.majorInCollege;
                cout << "\nStudentID = " << user2.studentID << "\n\n";
                }
                    else if(userCount == 3) {
                    cout <<"========================================================================\n";
                    cout << "\nUser " << userCount << " Information : \nName : " << user3.fullName;
                    cout << "\nAge = " << user3.ageUser << "\nMajor in College = " << user3.majorInCollege;
                    cout << "\nStudentID = " << user3.studentID << "\n\n";
                    }
                        else if(userCount == 4) {
                        cout <<"========================================================================\n";
                        cout << "\nUser " << userCount << " Information : \nName : " << user4.fullName;
                        cout << "\nAge = " << user4.ageUser << "\nMajor in College = " << user4.majorInCollege;
                        cout << "\nStudentID = " << user4.studentID << "\n\n";
                        }
                        
        }
            cout << "=======================================================================\n";
            cout << "Thank you for cooperating. Is there anything more you wish to do? \n\n";
            cout << "[1] ENTER NEW USER INFORMATION \n[2] REPEAT USER INFORMATION\n[3] TERMINATE PROGRAM\n\n";
            
            cin >> userChoice;

            switch (userChoice)
            {
            case 1:
                goto userInfo;
                break;
            case 2:
                goto repeatInfo;
                break;
            case 3:
                cout << "Thank you for entrusting us with your information. It will be secured accordingly.\n";
                cout << "==================================================================================";
                return 0;
            
            default:
                cout << "Invalid Choice, please try again. ";
                cin >> userChoice;
            }
            
    

    return 0;
}
