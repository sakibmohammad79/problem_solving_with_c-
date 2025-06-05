#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str); // পুরো লাইন ইনপুট নেয়া হচ্ছে (space সহ)

    string target = "EGYPT";  // যেটা খুঁজবো
    string result = "";       // নতুন রেজাল্ট রাখার জন্য স্ট্রিং

    for (int i = 0; i < str.size(); ) {
        // যদি EGYPT শব্দটা এই জায়গা থেকে শুরু হয়
        if (str.substr(i, target.size()) == target) {
            result += ' ';          // তাহলে স্পেস যোগ করি
            i += target.size();     // EGYPT এর ৫টা অক্ষর স্কিপ করি
        } else {
            result += str[i];       // নরমাল অক্ষর হলে যোগ করি
            i++;                    // পরের অক্ষরে যাই
        }
    }

    cout << result << endl;  // ফাইনাল স্ট্রিং দেখাই
    return 0;
}
