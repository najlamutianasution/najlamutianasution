#include<iostream>
#include<iomanip>
using namespace std;

float calculate_commission(float sales_amount) {
    if (sales_amount <= 500000) {
        return sales_amount * 0.10;
    } else {
        return 500000 * 0.10 + (sales_amount - 500000) * 0.15;
    }
}

int main() {
    float sales_amount;
    cout << "Enter the sales amount: ";
    cin >> sales_amount;
    float commission = calculate_commission(sales_amount);
    cout << "The commission is: Rp " << commission << endl;
    return 0;
}