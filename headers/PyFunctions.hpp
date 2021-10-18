//
// Created by reichsstolz on 10.10.2021.
//

#ifndef BLINDBROWSER_PYFUNCTIONS_H
#define BLINDBROWSER_PYFUNCTIONS_H


#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <regex>
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;

#pragma push_macro("slots")
#undef slots
#include <pybind11/embed.h>
#pragma pop_macro("slots")

namespace py = pybind11;
using std::string;
using std::vector;

/*class Tag{
public:
    string tag_type;
    string data;
    vector<string> children;
    std::map<string, string> attrs;
    Tag(const string& json);
};*/

string return_req(const string& url);

vector<json> make_json(const string& req);





#endif //BLINDBROWSER_PYFUNCTIONS_H
