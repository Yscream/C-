#include <iostream>
#include <vector>

using namespace std;

void doPrint() {
    std::cout << "In doPrint()" << std::endl;
}

int returnNumber() {
    return 7;
}

//prototype
int add(int x, int y);
int subtract(int x, int y);

int main() {
    int x;
    x = 5;
    std::cout << x << std::endl;

    int y;

    y = 4;
    std::cout<< y << std::endl;

    int a = 6;
    a = a - 3;
    std::cout << a << std::endl;

    int b = a;
    std::cout << b << std::endl;

    std::cout << a + b << std::endl;

    std::cout << a << std::endl;

//    int c;
//    std::cout << c << std::endl; //returns error(cuz it is empty memory cell, and it has only address)

//========================================cout, cin и endl==============================================

    //====std::cout====
    std::cout << "Hello world!" << std::endl;

    int e = 7;

    std::cout << "e is " << e << std::endl;

    std::cout << "hello!";
    std::cout << "my name is Yehor";

    //====std::endl====
    std::cout << std::endl << "hello!" << std::endl;
    std::cout << "my name is Yehor" << std::endl;

    //====std:cin====
    std::cout << "Enter your number ";
    int n = 0;
    std::cin >> a;
    std::cout << "your number is " << a << std::endl;

    //========================================functions=======================================
    std::cout << "Starting main()" << std::endl;
    doPrint();
    std::cout << "Ending main()" << std::endl;

    std::cout << returnNumber() << std::endl;
    std::cout << returnNumber() + 3 << std::endl;

    returnNumber();//ignoring cuz main does nothing with it

    //================================================================================

    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
    //call undefined prototype
    //std::cout << "The difference of 4 and 3 is: " << subtract(4, 3) << std::endl; //error: undefined reference to `subtract(int, int)'

    //=======================================types===================================
    bool isBool = true; //size: 1 byte
    char symbol = 'c'; //size: 1 byte
    wchar_t symbol2 = 'c'; //size: 1 byte
    char16_t symbol3 = 'c'; //size: 2 byte
    char32_t symbol4 = 'c'; //size: 4 byte
    float pi = 3.14; //size: 4 byte
    double pi2 = 3.14; //size: 8 byte
    long double pi3 = 3.14; //size: 8 byte
    short number = 1; //size: 2 byte
    int number1 = 1; //size: 2 byte
    long number2 = 1; //size: 4 byte
    long long number3 = 1; //size: 8 byte
    // !!!size dependence on compiler and/or computer architecture. c++ guarantees only min size
//  void;

    //uniform-initialization
    int value{5};

    //declare some vars
    int num1, num2, num3;
    int n1 = 1, n2 = 2, n3 = 3;
    int c(7), d(8);
    int v{9}, f{10};
    auto name = "Lady G.";
    const double PI = 3.1415;

    //string literals
    std::string str = "sdjjska";
    std::cout << str;
    char str2 = 'ldsdsada';
    std::cout << str2 << std::endl;// warning: character constant too long for its type
    string str3 = "what is c++?";
    std::cout << str3 << std::endl;
    const char *narrow = "abcd";
    std::cout << narrow << std::endl;

    //UTF-8 encoded strings
    //u8 prefix
    //before c++20
//    const char* str4 = u8"Hello world!";
    //u8 specifies characters or strings of char8_t instead of char
    //c++20 and later
    const char8_t* u8str1 = u8"Hello world";

    //Concatenating adjacent string literals
    char str5[] = "12" "34";

    //pointers*&
    int numberForPtr = 10;
    std::cout << numberForPtr << std::endl;//10
    int* ptrNumber;
    ptrNumber = &numberForPtr;
    std::cout << ptrNumber << std::endl; //0x7ffd5bbbe2a8
    std::cout << *ptrNumber << std::endl; //10
    *ptrNumber = 15;// Dereference and store a new value in
                    // the memory pointed to by
                    // ptrNumber, the integer variable called
                    // "numberForPtr". Note "numberForPtr" was changed, not
                    // "ptrNumber".
    std::cout << numberForPtr << std::endl; //15

    //std::nullptr_t
    const std::nullptr_t nullptrt = 0;
    std::cout << nullptrt << std::endl;// nullptr

    //======================================statements=====================================
    vector<int> nums = {1,2,3,4};
    std::cout << size(nums) << std::endl;
    for (int i = 0; i < std::size(nums); i++) {
//        std::cout << nums[i] << std::endl;
    }


    //======================================short, int, long==========================================


    return 0;
}

int add(int x, int y){
    return x + y;
}

