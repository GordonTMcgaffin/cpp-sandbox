#include <iostream>
#include <fstream> // File stream
#include <ctime>

using namespace std;

int main()
{

    ofstream MyOutputFile("Files/MyFile.txt"); // Output File Stream
    MyOutputFile << "This is the first of many lines I am writng to a file in C++!\n";
    MyOutputFile << "I am excited to learn C++!\n";
    MyOutputFile.close();

    string line;
    ifstream MyInputFile("Files/MyFile.txt"); // Input File Stream

    while (getline(MyInputFile, line))
    {
        cout << line << endl;
    }

    cout << "==============================================\n";

    fstream MyFile("Files/MyNewFile.txt", ios::in | ios::out | ios::trunc); // Both Input and Output File Stream
    string FileLine;

    time_t timestamp;
    time(&timestamp);

    MyFile << "The current time is ";
    MyFile << ctime(&timestamp); // Can also do it like this -> time_t timestamp = time(NULL);

    struct tm datetime;

    time(&timestamp);

    datetime.tm_year = 2026 - 1900; // Number of years since 1900
    datetime.tm_mon = 12 - 1;       // Number of months since January
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    // Daylight Savings must be specified
    // -1 uses the computer's timezone setting
    datetime.tm_isdst = -1;
    timestamp = mktime(&datetime);

    MyFile << "The current year is ";
    MyFile << ctime(&timestamp); // Can also do it like this -> time_t timestamp = time(NULL);

    MyFile << "This is the second of many lines I am writng to a file in C++!\n";
    MyFile << "I am excited to learn C++!\n";

    // At this point the MyFile Pointer points to the end of the file. We reset the pointer to the start of the file.
    MyFile.seekg(0);

    while (getline(MyFile, FileLine))
    {
        cout << FileLine << endl;
    }

    MyFile.close();

    return 0;
}