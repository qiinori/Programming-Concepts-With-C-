/** Here is a C program for sorting a string array represented by an array of characters (and not by std :: string). 
 *  This was the way to do in the old C. 
 *  Note that in the array, each character string must end with the special null character (\0) to mark the end of the string.
 *  You are asked to define the two missing functions.
*/

#include <iostream>
#include <string>
using namespace std;


/** You will find global functions in #include <cstring> which behave
 *  similiarly. The assignment did not explicitly disallow their use
 *  but implementing your own would have been to your benefit here.
 */
void copyCstring( char* strA, char* strB ){




}



/**
 * return 1 if strA > strB, 0 if strA = strB and -1 if strB < strA
 */
int compareCstring( char *strA, char *strB){



}




/**
 * Sorting a word array using old-style C-strings
 */
void sortWords( char words2Darray[][10], int length ) {
  // simple bubblesort
  for (int i = 0; i < length -1 ; i++)
    for (int j = i + 1; j < length; j++) {
      if (compareCstring(words2Darray[i], words2Darray[j]) > 0) {
        char temp[10];
        copyCstring(temp, words2Darray[i]);
        copyCstring(words2Darray[i], words2Darray[j]);
        copyCstring(words2Darray[j], temp);
      }
    }
}



int main() {
  char A[5][10]= { "java",
          "fancy",
          "yeah",
          "fantastic",
          "elastic" };

  sortWords(A, 5);

  for (int i=0; i<5; i++)
      cout << A[i] << endl;

  return 0;
}

