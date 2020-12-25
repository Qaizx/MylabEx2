#include<iostream>
#include<string>
using namespace std;

string myn, answer, answer2, answer3;
int A;
int main(){

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, myn);
    cout << "Fahsai: Wow!!! " << myn << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << myn << ": ";
    cin >> A;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << A/10000000-12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << myn << ": ";
    getline(cin,answer);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << myn << ": ";
    getline(cin, answer2);
    cout << "Fahsai: " << answer2 << "....that is OK!!! I'm looking forward to watching " << answer << " with you." << endl;
    cout << myn << ": ";
    getline(cin,answer3);
    cout << "Fahsai: 555+ see you " << answer2 << ". Bye Bye \\(^ ^)/";


}