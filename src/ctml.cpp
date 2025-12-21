#include "../include/ctml.hpp"

element_t DOCTYPE(element_t type) { return "<!DOCTYPE "+type+">"; }
element_t HTML(element_t code) {return code;}
element_t title(content_t text){return "<title>"+text+"</title>";}

element_t strong(element_t element){ return "<strong>"+element+"</strong>"; }
element_t p(element_t element) {return "<p>" + element + "</p>";}
element_t em(element_t element){ return "<em>"+element+"</em>"; }
element_t b(element_t element){ return "<b>"+element+"</b>"; }
element_t i(element_t element){ return "<i>"+element+"</i>"; }
element_t s(element_t element){ return "<s>"+element+"</s>"; }
element_t u(element_t element){ return "<u>"+element+"</u>"; }
element_t code(element_t element){ return "<code>"+element+"</code>"; }
element_t pre(element_t element){ return "<pre>"+element+"</pre>"; }


element_t h1(content_t text) { return "<h1>" + text + "</h1>"; }
element_t h2(content_t text) { return "<h2>" + text + "</h2>"; }
element_t h3(content_t text) { return "<h3>" + text + "</h3>"; }
element_t h4(content_t text) { return "<h4>" + text + "</h4>"; }
element_t h5(content_t text) { return "<h5>" + text + "</h5>"; }
element_t h6(content_t text) { return "<h6>" + text + "</h6>"; }

element_t br() { return "<br>"; }
element_t hr() { return "<hr>"; }

element_t li(content_t text){
    return "<li>"+text+"</li>";
}

element_t style(content_t css){
    return "<style>"+css+"</style>";
}

element_t script(content_t js){
    return "<script>"+js+"</script>";
}

element_t a(content_t href, content_t text) {
    return "<a href='" + href + "'>" + text + "</a>";
}

element_t img(content_t src, content_t alt) {
    return "<img src='" + src + "' alt='" + alt + "'>";
}

