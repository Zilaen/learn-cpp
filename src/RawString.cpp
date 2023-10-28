#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "c:\\my folder\\images\\some art\\art.png";
    cout << str << endl;

    string strMessy = "\"c:\\my folder\\images\\some art\\art.png\"";
    cout << strMessy << endl;

    string strRaw = R"("c:\my folder\images\some art\art.png")";
    cout << strRaw << endl;

    return 0;
}