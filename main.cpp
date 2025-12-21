#include "include/ctml.hpp"

int main(){
    html("index",
        DOCTYPE("html"),
        head(
            title("C++")
        ),
        body(
            em(h1("C++ Code")),
            code("std::cout << \"Hello, World\";"),br(),
            code("int x = 5;"),br()
        )
    );
}