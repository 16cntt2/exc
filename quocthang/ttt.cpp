#include <iostream> 
using namespace std;
int main() 
{ 
    float ounces,tons; 
    int boxes; 
    const float div = 35273.92; 
    char ans; 
     
    do{ 
        cout << "Please enter weight in ounces: ";
        cin >> ounces;
         
        tons = ounces/div; 
        boxes = div/ounces; 

        cout << "\n\nTons: " << tons << "\nBoxes to the ton: " << boxes; 
        cout << "\n\n Again? (y or n): "; 
        cin >> ans; 
    }while(ans == 'y' || ans == 'Y'); 

      system("PAUSE"); 
      return 0; 
}  
