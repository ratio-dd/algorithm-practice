//读入一个四位数abcd，请你输出他的“反写”的值。
//比如读入1015，输出5101；
//读入4310，输出134（不能有前导零）
//不合法的四位数，如234， 0123， 12412不会作为读入数据。

#include <iostream>
using namespace std;
int main() {
    int input;
    cin>>input;
    int ones,tens,huns,thans;
    thans = input/1000;
    input = input - thans*1000;
    huns = input/100;
    input = input - huns*100;
    tens = input/10;
    input = input - tens*10;
    ones = input;
    int output  = thans + huns*10 + tens*100 + ones*1000;
    cout<<output<<endl;
}
