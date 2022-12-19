#include <iostream>
#include <thread> 
#include <iomanip>
#include <string>
#include <random>
#include <chrono>


using namespace std;

void clearcolour(); //clear colour modification
void transition();
void delay();
void loading(); // Loading with some time delay check https://cplusplus.com/reference/thread/this_thread/sleep_for/
void fclocator();

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
    |*  |    |   |     \____________/       *)" << endl; 
/* R is for raw string literal https://www.geeksforgeeks.org/raw-string-literal-c/ it gives the raw input in between "()" 
and the weird code is ascii colour codes https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal*/


cout << "\033[32m" << "Welcome to a Christmas Story" << endl;
cout << "\033[36m" << "Let us introduce ourselves we are the narator an ethereal being helping you along the way of the story."<< endl << "You will see our name in blue."<< endl << "So how should we call you (We allow anything in case you are Elon Musk's son)?"<<endl;
clearcolour();

// Your name logic
string username;
cin >> username;

transition();
clearcolour();

// Main plot generated from chatgpt by an incredible prompt 
string narrator;
narrator = "\033[36m";

string hero;
hero = "\033[33m";


if (username != "2022") {
    
    cout << narrator << "Once upon a time, on a cold and snowy Christmas Eve, a young hero named " << username << " was out" << endl
         << "walking through the woods.  " << username << " always loved Christmas, but this year was" << endl
         << "different. He/She had lost his/her holiday spirit and wasn't sure why." << endl
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
         << "Father Christmas' Tablet" << narrator << " written on it in bright red letters." << endl
         << endl;

    delay();

    cout << narrator << "" << username << " couldn't believe his/her luck. He/She had always wanted to meet Father Christmas, and now it seemed" << endl
         << "that he/she might have a chance. He/She quickly turned on the tablet and began exploring its contents." << endl
         << endl;

    delay();

    cout << narrator << "To " << username << "'s surprise, the tablet contained all sorts of information about Father Christmas' workshop, the" << endl
         << "elves, and the reindeer. There were even maps and instructions for delivering presents to all" << endl
         << "the good boys and girls around the world." << endl
         << endl;

    delay();

    cout << narrator << "Excited by the prospect of helping Father Christmas, " << username << " decided to set off on a journey to the North" << endl
         << "Pole. He/She packed a bag with warm clothes and set off through the snowy forest, following the " << endl
         << "map on the tablet." << endl
         << endl;

    delay();

    cout << narrator << "When he/she arrived at the North Pole, " << username << " found Father Christmas' workshop in a state of chaos. The elves" << endl
         << "were rushing around, trying to prepare for Christmas Eve." << endl
         << endl;

    delay();

    cout << narrator << "One of the elves, a kind and elderly elf named Mrs. Christmas, explained that Father Christmas had lost his" << endl
         << "tablet while delivering presents the previous year. Without it, he was unable to access the list" << endl
         << "of good boys and girls, or the maps and instructions for delivering presents." << endl
         << endl;

    delay();

    cout << narrator << "But now that " << username << " brought it back, Christmas would be saved; Father Christmas was overjoyed to see" << endl
         << username << " and his tablet. Thank you, " << username << "! he said. You have saved Christmas!" << endl
         << endl;

    delay();

    cout << narrator << "From that day forward, " << username << "'s holiday spirit was restored. And every Christmas Eve, he/she would" << endl
         << "make the journey to the North Pole to help Father Christmas and the elves prepare for the special night." << endl
         << "\033[35m"  << "The end." << endl
         << endl;
    delay();
    cout << hero << "Narrator are you gonna leave this on a cliffhanger." << endl << "Father Christmas gave me a whole tablet" << endl;

    clearcolour();
}
cout << narrator << "Let's explore it then." << endl;
delay();

clearcolour();

// Tablet UI and programs
loading();
cout << setw(50) << "\033[31m"  << "FatherChristmas OS" << endl;
cout << endl;
//Time finder
time_t now = time (0);
            char *dt = ctime (&now);

            string hourdig1, hourdig2, hourdig3, hourdig4, hourdig5 , hournum;
            int timeh;



            hourdig1 = dt[11];
            hourdig2 = dt[12];
            hourdig3 = dt[13];
            hourdig4 = dt[14];
            hourdig5 = dt[15];
            hournum = hourdig1 + hourdig2 + hourdig3 + hourdig4 + hourdig5;

