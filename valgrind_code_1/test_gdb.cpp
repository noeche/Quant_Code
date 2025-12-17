#include <iostream>

using namespace std;

struct StockData
{
    /* data */
    int code; //股票代码
    double price;// 价格
    int volume;  //成交量
};

void process_stock_data(StockData data){
    cout<<"处理行情：代码"<<data.code<<"，价格"<<data.price << endl;
    if(data.price>100){
        int error = 1/1;
    }
}

int main(){
    StockData data1 = {600000, 80.5, 1000};
    StockData data2 = {600001,120.3, 2000};
    process_stock_data(data1);
    process_stock_data(data2);
    return 0;
}