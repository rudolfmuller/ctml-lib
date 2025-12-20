#ifndef CTML_HPP
#define CTML_HPP

#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

std::string p(const std::string& content);
std::string h1(const std::string& content);
std::string h2(const std::string& content);
std::string h3(const std::string& content);
std::string h4(const std::string& content);
std::string h5(const std::string& content);
std::string h6(const std::string& content);
std::string strong(const std::string& content);
std::string em(const std::string& content);
std::string i(const std::string& content);
std::string b(const std::string& content);
std::string s(const std::string& content);
std::string br();
std::string hr();
std::string a(const std::string& href, const std::string& text);
std::string img(const std::string& src, const std::string& alt);
std::string title(const std::string& content);
template<typename... htmlTags>
void html(htmlTags... tags) {
    std::ofstream f("./index.html");
    ((f << tags), ...);
    f.close();
    system("xdg-open ./index.html");
}
#endif
