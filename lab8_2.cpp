#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name, id, movie, day, sent;
    int gear;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n" << name << ": ";
    getline(cin, id);
    gear = ((int)id[0] - 48)*10 + ((int)id[1] - 48) - 12;
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin, movie);
    cout << "Fahsai: So....which day are you free to go with me?\n" << name << ": ";
    getline(cin, day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n" << name << ": ";
    getline(cin, sent);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
    return 0;
}
