#include <iostream>
using namespace std;

#include "bob.h"

bool is_uppercase(std::string t) {
  for(int i = 0; i < t.length(); i++) {
    char c = t[i];
    if(c <= 'z' && c >= 'a') return false;
  }
  for(int i = 0; i < t.length(); i++) {
    char c = t[i];
    if(c <= 'Z' && c >= 'A') return true;
  }
  return false;
}

bool is_silence(std::string t) {
    for(int i = 0; i < t.length(); i++) {
        char c = t[i];
        if(c != ' ') return false;
    }
    return true;
}

string trim(const string& str)
{
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

bool is_question(string q){
    q = trim(q);
    return q.compare(q.length() - 1, 1, "?") == 0;
}

std::string bob::hey(std::string says) {
    if(is_uppercase(says) == true) return "Whoa, chill out!";
    if (is_silence(says) == true) return "Fine. Be that way!";
    if (is_question(says) == true) return "Sure.";

    return "Whatever.";
}
