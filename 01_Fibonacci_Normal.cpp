#include <iostream>
#include <vector>

using namespace std;

int main ()
{

    vector <long long> ans;
    ans.push_back(0);
    ans.push_back(1);
    ans.push_back(1);
    
    cout << 0 << " " << 1 << " " << 1 << " ";

    for (int i = 1; i < 100; i++)
    {
        cout << ans.back() + ans[ans.size() - 2] << " ";
        ans.push_back(ans.back() + ans[ans.size() - 2]);
    }
    cout << endl;
}