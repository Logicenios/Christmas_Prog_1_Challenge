#include <iostream>
#include <thread> 
#include <iomanip>
#include <string>
#include <random>


using namespace std;

void clearcolor(); //clear color modification
void transition();
void delay();
void loading();

int main() {  

// Introduction for story
// Have you used the code again and want to code to the table ui type in the username 2022

cout << "\033[31m" << R"(
   *        *        *        __o    *       *
*      *       *        *    /_| _     *
   K  *     K      *        O'_)/ \  *    *
  <')____  <')____    __*   V   \  ) __  *
   \ ___ )--\ ___ )--( (    (___|__)/ /*     *
 *  |   |    |   |  * \ \____| |___/ /  *
    |*  |    |   | aos \____________/       *)" << endl; 
/* R is for raw string literal https://www.geeksforgeeks.org/raw-string-literal-c/ it gives the raw input in between "()" 
and the weird code is ascii color codes https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal*/


cout << "\033[32m" << "Welcome to a Christmas Story (Subject to change)" << endl;
cout << "\033[36m" << "Let us introduce ourselves we are the narator an ethereal being helping you along the way of the story."<< endl << "You will see our name in blue."<< endl << "So how should we call you (We allow anything in case you are Elon Musk's son)?"<<endl;
clearcolor();

// Your name logic
string username;
cin >> username;

// Loading with some time delay check https://cplusplus.com/reference/thread/this_thread/sleep_for/
// Char https://theasciicode.com.ar/extended-ascii-code/black-square-ascii-code-254.html

cout << "\033[32m" << "Loading" << endl;
cout << "[";
cout << setw(100) << "]" << endl;
loading();

transition();
clearcolor();

// Main plot generated from chatgpt by an incredible prompt 
string narrator;
narrator = "\033[36m";

string hero;
hero = "\033[33m";
int check_for_skip; 
check_for_skip = stoi(username);
if (check_for_skip != 2022) {
    cout << narrator << "Once upon a time, on a cold and snowy Christmas Eve, a young hero named " << username << " was out" << endl
         << "walking through the woods.  " << username << " had always loved Christmas, but this year was" << endl
         << "different. He/She had lost all of his/her holiday spirit and wasn't sure why." << endl
         << endl;

    delay();

    cout << narrator << "As he/she walked through the snowy forest, he/she suddenly heard a strange noise. It sounded like a" << endl
         << "faint ringing, coming from somewhere nearby. " << username << " followed the sound until he/she came upon a" << endl
         << "clearing, where he/she saw a small, shiny object lying on the ground." << endl
         << endl;

    delay();

    cout << narrator << "Curious, " << username << " picked up the object and saw that it was a tablet. But not just any tablet - this" << endl
         << "one had the words "
         << "\033[31m"
         << "Santa's Tablet" << narrator << " written on it in bright red letters." << endl
         << endl;

    delay();

    cout << narrator << "" << username << " couldn't believe his/her luck. He/She had always wanted to meet Santa Claus, and now it seemed" << endl
         << "that he/she might have a chance. He/She quickly turned on the tablet and began exploring its contents." << endl
         << endl;

    delay();

    cout << narrator << "To " << username << "'s surprise, the tablet contained all sorts of information about Santa's workshop, the" << endl
         << "elves, and the reindeer. There were even maps and instructions for delivering presents to all" << endl
         << "the good boys and girls around the world." << endl
         << endl;

    delay();

    cout << narrator << "Excited by the prospect of helping Santa, " << username << " decided to set off on a journey to the North" << endl
         << "Pole. He/She packed a bag with warm clothes and set off through the snowy forest, following the " << endl
         << "map on the tablet." << endl
         << endl;

    delay();

    cout << narrator << "When he/she arrived at the North Pole, " << username << " found Santa's workshop in a state of chaos. The elves" << endl
         << "were rushing around, trying to prepare for Christmas Eve." << endl
         << endl;

    delay();

    cout << narrator << "One of the elves, a kind and elderly elf named Mrs. Claus, explained that Santa had lost his" << endl
         << "tablet while delivering presents the previous year. Without it, he was unable to access the list" << endl
         << "of good boys and girls, or the maps and instructions for delivering presents." << endl
         << endl;

    delay();

    cout << narrator << "But now that " << username << " brought it back Christmas would be saved, Santa was overjoyed to see" << endl
         << username << " and his tablet. Thank you, " << username << "! he said. You have saved Christmas!" << endl
         << endl;

    delay();

    cout << narrator << "From that day on, " << username << "'s holiday spirit was restored. And every Christmas Eve, he/she would" << endl
         << "make the journey to the North Pole to help Santa and the elves prepare for the special night." << endl
         << "The end" << endl
         << endl;
    delay();
    cout << hero << "Narrator are you gonna leave on a cliffhanger." << endl << "Santa gave me a whole tablet" << endl;

    clearcolor();
}
cout << narrator << "Let's explore it then.";
//delay();
transition();
clearcolor();

// Tablet UI and programs
loading();
cout << setw(50) << "\033[31m"  << "SantaClaus OS" << endl;
cout << endl;
cout << "\033[32m" << "Welcome " << username << " the time is" << /*Add time*/ endl;
cout << endl;
cout << setw(55) << "Choose a program to run:" << endl;
cout << "1. Santa Locator" << endl << "2. Naughty or Not" << endl << "3. Automatic Merry Christmas Generator" << endl << "0. Exit" << endl;
clearcolor();
int choice;

do {
    cin >> choice;
    if (choice == 1)
    {
    
    }
    else if (choice == 2)
    {
        // Read about it on https://cplusplus.com/reference/random/
        random_device rd;  // Get a number from a random part of computer's memory
        mt19937 gen(rd()); // Use the number in a A Mersenne Twister pseudo-random generator of 32-bit numbers with a state size of 19937 bits
        uniform_int_distribution<> distr(0, 1);
        switch (distr(gen))
        {
        case 1:
            cout << "\033[36m"
                 << "You have been very naughty.";
           

        default:
            cout << "\033[36m"
                 << "You have been very good. Many gifts will be waiting under the tree!";
            
        }
        clearcolor();
    }
    else if (choice == 3)
    {
    }
    else
    {
        cout << "Try again" << endl;
    }
} while (choice != 0);






}
// Initialize Functions
void clearcolor() {
    cout << "\f";
    cout << "\033[0m";
    cout << "\f";
}
void transition() {
    int I;
    cout << "\f";
    for (I = 0; I < 18 ; I++) {
        cout << "\033[30;40m" << "TRANSITION" << endl;
        cout << "\f" << endl; //change page  
    } 
}
void delay() {
    this_thread::sleep_for(5s);
}
void loading() {
    int loading;
    loading = 100;
    while (loading != 0) {
        cout << (char)254;
        this_thread::sleep_for(30ms);
        loading --;
    }
    cout << endl;
}
