#include <iostream>
#include <math.h>
#include <iomanip>

 using namespace std;

int main()
{

    double yIncome = 0;
    double taxOwed = 0;
    double taxRate = 0;

    cout << "Please Enter Yearly Income: ";
    cin >> yIncome;

    if (yIncome <= 9325)taxOwed = yIncome * 0.10;
    else if ((yIncome >= 9326) && (yIncome <= 37950)) taxOwed = ((yIncome - 9325) * 0.15) + (9325 * 0.10);
    else if ((yIncome >= 37951) && (yIncome <= 91900)) taxOwed = ((yIncome - 37950)* 0.25) + ((37950 - 9325) * 0.15) + (9325 * 0.10);
    else if ((yIncome >= 91901) && (yIncome <= 191650)) taxOwed = ((yIncome - 91900) * 0.28) + ((91900 - 37950) * 0.25) + ((37950 - 9325) * 0.15) + (9325 * 0.10);
    else if ((yIncome >= 191650) && (yIncome <= 416700)) taxOwed = ((yIncome - 191650) * 0.33) + ((191650 - 91900) * 0.28) + ((91900 - 37950) * 0.25) + ((37950 - 9325) * 0.15) + (9325 * 0.10);
    else if ((yIncome >= 416701) && (yIncome <= 418400)) taxOwed = ((yIncome - 416700) * 0.35) + ((416700 - 191650) * 0.33) + ((191650 - 91900) * 0.28) + ((91900 - 37950) * 0.25) + ((37950 - 9325) * 0.15) + (9325 * 0.10);
    else if (yIncome >= 418401) taxOwed = ((yIncome - 418400) * 0.396) + ((418400 - 416700) * 0.35) + ((416700 - 191650) * 0.33) + ((191650 - 91900) * 0.28) + ((91900 - 37950) * 0.25) + ((37950 - 9325) * 0.15) + (9325 * 0.10);

    cout << fixed;
    cout << setprecision(2) << taxOwed;

    return 0;

}
