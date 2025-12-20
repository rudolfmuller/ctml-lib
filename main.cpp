#include "include/ctml.hpp"

int main(){
    html(
        title("Test"),
        hr(),
        a("https://github.com/rudolfmuller", "GitHub")
    );
}