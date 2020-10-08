#include <string>
#include <iostream>
using namespace std;

int main() {
    string ans =
        "BBBBCAABADDCBCB"
        "FT"
        "TFTFAA"
        "TFTFAA"
        "ABCDA"
        "BCDAB";
    int no;
    cin >> no;
    cout << ans[no - 1];
    return 0;
}
