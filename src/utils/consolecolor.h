#ifndef __CONSOLECOLOR_H
#define __CONSOLECOLOR_H

// ---------------------------------------------------------------------------------------------------------------------
// Console

/// console display color
#ifdef _WIN32

const char* WIN32_CONSOLE_COLOR(int i);

#define CONSOLE_RESET   WIN32_CONSOLE_COLOR(7)
#define CONSOLE_BLACK   WIN32_CONSOLE_COLOR(8)
#define CONSOLE_RED     WIN32_CONSOLE_COLOR(4)
#define CONSOLE_GREEN   WIN32_CONSOLE_COLOR(10)
#define CONSOLE_YELLOW  WIN32_CONSOLE_COLOR(6)
#define CONSOLE_BLUE    WIN32_CONSOLE_COLOR(1)
#define CONSOLE_MAGENTA WIN32_CONSOLE_COLOR(35)
#define CONSOLE_CYAN    WIN32_CONSOLE_COLOR(11)
#define CONSOLE_WHITE   WIN32_CONSOLE_COLOR(7)

#else

#define CONSOLE_RESET   "\033[0m"
#define CONSOLE_BLACK   "\033[30m"
#define CONSOLE_RED     "\033[31m"
#define CONSOLE_GREEN   "\033[32m"
#define CONSOLE_YELLOW  "\033[33m"
#define CONSOLE_BLUE    "\033[34m"
#define CONSOLE_MAGENTA "\033[35m"
#define CONSOLE_CYAN    "\033[36m"
#define CONSOLE_WHITE   "\033[37m"



#endif


#endif
