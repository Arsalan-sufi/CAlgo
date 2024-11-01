#include <iostream>
#include <cmath> // For pow()
using namespace std;

bool checkArmstrong(int n) {
    int p = n;
    int count = 0;
    int sum = 0;
    int num = n;

    // Count the number of digits
    while (p > 0) {
        count++;
        p = p / 10;
    }

    // Calculate the sum of powers of digits
    while (num > 0) {
        int ld = num % 10; // Last digit
        sum += round(pow(ld, count)); // Use round() to avoid precision issues
        num = num / 10;
    }

    // Check if the sum is equal to the original number
    if (n==sum) 
    {
        return true;
    }
    
   else if (n!=sum){
    return false;
   }
}

int main() {
    int n ;
    cin>>n;
   cout<<checkArmstrong(n)<<endl;
    return 0;
}