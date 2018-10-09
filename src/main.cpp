//
// Created by Lehdari on 2018-10-10.
//

#include "SDLApp.hpp"


int main(int argv, char** args) {

    SDLApp app(SDLApp::Settings("Robokasi"));
    app.loop();

    return 0;
}
