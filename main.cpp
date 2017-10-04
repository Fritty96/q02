#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <vector <string> > wordGrid;

  /*
     do not edit this space
     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */

  //PUT YOUR CODE BELOW THIS LINE
  //that prints each element of the matrix in the
  //following format:
  //Row _ Column _ is _
  //the first and second blanks should be replaced with the coordinates
  //of the element's row and column and the third blank should be replaced
  //with the value of that element

wordGrid[0][0] = 1;
wordGrid[0][1] = 3;
wordGrid[1][0] = 5;
 
if (wordGrid.size()>0 && wordGrid[0].size()>0){


    for (int i; i < wordGrid.size(); i++){
    cout << "ROw" << i << wordGrid[0][i];

    }
}

//cout << "Row " <<  << " Column " << << " is " << << endl;



//I do understand how to make matrixes work.
// So this is the best I could do with what I knew.

 return 0;
}



