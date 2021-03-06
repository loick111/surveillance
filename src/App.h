//
// Created by thomas on 27/01/16.
//

#ifndef SURVEILLANCE_APP_H
#define SURVEILLANCE_APP_H

#include "Webcam.h"
#include "VideoDisplay.h"
#include "FrameOutput.h"

class App {
private :
    FrameOutput * output;

public :
    enum {
        ESC = 27
    };

    App(FrameOutput * output);

#if DEBUG == 1
    void showUntil(Webcam webcam, VideoDisplay videoDisplay, const char key);
#else
    void showUntil(Webcam webcam, const char key);
#endif

};


#endif //SURVEILLANCE_APP_H
