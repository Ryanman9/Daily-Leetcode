// 121. Best Time to Buy and Sell Stock

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*int maxProfit(vector<int>& prices){
    int maxprice = 0;
    for (int i=0; i<prices.size(); i++){
        for (int j=i+1; j<prices.size(); j++){
            if(prices[j]-prices[i] > maxprice){
                maxprice = prices[j]-prices[i];
            }
        }
    }
    return maxprice;
}*/

int maxProfit(vector<int>& prices){
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i=0; i<prices.size(); i++){
        minPrice = min(minPrice,prices[i]);
        maxProfit = max(maxProfit,prices[i]-minPrice);
    }
    return maxProfit;
}

int main(){
    vector <int> prices = {7,1,5,3,6,4};

    cout << "Max profit is: "<< maxProfit(prices) <<endl;
    
    return 0;
}