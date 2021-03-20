

#include <iostream>
#include <string>
#include <fstream> 
#include <iomanip>
using namespace std;

class Student {
public:
    char grade;
    string name;
    int wdd_marks , qa_marks, algo_marks, applied_marks;
    int id;
    int average;

public:
    void get_student_info();
    void show_Allstudent_info(); // show specific student
    void calculate_average_grade();
    void calculate_letter_grade();
    void create_student_record();
    void show_a_record();
};

// have to reference the function with the class name if the function is getting
// futher made outside the class

/*******************Collecting information********************
use getline with strings or i will get an infinite loop
*************************************************************/
void Student::get_student_info() {
    cout << "Enter ID of Student:";
    cin >> id;
    cout << "Enter name of student: ";
    
    cin.ignore();
    getline(cin, name);
    cout <<endl<< "Enter the specific marks: " << endl;
    cout << "Enter the Web Development marks: ";
    cin >> wdd_marks;
    cout << "Enter the Software testing marks: ";
    cin >> qa_marks;
    cout << "Enter the Algorithm Design marks: ";
    cin >> algo_marks;
    cout << "Enter the Applied Programming marks: ";
    cin >> applied_marks;
    cout << endl;
    calculate_average_grade();
    calculate_letter_grade();

    ofstream file ("file.csv", ios::app);
    if (file.is_open()) {
        file << id <<","<< name << "," << wdd_marks << "," << qa_marks << "," << algo_marks << "," << applied_marks << "," << grade <<endl;
    }
    file.close();
    cout << "Note! A record for " << name << " has been created" << endl;
};


void Student::calculate_average_grade() {
    average = (wdd_marks + qa_marks + algo_marks + applied_marks) / 4;

    
};
void Student::calculate_letter_grade() {

   //Getting an A
    if (average > 65) {
        if (average > 72) {
            if (average > 82) {
                if (average > 92) {
                    grade = 'A';
                }
                else {
                    grade = 'B';
                }

            }
            else {
                grade= 'C';
            }

        }
        else {
            grade= 'D';
        }
    }
    else {
        grade= 'F';
    }


};
/************************Display Student information*********************
have to get it so that a specific student can be selected
have to call these two function so that average is calculated 
and letter grade is calculated
************************************************************************/
void Student::show_Allstudent_info() {
  
    ifstream myFile;
    myFile.open("file.csv");

    //This creates the header when displayed
    cout <<endl<< "ID of Student" << setw(20) << "Name of Student" << setw(15) << "Grade"<< endl;
    cout << "________________________________________________" << endl;

    while (myFile.good()) {

        //create place holders for the data read before every comma
        string id;
        string name;
        string  wdd_marks;
        string qa_marks;
        string algo_marks;
        string applied_marks;
        string grade;

        //getting each value in the csv by column and saving it in a varible
        getline(myFile, id, ',');
        getline(myFile, name, ',');
        getline(myFile, wdd_marks, ','); 
        getline(myFile, qa_marks, ',');
        getline(myFile, algo_marks, ',');
        getline(myFile, applied_marks, ',');
        getline(myFile, grade, '\n');

        //Display all the Entries in the csv file
        cout <<setw(6)<< id << setw(25)<< name << setw(15) << grade << endl;
    }
    
   

};
/***********************************************************************
Selecting a specific reord within the csv file

******/
void Student::show_a_record() {
    ifstream myFile;
    myFile.open("file.csv");

    string search_id;
    cout << endl << "Enter the ID of the Student: ";
    cin >> search_id;
    cout << endl;

    //This creates the header when displayed
    cout<< "ID of Student" <<setw(20)<< "Name of Student" << setw(10) << "Web" << setw(20) <<"Sofware Testing"<< setw(20)<<
        "Algo Design" << setw(20) << "Applied Pro." <<setw(15) << "Grade" << endl;
    cout << "_____________________________________________________________________________________________________________________" << endl;

    while (myFile.good()) {

        //create place holders for the data read before every comma
        string id;
        string name;
        string  wdd_marks;
        string qa_marks;
        string algo_marks;
        string applied_marks;
        string grade;

        //getting each value in the csv by column and saving it in a varible
        getline(myFile, id, ',');
        getline(myFile, name, ',');
        getline(myFile, wdd_marks, ',');
        getline(myFile, qa_marks, ',');
        getline(myFile, algo_marks, ',');
        getline(myFile, applied_marks, ',');
        getline(myFile, grade, '\n');


        if (search_id == id) {
            cout << setw(6) << id << setw(25) << name << setw(11) << wdd_marks<< setw(15) << qa_marks 
                 << setw(20)<< algo_marks<< setw(20) << applied_marks <<setw(20)<< grade << endl;
        }


        //Display all the Entries in the csv file
        
    }
}

/***********************************************************************
Creating student record inside of a file
make sure #include <fstream> for writing and reading to a file.
***/

void Student::create_student_record() {
    //ofstream writer("file.txt");
    //writer << get_student_info();

};


int main()
{
    Student student;
    int option;
    do {

        cout << "==========Menu==========" << endl;
        cout << "1. Create Student Record" << endl;
        cout << "2. Display all student records" << endl;
        cout << "3. Display a student record" << endl;
        cout << "4. Update a record" << endl;
        cout << "5. Delete a record" << endl;
        cout << "6. Exit" << endl;
        cout << "Please Select  an Option: ";
        cin >> option;


        switch (option) {
        case 1:
            student.get_student_info();
            break;
        case 2:
            student.show_Allstudent_info();
            break;  
        case 3:
            student.show_a_record();
        };
        
    } while (option != 6);
    cout << "You have Exited!!" << endl;
};


