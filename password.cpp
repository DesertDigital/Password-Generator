#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main ()
{

  int characterLength = 0;
  int version;
  string capital;
  cout << "How many characters do you want the password to be? " << endl;
  cin >> characterLength;
  cout << "Enter yes for case-sensitive, no for no capitalization letters" << endl;
  cin >> capital;
  cout << "How many passwords? " << endl;
  cin >> version;
  //cout << "Do you want capitol letters?"
  
  srand ( time(NULL) ); //initialize the random seed
  const char arrayNum[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9',
			   'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			   'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
			   's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
			   'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			   'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
			   'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			   '!', '$', '%', };


  if(capital == "yes" || capital == "Yes")
  {
    for(int i = 0; i < version; i++)
    {
      for(int i = 0; i < characterLength; i++)
	{
	  //generates a random number based on the size of the array of char
	  int RandIndex = rand() % (sizeof(arrayNum)/sizeof(*arrayNum));
	  cout << arrayNum[RandIndex];
	}
      cout << endl;
    }
  }

  else if(capital == "no" || capital == "No"){
    for(int i = 0; i < version; i++)
      {
	for(int i = 0; i < characterLength; i++)
	  {
	    //generates a random number based on the size of the array of char
	    int RandIndex = rand() % (sizeof(arrayNum)/sizeof(*arrayNum));
	    cout << arrayNum[RandIndex];
	  }
	cout << endl;
      }
  
  }

  else
  {
    cout << "Enter valid choice!" << endl;
  }


  




  
  //int RandIndex = rand() % 4; //generates a random number between 0 and 3
  //cout << arrayNum[RandIndex];
  //sizeof(arrayNum)/sizeof(*arrayNum)

  for(int i = 0; i < version; i++)
    {
      for(int i = 0; i < characterLength; i++)
	{
	  //generates a random number based on the size of the array of char
	  int RandIndex = rand() % (sizeof(arrayNum)/sizeof(*arrayNum));

	  cout << arrayNum[RandIndex];
	}
      cout << endl;
  }


}
