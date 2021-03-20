
#include <iostream> // allows to input and output data in console 
using namespace std; // use this so that i dont have to use std::
int main()
{
    // selct all, then ctrl c,ctrl k to comment all
    //cout << "Hello World!\n";
    //cout << "My name is Lakeram";
    //system("pause>0");
    // gets rid of junk text that displays in the cmd

    /*float annul_salery;
    cout << "enter salery";
    cin >> annul_salery;

    float monthly = annul_salery / 12;
    cout << "Your monthly is "<< monthly <<endl;*/

    // working with characters

    /*char character = 'a';
    bool is_older_than_18 = true;*/
/*
    cout << "size of int" << sizeof(int) << endl;

    //cout << character;


    //casting one data type to another
    cout << int('a') << endl;

    char word[10] = { "hello" };

    // casting word to a a number which produces an ascii number
    cout << int(word);

    // If else statments

    int number;
    cout << "enter number";
    cin >> number;
    if (number % 2 == 0) {
        cout << "You hae entered even number";
    }
    else {
        cout << "You have entered Odd number";
    }

    //swapping values of variables
    int a = 20;
    int b = 10;

    int c;
    c = a;
    a = b;
    b = c;

    // or a better way without creating second varable
    a = a + b; //30
    b = a - b; //20
    a = a - b;//10
    cout << a << b << c << endl;


    float height, weight, bmi;

    cout << "enter weight in kg";
    cin >> weight;
    cout << endl << "enter height in m";
    cin >> height;
    bmi = weight / (height * height);
/*
    if (bmi < 18.5) {
        cout << "Underwieght" << endl;

    }
    else if (bmi > 25) {
        cout << "Overweight" << endl;

    }
    else {
        cout << "Normal" << endl;
    }

    cout<<"your Bmi is:"<<bmi<<endl;
    */
    // terninary operator for the above if else
    /*
    (bmi < 18.5) ? cout << "Underwieght" : (bmi > 25) ? cout << "Overweight" : cout << "normal";
    
    
    // creating a calculator
    //Switch cases */
    /*
    float num1, num2;
    char operation;
    cout << "My Cal";
    cin >> num1 >> operation >> num2;


    switch (operation)
    {
    case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case'*': cout << num1 << operation << num2 << "=" << num1 *num2; break;
    case'/': cout << num1 << operation << num2 << "=" << num1 / num2; break;

    default: cout << "Invalid entry" << endl;
        break;
    }
    */
/*
    //more on switch cases
    //(year % 4 == 0 && year % 100 !=0 || year % 400==0)
    int month, year;
    cout << "ENter year and month" << endl;
    cin >> year >> month;


    switch (month)
    {
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
            cout << "Year is a leap and the month has 29 days" : cout << "28 days"; break;
    case 4:
    case 6:
    case 9:
    case 11: cout << "30 days month."; break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout << "31 days month."; break;
    default:
        cout << "Invalid month entry"; break;
 
    }*/


/**********Loops******/

//  While loop //
/*
int num = 100;

while (num <=500) {

    if (num % 3 ==0 &&num%5 ==0 ){
        cout << num << "is divisable" << endl;
    }
    
    num++;

}

/****************Reverse A NUMBER*****************************/
/*
int number, reverse_num = 0;
cout << "Enter a Number";
cin >> number;
 
while (number != 0) {

    //multiply reverse number by 10
    reverse_num = reverse_num * 10; // making reverse in its proper place valsue
    int last_digit = number % 10; // getting the last value in number
    reverse_num = reverse_num + last_digit;
    number = number / 10; // take off the last digit

}
cout << reverse_num << "is the reverse of " << number;

/****************Fore loops***********************/

//factorial of a number
/*
int facnumber;
cout << "what is the  fact number: ";
cin >> facnumber;

int fact = 1;

    for (int i = 1; i <= facnumber; i++) {
        fact = fact * i;
    }
cout <<"the !",facnumber," = ", fact;


 /*****************Pointers*****************************/
/*
string food = "Pizza";

//reference it first
string &food_ref = food;

cout << &food_ref<<endl;

// use the refence to get store the address of food
string* food_pointer = &food;

cout << food_pointer << endl;

// get the value of food using the pointer

cout << *food_pointer;




/************************Nested loops****************************/

// Multiplication table
/*
for (int i = 1; i < 11; i++) {

    for (int j = 1; j < 11; j++) {
        cout << i << " * " << j <<" = "<<i*j<< endl;
    }
    cout << endl;
}
*/

// More on nested forloops ----- drawing a figure
int height, width;

cout << "Enter height";
cin >> height;

cout << "Enter width";
cin >> width;

char symbol;

cout << "Enter symbol";
cin >> symbol;


for (int i = 0; i < height; i++) {
    for (int w = 0; w < width; w++) {
        cout <<"  "<< symbol<<"   ";
    }
    cout << endl;
}

/**********************Functions*****************************************/







}

