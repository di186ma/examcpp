#include <iostream>
//#include <thread>
//#include <mutex>
//#include <future>
//#include <vector>
//#include <list>
//#include <map>
# include <algorithm>
//#include <fstream>

using namespace std;



//mutex mtx;

//void printHi(const string& massage) {
//    mtx.lock();
//    cout << massage << endl;
//    mtx.unlock();
//}
//
//void calcSum(promise<int>&& promise, int a, int b) {
//    promise.set_value(a+b);
//}

int main() {
//    promise<int> promise;
//    future<int> future = promise.get_future();

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

//    string massage1 = "Hello from thread 1";
//    string massage2 = "Hello from thread 2";
//
//    thread t1(printHi, massage1);
//    thread t2(printHi, massage2);
//
//    t1.join();
//    t2.join();
//
//    cout << "Hello from main" << endl;
//
//
//    thread t(calcSum, move(promise), 333, 666);
//    t.join();
//
//    int result = future.get();
//    cout << result << endl;





    // Работа со стандартной библиотекой

    vector<int> numbers1 = {111, 222, 333, 444 ,555};
    numbers1.push_back(888);

    auto item = find(numbers1.begin(), numbers1.end(), 333);
    cout << *item;

//    cout<< numbers1[2] << endl;
//    cout << numbers1.size() <<endl;
//
//    for (int i = 0; i < numbers1.size(); ++i) {
//        cout<<numbers1[i];
//    }

    // список
//    list<int> numbers2 = {1, 2, 3, 4, 5};
//
//    numbers2.push_front(0);
//
//    for (int num2 : numbers2)
//    {
//        cout << num2 << endl;
//    }

    // ассоциативные контейнеры
    // map

//    map<string, int> count;
//    count["flowers"] = 55;
//    count["cars"] = 23;
//
//    cout<<count["cars"] << endl;
//
//    for (const auto& pair : count) {
//        cout << pair.first << " : " << pair.second << endl;
//    }


//    ofstream outFile("hello.txt");
//    outFile << "Hello";
//    outFile.close();
//
//    fstream file("hello.txt", ios::app);
//    file << "bye";
//    file.close();
//
//    ifstream infile("hello.txt");
//    string str;
//    while (getline(infile, str)) {
//        cout << str;
//    }
//    infile.close();



    return 0;
}
