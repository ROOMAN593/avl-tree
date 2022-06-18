/**
 * A testbed for an augmented implementation of an AVL tree
 * @author William Duncan, YOUR NAME
 * @see AVLTree.h
 * <pre>
 * Date: lAST DATE MODIFIED
 * CSC 3102 Programming Project # 1
 * Instructor: Dr. Duncan 
 * </pre>
 */

#include <iostream>
#include <cstdlib>  
#include <stdexcept>
#include <iomanip>
#include <fstream> 
#include <algorithm>
#include "AVLTree.cpp"


using namespace std;


int main(int argc, char** argv) 
{
    string usage = "Dendrologist <order-code> <command-file>\n";
    usage += "  <order-code>:\n";
    usage += "  0 ordered by increasing string length, primary key, and reverse lexicographical order, secondary key\n";
    usage += "  -1 for reverse lexicographical order\n";
    usage += "  1 for lexicographical order\n";
    usage += "  -2 ordered by decreasing string\n";
    usage += "  2 ordered by increasing string\n";
    usage += "  -3 ordered by decreasing string length, primary key, and reverse lexicographical order, secondary key\n";
    usage += "  3 ordered by increasing string length, primary key, and lexicographical order, secondary key\n";  
    if (argc != 3)
    {
        cout<<usage<<endl;
        throw invalid_argument("There should be 3 command line arguments.");
    }
    //Complete the implementation of this function
    
    return 0;
}

