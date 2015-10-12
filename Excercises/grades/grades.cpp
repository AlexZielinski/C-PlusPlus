#include <iostream>
#include <string>

/*
application that determines the users test grade based on the test scores
the user enters into the application
*/

int main()
{
  // holds user entered test score value
  int userScore = 0;
  
  // determines users grade based on test score
  char grade;
  
  std::cout << "Enter your test score out of 100" << "\n";
  std::cin >> userScore;
  
  if(userScore > 0 && userScore < 51)
  {
    grade = 'f';
  }
  else if(userScore > 50 && userScore < 73)
  {
    grade = 'C';
  }
  else if(userScore > 72 && userScore < 86)
  {
    grade = 'B';
  }
  else if(userScore > 86 && userScore < 101)
  {
    grade = 'A';
  }
  else
  {
    std::cout << "  Error: invalid value." << "\n";
  }
  
  /*
  switch(userScore)
  {
    case (userScore > 0 && userScore < 51):
      grade = 'F';
      break;
    case (userScore > 50 && userScore < 73):
      grade = 'C';
      break;
    case (userScore > 72 && userScore < 86):
      grade = 'B';
      break;
    case (userScore > 86 && userScore < 101):
      grade = 'A';
      break;
  }
  */
  
  std::cout << "Grade achieved: " << grade << "\n";
 
  std::cin.get();
  std::cin.get();
  return 0;
}