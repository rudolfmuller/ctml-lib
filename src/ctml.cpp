#include "../include/ctml.hpp"

std::string title(const std::string& content){
    return "<title>"+content+"</title>";
}

std::string p(const std::string& content) {
    return "<p>" + content + "</p>";
}

std::string h1(const std::string& content) { return "<h1>" + content + "</h1>"; }
std::string h2(const std::string& content) { return "<h2>" + content + "</h2>"; }
std::string h3(const std::string& content) { return "<h3>" + content + "</h3>"; }
std::string h4(const std::string& content) { return "<h4>" + content + "</h4>"; }
std::string h5(const std::string& content) { return "<h5>" + content + "</h5>"; }
std::string h6(const std::string& content) { return "<h6>" + content + "</h6>"; }

std::string strong(const std::string& content) { return "<strong>" + content + "</strong>"; }
std::string em(const std::string& content) { return "<em>" + content + "</em>"; }
std::string b(const std::string& content) { return "<b>" + content + "</b>"; }
std::string i(const std::string& content) { return "<i>" + content + "</i>"; }
std::string s(const std::string& content) { return "<s>" + content + "</s>"; }

std::string br() { return "<br>"; }
std::string hr() { return "<hr>"; }


std::string a(const std::string& href, const std::string& text) {
    return "<a href='" + href + "'>" + text + "</a>";
}

std::string img(const std::string& src, const std::string& alt) {
    return "<img src='" + src + "' alt='" + alt + "'>";
}
