#include<iostream>
using namespace std;

long swapBits(long x, int i, int j){
    long ithBit = x & (1 << i);
    long jthBit = j & (1 << j);

    if(ithBit != jthBit){
        long xorv = (1L << i) | (1L << j);
        return x ^ xorv;
    }
    return x;

}

int main(){
    long x;
    int i, j;
    cin>>x>>i>>j;
    cout<<swapBits(x, i, j)<<endl;
}