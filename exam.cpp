#include <iostream>
#include <thread>
#include <mutex>
#include <future>
using namespace std;

mutex mtx;

void printHi(const string& massage) {
    mtx.lock();
    cout << massage << endl;
    mtx.unlock();
}

void calcSum(promise<int>&& promise, int a, int b) {
    promise.set_value(a+b);
}

int main() {
    promise<int> promise;
    future<int> future = promise.get_future();

    // Лямбда функции

//    int a = 10;
//    int q = 100;
//    auto b = [a, &q](int i) {
//        q++;
//        return a-i;
//    };
//
//    cout << q << '\t' << b(5) << '\t' << q << endl;

    // Работа с потоками

    string massage1 = "Hello from thread 1";
    string massage2 = "Hello from thread 2";

    thread t1(printHi, massage1);
    thread t2(printHi, massage2);

    t1.join();
    t2.join();

    cout << "Hello from main" << endl;


    thread t(calcSum, move(promise), 333, 666);
    t.join();

    int result = future.get();
    cout << result << endl;





    // Работа со стандартной библиотекой

    return 0;
}
