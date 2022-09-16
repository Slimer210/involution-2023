/*
MRGA challenge 20220915
Question: swap two characters in a str
Test Cases (JavaScript):

console.log(doubleSwap('aabbccc', 'a', 'b'), 'bbaaccc');
console.log(
  doubleSwap('random w#rds writt&n h&r&', '#', '&'),
  'random w&rds writt#n h#r#',
);
console.log(doubleSwap('128 895 556 788 999', '8', '9'), '129 985 556 799 888');
console.log(doubleSwap('mamma mia', 'm', 'a'), 'amaam aim');
console.log(doubleSwap('**##**', '*', '#'), '##**##');
console.log(doubleSwap('123456789', '4', '5'), '123546789');
console.log(doubleSwap('445566&&', '4', '&'), '&&556644');
console.log(doubleSwap('!?@,.', ',', '.'), '!?@.,');
console.log(doubleSwap('Q_Q T_T =.= >.<', 'Q', 'T'), 'T_T Q_Q =.= >.<');
console.log(
  doubleSwap('(Q_Q) (T_T) (=.=) (>.<)', ')', '('),
  ')Q_Q( )T_T( )=.=( )>.<(',
);
console.log(doubleSwap('<>', '>', '<'), '><');
console.log(doubleSwap('001101', '1', '0'), '110010');
console.log(
  doubleSwap(
    '!"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~',
    'a',
    'b',
  ),
  '!"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`bacdefghijklmnopqrstuvwxyz{|}~',
);

*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string inputString;
  getline(cin, inputString);
  char swap1, swap2;
  cin >> swap1 >> swap2;

  for (int i = 0; i < inputString.length(); i++) {
    if (inputString[i] == swap1) {
      inputString[i] = swap2;
    } else if (inputString[i] == swap2) {
      inputString[i] = swap1;
    }
  }
  for (int i = 0; i < inputString.length(); i++) {
    cout << inputString[i];
  }
}