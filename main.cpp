#include "include/ctml.hpp"

int main(){
    index(
        DOCTYPE("html"),
        html(
            head(
                title("C++"),
                style(".note {background-color: rgba(0, 0, 255, 1);}")
            ),
            body(
                em(h1("C++ Code")),
                div("note",
                    code("std::cout << \"Hello, World\";"),br(),
                    code("int x = 5;"),br()
                )
            )
        )
    );
}
