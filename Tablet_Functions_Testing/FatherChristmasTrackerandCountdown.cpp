#include <iostream>
#include <ctime>
#include <string>
#include <stdio.h>

using namespace std;

int
main ()
{

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


  cout << "North Pole Mainframe" << endl;
  cout <<
    "Do you want to track father Christmas(Only works 24&25 Dec evening to morning)(1)" << endl <<" or check how many days are left until Christmas(Only works in December)(2)?: ";
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

      cout << "Days left 'til Christmas: " << diff;

    }

}
