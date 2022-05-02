#include <X11/Xlib.h>
#include <stdio.h>
#include <err.h>

static Display* dpy;
static int scr;
static Window root;

#define POSX    500
#define POSY    500
#define WIDTH   500
#define HEIGHT  500
#define BORDER  15

int main ()
{
    dpy = XOpenDisplay(NULL);
    if (dpy == NULL)
        errx(1. "Display unavailable");
    return 0;
}

