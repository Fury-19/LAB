#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
};

bool cmp(Item a, Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, vector<Item> arr, int n)
{
    sort(arr.begin(), arr.end(), cmp);
    double finalValue = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= W)
        {
            W -= arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            finalValue += arr[i].value * ((double)W / arr[i].weight);
            break;
        }
    }
    return finalValue;
}

int main()
{
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;
    vector<Item> arr(n);
    cout << "Enter value and weight of items:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i].value >> arr[i].weight;
    cout << "Enter capacity of knapsack: ";
    cin >> W;

    cout << fixed << setprecision(2);
    cout << "Maximum value (Fractional Knapsack): " << fractionalKnapsack(W, arr, n) << endl;
    return 0;
}