#include <iostream>
using namespace std;

int add(int a, int b){
    return (a+b);
}

int main(){
    int first_num, second_num;
    
    cout << "Enter the first number : " << endl;
    cin >> first_num;
    
    cout << "Enter the second number : " << endl;
    cin >> second_num;

    int result = add(first_num, second_num);
    
    cout << "The sum is : "<< result << endl;
    
    return 0;
}
