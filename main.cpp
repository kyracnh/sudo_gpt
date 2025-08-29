#include <iostream>
#include <thread>
#include <string>


using namespace std;

int main()
{
    string prompt;

    while (true)
    {
        cout << "\x1B[36m" << "Sudo GPT : " << "\x1B[0m";
        getline(std::cin, prompt);
        cout << "\x1B[32m" << "Thinking... " << "\x1B[0m" << endl;
        string response;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        if (prompt.find("Hello") != std::string::npos)
        {
            response = "Hello mr Ahmed, Welcome Back man!";
            cout << response << endl;
        }
    }

    return 0;
}