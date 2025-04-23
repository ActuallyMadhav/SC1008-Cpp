#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> numbers = {40, 10, 30, 20};

    numbers.push_front(5);
    numbers.push_back(50);
    numbers.remove(30);
    numbers.sort();
    numbers.pop_back();
    numbers.pop_back();

    list <int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 15);

    for(int num : numbers){
        cout << num << ' ';
    }
    return 0;
}