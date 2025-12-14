#include <iostream>
#include <string>
#include <cmath> 

using namespace std;

int main() {

    string name;
    string student_id_str;
    string movie;
    string day;
    string final_quote;


    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";

    getline(cin, name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";


    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    getline(cin, student_id_str);


    if (student_id_str.length() >= 2) {
        try {
            int two_digit_prefix = stoi(student_id_str.substr(0, 2));
            int gear_number = two_digit_prefix - 12;

            cout << "Fahsai: I think you may be GEAR " << gear_number << ". I have a free movie ticket for you.\n";
            cout << "Fahsai: Let's go to the cinema together!!!\n";


            cout << "Fahsai: What movie do you want to watch?\n";
            cout << name << ": ";
            getline(cin, movie);


            cout << "Fahsai: So....which day are you free to go with me?\n";
            cout << name << ": ";
            getline(cin, day);

            cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";

            cout << name << ": ";
            getline(cin, final_quote);

            cout << "Fahsai: 555+ see you " << day << ". Bye Bye << "\" << "(^ ^)/\n";

        } catch (const std::exception& e) {
            cout << "Fahsai: Invalid student ID format. Let's just talk about movies.\n";
        }
    } else {
        cout << "Fahsai: That ID seems too short. Let's just talk about movies.\n";
    }

    return 0;
}