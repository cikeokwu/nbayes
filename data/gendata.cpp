#include <stdio.h>
#include <string.h>
#include "csvparser.h"
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;


 double[100] Enlines, Enwords, Enpunc , Ewlen;
 double[100] Mnlines, Mnwords, Mnpunc , Mwlen;





int main() {
    CsvParser *csvparser = CsvParser_new("messages.csv", ",", 1); //change back to comma
    CsvRow *row;
    ofstream savefile;
    savefile.open("bayes.data" | ios::in | ios::app);
    int i =  0;
   //                                                file, delimiter, first_line_is_header?
    while ((row = CsvParser_getRow(csvparser)) ) {
    	  printf("==NEW LINE==\n");
        const char **rowFields = CsvParser_getFields(row);
        if ((string) rowFields[0] == "1"){
           Mnlines[i] =
           Mnwords[i] =
           Mnpunc[i] =
           Mwlen[i] =
        }else{
           Enlines[i] =
           Enwords[i] =
           Enpunc[i] =
           Ewlen[i] =
        }

		printf("\n");
        CsvParser_destroy_row(row);
    }
    CsvParser_destroy(csvparser);

    return 0;
}

int getLol(){

}

// int  getLmao(){
//
// }
//
// int getRlower(){
//
// }
// int getUlower(){
//
// }
//
// int getOmfg(){
//
// }
//
// int getFuck(){
//
// }
//
// int getATB(){
//
// }
//
// int getBR(){
//
// }
//
// int getSincere(){
//
// }
//
// int getThanks(){
//
// }
