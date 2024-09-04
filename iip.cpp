#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>

using namespace std;

string get_iip() {
    // Execute the shell command and capture the output
    string command = "ip addr show | grep \"inet \" | grep -v \"127.0.0.1\" | awk '{ print $2 }' | cut -d/ -f1";
    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) {
        cerr << "Error executing command: " << command << endl;
        return "";
    }

    // Read the output line by line
    char buffer[1024];
    string output;
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        output += buffer;
    }
    pclose(pipe);

    // Process the output
    istringstream iss(output);
    string token;
    vector<string> ip_addresses;
    while (iss >> token) {
        ip_addresses.push_back(token);
    }

    // Format the output
    string iip = "IIP: ";
    for (const string& ip : ip_addresses) {
        iip += ip + " ";
    }
    iip.pop_back(); // Remove the trailing space

    return iip;
}

int main() {
    string iip = get_iip();
    cout << iip << endl;
    return 0;
}