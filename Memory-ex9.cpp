#include <chrono>
#include <iostream>
#include <thread>

int main() {
    int* jjj;
    for (int k = 0; k < 100000000; k++) {
        jjj = new int(k);
        int lll = k % 100000;
        if (lll < 1) {
            std::cout << "k is " << k << " " << lll << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        delete jjj;
    }
    std::cout << "big pause before exiting" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100000));
}

// Running the process the first time continually drained free memory

// Using `delete jjj` frees up memory of each jjj object so that the total unused memory
// doesn't get drained as quickly.
