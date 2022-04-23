#include <iostream>
#include <string>

using namespace std;

void printUsage() {
    cout << "Usage: ./fizzbuzz [number]" << endl;
    return;
}
int main(int argc, char *argv[]) {
    if(argc != 2) {
        cerr << "Expected 1 command line argument, got: '" << argc-1 << "'\n";
        printUsage();
        return 1;
    }

    int count;
    try {
        count = stoi(argv[1]);
        if(count < 0) throw 1;
    } catch (...) {
        cerr << "Error: input must be a positive integer, got '" << argv[1] << "'\n";
        printUsage();
        return 1;
    }

    cout << count << endl;

    string out;
    // for (int i=1; i<=100; i++)
    // {
    //     if (i%15 == 0) printf ("FizzBuzz\n");   
    //     else if ((i%3) == 0) printf("Fizz\n");
    //     else if ((i%5) == 0) printf("Buzz\n");
    //     else printf("%d\n", i);                
 
    // }
    return 0;
}