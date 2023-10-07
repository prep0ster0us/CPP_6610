//
// Created by ritwik on 10/6/2023.
//


#include <iostream>
#include <fstream>

using namespace std;

#define FILENAME ".\\Lab Work\\test.txt"

int main() {

    // input stream (to read)
    /*
    ifstream inf("test.txt");
    if(inf.is_open()) {
        cout << "File opened!" << endl;
    } else {
        cout << "File cannot be opened!" << endl;
    }
    inf.close()
    */

    // output stream (to write)
    /*
    ofstream out;
    out.open("C:\\Users\\ritwi\\CLionProjects\\CPP_6610\\Lab Work\\test.txt",ios::app);

    if(out.is_open()) {
        cout << "File opened!" << endl;
        out << "Here is some sample text to be included in the file!\n\n\nEND" << endl;
    } else {
        cout << "File cannot be opened!" << endl;
    }
    out.close();        //close data stream
     */


    // checking for state of stream and handling any errors
    /*
    ifstream in(FILENAME);
    int x;
    string temp;

    if(in.is_open()) {
        do {
            getline(in>>ws, temp);
            if (in.good()) {            // checks if all the operations performed on the stream didn't lead to any errors, so all is good to proceed for do more operations (returns true if everything okay)
                cout << "All good!" << endl;
                cout << temp << endl;
            } else if (in.eof()) {      // this function returns true if end of file is reached
                cout << "EOF reached!" << endl;
                break;
            } else {        // MOST probable case for this is bad data (eg: integer read-in but text found)
                cout << "bad data encountered!" << endl;
                break;
            }
        } while(true);
    }
    in.close();
*/

    // check for errors while reading in

    ifstream in(FILENAME);
    int x;
    string temp;
    if (in.is_open()) {
        cout << "can open file!" << endl;
        do {
            in >> x;
            if (in.good()) {
                // while the data encountered for each stream state (NOTE that using simple "<<", so each stream read state ends at whitespace),
                // if it's of right format (for us, an int) then simply read in and store in "x".
                cout << x << endl;

                /*
                 * NOTE that when reading from a file, as a programmer we need to know the format of data in the file.
                 * This is important to avoid errors while reading and storing the data in proper variables for access, instead of getting jarson data.
                */
            } else if (in.eof()) {
                break;
            } else {
                cout << "bad data encountered! -> ";

                in.clear();     //reset the stream back to a good state
                // since trying to read int and got string, reset state to when it was good
                // and store this "bad" data to a temp string
                getline(in, temp);
                cout << temp << endl;
            }
        } while (true);
    } else {
        cout << "cannot open file!" << endl;
    }
    in.close();
    return 0;
}