//Jeremiah Hoag
// 9/5/2017
#include <iostream>


using namespace std;

int main()
{
    int number_of_books_Purchased;

    cout << "Enter the number of books you have purchased"
         << " and I will tell you your points earned." ;
    cin >> number_of_books_Purchased;
    if (number_of_books_Purchased >= 0){
        cout << "points earned equals 0" << endl;
    }
    else if (number_of_books_Purchased >= 1){
             cout << "points earned equals 5" << endl;
    }
    else if (number_of_books_Purchased >= 2){
             cout << "points earned equals 15" << endl;
    }
    else if (number_of_books_Purchased >= 3){
             cout << "points earned equals 30" << endl;
    }
    else
          cout << "points earned equals 50" << endl;

    return 0;
}
