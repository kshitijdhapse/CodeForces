#include <iostream>
#include <fstream>
#include <climits>
#include <sstream>
using namespace std;

struct Student
{
    int roll_no;
    string name;
    int division;
    string address;
};
class StudentData
{
public:
    Student record;
    int num_student = 1;

public:
    void newFile();
    void clearFile();
    void add();
    void display();
    void search();
    void delete_record();
    void modify();

    StudentData()
    {
        clearFile();
        newFile();
    }
};
void StudentData::newFile()
{
    ofstream obj("Student_Database.txt");
    obj << "Roll No\t\tName\t\tDivision\tAddress" << endl;
    obj.close();
    cout << "\n\nNew File Created Succesfully!!!" << endl;
    return;
}
void StudentData::clearFile()
{
    ofstream obj("Student_Database.txt", ios::trunc);
    cout << "\n\nFile Cleared SuccessFully!!!";
    obj.close();
}
void StudentData::add()
{
    cout << "\nEnter Record " << num_student << endl;
    ofstream obj;
    obj.open("Student_Database.txt", ios::app);
    cout << "\nEnter Roll No : ";
    cin >> record.roll_no;
    cout << "Enter Name : ";
    cin >> record.name;
    cout << "Enter Division : ";
    cin >> record.division;
    cout << "Enter Address : ";
    cin >> record.address;

    num_student++;
    obj << record.roll_no << "\t\t" << record.name << "\t\t" << record.division << "\t\t" << record.address << endl;
    obj.close();
}
void StudentData::display()
{
    ifstream obj;
    obj.open("Student_Database.txt");
    if (obj.is_open())
    {
        string line;
        while (getline(obj, line))
        {
            cout << line << endl;
        }
        obj.close();
    }
    else
    {
        cout << "File not Found";
    }
    cout << endl;
}
void StudentData::search()
{
    int rn;
    cout << "\nEnter Roll No to Be Found : ";
    cin >> rn;
    ifstream obj;
    obj.open("Student_Database.txt");
    if (obj.is_open())
    {
        int j = 0;
        string line;
        while (getline(obj, line))
        {
            string arr[4];
            int i = 0;
            stringstream input(line);
            while (input.good() && i < 4)
            {
                input >> arr[i];
                i++;
            }
            if (to_string(rn) == arr[0])
            {
                cout << "\n\nSearch Succesful!!! \n\nRecord Found at Position " << j << "\n\nRecord : ";
                for (int i = 0; i < 4; i++)
                {
                    cout << arr[i] << " ";
                }
                return;
            }
            j++;
        }
        cout << "\nRecord Not Found";
        obj.close();
    }
    else
    {
        cout << "File not Found";
    }
    cout << endl;
}
void StudentData::delete_record()
{
    int rn;
    cout << "\nEnter Roll No to Be Deleted : ";
    cin >> rn;
    ifstream obj;
    ofstream temp("temp_samp.txt");
    obj.open("Student_Database.txt");
    if (obj.is_open())
    {
        string line;
        while (getline(obj, line))
        {
            string arr[4];
            int i = 0;
            stringstream input(line);
            while (input.good() && i < 4)
            {
                input >> arr[i];
                i++;
            }
            if (to_string(rn) != arr[0])
            {
                temp << line << endl;
            }
        }
        cout << "\nData Deleted Successfully!!!";
        obj.close();
        temp.close();
        remove("Student_Database.txt");
        rename("temp_samp.txt", "Student_Database.txt");
    }
    else
    {
        cout << "File not Found";
    }
    cout << endl;
}
void StudentData::modify()
{
    int rn;
    cout << "\nEnter Roll No of data to be Modified : ";
    cin >> rn;
    ifstream obj;
    ofstream temp("temp_samp.txt");
    obj.open("Student_Database.txt");
    if (obj.is_open())
    {
        string line;
        while (getline(obj, line))
        {
            string arr[4];
            int i = 0;
            stringstream input(line);
            while (input.good() && i < 4)
            {
                input >> arr[i];
                i++;
            }
            if (to_string(rn) != arr[0])
            {
                temp << line << endl;
            }
            else
            {
                cout << "\n\nEnter Modified Data : ";
                cout << "\nEnter Roll No : ";
                cin >> record.roll_no;
                cout << "Enter Name : ";
                cin >> record.name;
                cout << "Enter Division : ";
                cin >> record.division;
                cout << "Enter Address : ";
                cin >> record.address;

                temp << record.roll_no << "\t\t" << record.name << "\t\t" << record.division << "\t\t" << record.address << endl;
            }
        }
        cout << "\nData Modified Successfully!!!";
        obj.close();
        temp.close();
        remove("Student_Database.txt");
        rename("temp_samp.txt", "Student_Database.txt");
    }
    else
    {
        cout << "File not Found";
    }
    cout << endl;
}
int main()
{
    StudentData Stud;
    bool go = true;
    while (go)
    {
        cout << "\n------------Menu--------------";
        cout << "\n\n1.Create New File";
        cout << "\n2.Add Record";
        cout << "\n3.Display Record";
        cout << "\n4.Delete Record";
        cout << "\n5.Search Record";
        cout << "\n6.Modify Record";
        cout << "\n7.Clear File";
        cout << "\n8.Exit";
        cout << "\n\nChoose an Option : ";
        int n;
        cin >> n;

        switch (n)
        {
        case 1:
            Stud.newFile();
            break;
        case 2:
            Stud.add();
            break;
        case 3:
            Stud.display();
            break;
        case 4:
            Stud.delete_record();
            break;
        case 5:
            Stud.search();
            break;
        case 6:
            Stud.modify();
            break;
        case 7:
            Stud.clearFile();
            break;
        case 8:
            go = false;
            cout << "\n-----------------Thank You-------------------";
            break;
        default:
            cout << "\n\nInvalid Input";
        }
    }
    return 0;
}