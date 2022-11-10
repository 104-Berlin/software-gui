#pragma once

#if WIN32
    #ifdef SGUI_EXPORT
        #define GUI_API __declspec(dllexport)
    #else
        #define GUI_API __declspec(dllimport)
    #endif
#else
#define GUI_API
#endif

#include "renderer.h"

#include "sogui_view.h"
#include "application/sogui_application.h"