cout << "\033[32m" << "Welcome " << username << " the time is " << hournum <<  endl;
cout << endl;
cout << setw(55) << "Choose a program to run:" << endl;
cout << "1. Father Christmas Locator" << endl << "2. Naughty or Not" << endl << "0. Exit" << endl;
clearcolour();
int choice;

do {
    cin >> choice;
    if (choice == 1)
    {
        fclocator();
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
            cout << narrator
                 << "You have been very naughty.";
           

        case 0:
            cout << narrator
                 << "You have been very good. Many gifts will be waiting for you under the tree!";
            
        }
        clearcolour();
    }
    else if (choice == 0) {

    }
    else
    {
        cout << narrator << "Try again" << endl;
        clearcolour();
    }
} while (choice != 0);

cout << "\033[31m" <<R"(        ____
     .-" +' "-.    __,  ,___,
    /.'.'A_'*`.\  (--|__| _,,_ ,_
   |:.*'/\-\. ':|   _|  |(_||_)|_)\/
   |:.'.||"|.'*:|  (        |  | _/
    \:~^~^~^~^:/          __,  ,___,
     /`-....-'\          (--|__| _ |' _| _,   ,
    /          \           _|  |(_)||(_|(_|\//_)
    `-.,____,.-'          (               _/)"<< endl;


cout << narrator << "Please consider voting for our project" << endl;
clearcolour();



}
// Initialize Functions
void clearcolour() {
    cout << "\f";
    cout << "\033[0m";
    cout << "\f";
}
void transition() {
    int I;
    cout << "\f";
    for (I = 0; I < 18 ; I++) {
        //cout << "\033[37;47m" << endl;
        cout << "\f" << endl; //change page  
    } 
}
void delay() {
    this_thread::sleep_for(2s);
}
void loading() {
    int loading;
    loading = 100;

    while (loading != 0) {
        cout << "~" ;
        this_thread::sleep_for(chrono::milliseconds(30));
        loading --;
    }
    cout << endl;
}

void fclocator(){
    int ans;

    const char *whereisfchristmas[25] = { "Greece & Eastern Europe",
    "France & Central Europe",
    "Greenland, Iceland & British Overseas Territories",
    "Brazil",
    "South America",
    "Central Americal Countries",
    "Southern USA",
    "Central USA",
    "Northern USA",
    "Southern Canada",
    "Northern Canada",
    "No data", "No data",
    "New Zealand",
    "Vanuatu & Solomon Islands",
    "East Australia & Papua New Guinea",
    "Central Australia",
    "West Australia & Philippines",
    "India",
    "East Africa",
    "Southern Africa",
    "Central Africa",
    "Northern Africa",
    "Italy, Spain & Southern Europe",
    };


    cout << "\033[31m" << "North Pole Geolocation" << endl;
    cout << "\033[36m"  <<
    "Do you want to track father Christmas(Only works 24&25 Dec evening to morning)(1)" << endl <<"or check how many days are left until Christmas(Only works in December)(2)?: ";
    cin >> ans;

    if (ans == 1)
        {
          time_t now = time (0);
            char *dt = ctime (&now);

            string hourdig1, hourdig2, hournum;
            int timeh;



            hourdig1 = dt[11];
            hourdig2 = dt[12];

            hournum = hourdig1 + hourdig2;

            timeh = stoi (hournum) + 2;

            cout <<
	        "Father Christmas should, by our best estimates, be in the area around: "
	        << whereisfchristmas[timeh];

        }
    else
        {
          time_t now = time (0);
        char *dt = ctime (&now);

        string daydig1, daydig2, daynum;
        int c, diff;

        daydig1 = dt[8];
        daydig2 = dt[9];

        daynum = daydig1 + daydig2;
        c = stoi (daynum);
        diff = 25 - c;

        cout << "Days left 'til Christmas: " << diff << endl;

        }
    clearcolour();
}
