#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    const int width=80;
    const int height=20;

    int x=width/2;
    int y=height/2;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> move(-1, 1);

    while (true) {
        cout<<"\033[2J\033[1;1H";

        for(int i=0; i<height; i++) {
            for(int j=0; j<width; j++) {
                if(i==y && j==x)
                    cout<<"O";
                else
                    cout<<".";
            }
            cout<<endl;
        }

        x+=move(gen);
        y+=move(gen);

        x=max(0, min(width-1, x));
        y=max(0, min(height-1, y));

        this_thread::sleep_for(chrono::milliseconds(50));
    }

    return 0;
}