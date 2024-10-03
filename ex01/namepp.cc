#include <iostream>
#include <string>

using namespace std;

int main() {
    string first_name, middle_name, last_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your middle name: ";
    getline(cin, middle_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);

    // struct output message
    string message = "Hello, " + first_name + " " + middle_name + " " + last_name + "!";

    // change frame length to 4 + message length
    int frame_length = message.length() + 4; // add space and * for both side of message

    // print frame
    for(int i = 0; i < frame_length; i++) {
        cout << "*";
    }

    cout << endl;

    // print space
    cout << "* " << string(message.length(), ' ') << " *" << endl;

    // print message
    cout << "* " << message << " *" << endl;

    // print space
    cout << "* " << string(message.length(), ' ') << " *" << endl;

    for(int i = 0; i < frame_length; i++) {
        cout << "*";
    }

    cout << endl;

    return 0;
}

/**
 * Output of long name debug:

 Enter your first name: asdfasdfasdf
 Enter your middle name: asdfasdfasdf
 Enter your last name: asdfasdfasdf
 **************************************************
 *                                                *
 * Hello, asdfasdfasdf asdfasdfasdf asdfasdfasdf! *
 *                                                *
 **************************************************

 */

/**
 * Output of jp name debug:
 Enter your first name: ロッシ
 Enter your middle name: アンディ
 Enter your last name: 拓也
 *****************************************
 *                                       *
 * Hello, ロッシ アンディ 拓也! *
 *                                       *
 *****************************************


 */
