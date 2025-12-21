#pragma once

#include <string>
#include <fstream>
#include <cstdlib>

typedef const std::string element_t;
typedef const std::string content_t;

element_t DOCTYPE(element_t type);
element_t HTML(element_t code);
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


template<typename... ult>
element_t ul(ult... h) {
    return "<ul>" + (std::string("") + ... + h) + "</ul>";
}

template<typename... headt>
element_t head(headt... h) {
    return "<head>" + (std::string("") + ... + h) + "</head>";
}

template<typename... bodyt>
element_t body(bodyt... h) {
    return "<body>" + (std::string("") + ... + h) + "</body>";
}

template<typename... elementst>
void html(std::string name, elementst... h) {
    name = "./" + name + ".html";
    std::ofstream f(name);
    ((f << h), ...);
    f.close();
    system(std::string("xdg-open " + name).c_str());
}
