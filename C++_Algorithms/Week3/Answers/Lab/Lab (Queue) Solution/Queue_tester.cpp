
/* Abstract: A queue is used to store text read from a file that is           */
/* designated as a footnote, outputting the main text as it is processed but  */
/* enqueuing the footnotes for output after the file output.                  */
/******************************************************************************/

/*---------------------------------------------------------------------
Driver program to test the Queue class.
----------------------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Queue.h"

int main()
{
   string intakeLine = ""; //to receive each line in the text file
   string concatLine = ""; //to hold final, concatenated string
   Queue footnotes; //to store strings of footnotes
   bool inFootnote = false; //to control loops
   string currentFootnote; //to store current footnote before sending to queue
   int lineLength; //for loop parameter

   //read file and add lines as strings to concatenated string
   ifstream file("sample.txt");
    
   if (file.is_open())
   {
       while (!file.eof())
      {
         getline(file, intakeLine);
         concatLine += intakeLine += "\n";
      }
   }
   file.close();

   lineLength = concatLine.length();
   for (int i = 0; i < lineLength; i++)
   {
      if (concatLine[i] == '{') //beginning of footnote
      {
         inFootnote = true;
      }
      else if (concatLine[i] == '}') //end of footnote
      {
         footnotes.enqueue(currentFootnote);
         currentFootnote = ""; //reset to collect further footnotes
         inFootnote = false;
      }
      else //not at the beginning or end of a footnote
      {
         //output to console if the content is not part of a footnote
         if (inFootnote == false)
         {
            cout << concatLine[i];
         }

         //append to currentFootnote string if the content is part of footnote
         else //inFootnote == true
         {
            currentFootnote += concatLine[i];
         }
      }
   }

   //display footnotes
   cout << endl << "FOOTNOTES:\n";
   footnotes.display(cout);

   return 0;
}
