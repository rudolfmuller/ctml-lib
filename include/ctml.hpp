#pragma once

#include <string>
#include <fstream>
#include <cstdlib>
#include <filesystem>

namespace fs = std::filesystem;

typedef const std::string element_t;
typedef const std::string content_t;

element_t DOCTYPE(element_t type);
element_t title(content_t text);
element_t style(content_t css);
element_t script(content_t js);

element_t strong(element_t element);
element_t p(element_t element);
element_t em(element_t element);
element_t b(element_t element);
element_t i(element_t element);
element_t s(element_t element);
element_t u(element_t element);
element_t code(element_t element);
element_t pre(element_t element);

element_t li(content_t text);

element_t h1(content_t text);
element_t h2(content_t text);
element_t h3(content_t text);
element_t h4(content_t text);
element_t h5(content_t text);
element_t h6(content_t text);

element_t br();
element_t hr();

element_t a(content_t href, content_t text);
element_t img(content_t src, content_t alt);

template<typename... t>
element_t div(content_t cls, t... h) {
    return "<div class="+cls+">" + (std::string("") + ... + h) + "</div>";
}

template<typename... t>
element_t ul(t... h) {
    return "<ul>" + (std::string("") + ... + h) + "</ul>";
}
template<typename... t>
element_t html(t... h) {
    return "<html>" + (std::string("") + ... + h) + "</html>";
}

template<typename... t>
element_t head(t... h) {
    return "<head>" + (std::string("") + ... + h) + "</head>";
}

template<typename... t>
element_t body(t... h) {
    return "<body>" + (std::string("") + ... + h) + "</body>";
}

template<typename... t>
void index(t... h) {
    fs::path directory = "./index.html";
    std::ofstream f(directory);
    ((f << h), ...);
    f.close();
    system(std::string("xdg-open " + directory.string()).c_str());
}