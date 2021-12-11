#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector  <int> numbers{};
    char selection{};
    
    do{
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cin >> selection;
        
        if(selection == 'p' || selection == 'P'){
            if(numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else{
                cout << "[ ";
                for(auto num:numbers)
                    cout << num << " ";
                
                cout << "]" << endl;
            }
        }else if(selection == 'a' || selection == 'A'){
            int num_to_add{};
            cout << "Enter integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }else if(selection == 'm' || selection == 'M'){
            if(numbers .size() == 0)
                cout << "No data to calculate" << endl;
            else{
                int total {};
                for (auto num:numbers)
                    total += num;
                cout << "The mean is: " << static_cast<double>(total)/numbers.size() << endl;
            }
        }else if(selection == 's' || selection == 'S'){
            if(numbers.size() == 0)
                cout << "List is enpty" << endl;
            else{
                int smallest = numbers.at(0);
                for (auto num: numbers)
                    if(num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
                        
            }
        }else if(selection == 'l' || selection == 'L'){
            if(numbers.size() == 0)
                cout << "List is emplty" << endl;
            else {
                int largest = numbers.at(0);
                for(auto num: numbers)
                    if(num > largest)
                        largest = num;
                    cout << "The largest is: " << largest << endl;
            }
        } else if(selection == 'q' || selection == 'Q'){
            cout << "Goodbye" << endl;
        }else{
            cout << "invalid selection, please try again" << endl;
        }
        
        
        
    }while (selection != 'q' && selection != 'Q');
    
    
    cout << endl;
    return 0;
    
    
}
