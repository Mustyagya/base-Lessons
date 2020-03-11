// HM_Lessons15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    vector<int> sumVector1 = { 1, 2 ,3 };
    vector<double> sumVector2 = { 1.1 , 2.2 , 3.3 };
    vector <std::string> myVector2 ;
    vector <char> myVector1;

    myVector1.push_back('a');
    myVector1.push_back('b');
    myVector1.push_back('c');

    myVector2.push_back("a");
    myVector2.push_back("bc");
    myVector2.push_back("def");

    int sum (0) /*Sum(0)*/;
   double sum1(0) /*Sum1(0)*/;
    cout << "sum_all:\t";
    for (int i = 0; i < myVector1.size(); i++)
    {
        cout << myVector1[i] ;

    }
    cout << "\n";
   
    cout << "sum_all:\t";
  
    for (int i = 0; i < myVector2.size(); i++)
    {
        cout << myVector2[i] ;

    }
    cout << endl;
    
    cout << "==========" << endl;
    for (int i = 0; i < sumVector1.size(); i++)
    {
        sum = sumVector1[0]+ sumVector1[1]+ sumVector1[2];
       // Sum = sumVector1[i];
        cout << "sum_all:" << sum << endl;
        //cout << Sum << endl;

    }
    cout << endl;

    cout << "==========" << endl;
    for (double i = 0; i < sumVector2.size(); i++)
    {
        sum1 = sumVector2[0] + sumVector2[1] + sumVector2[2];
        //Sum1 =sumVector2[i] ;
        cout << "sum_all:" << sum1<<endl;
        //cout << Sum1 << endl;

    }




        return 0;
    
}

