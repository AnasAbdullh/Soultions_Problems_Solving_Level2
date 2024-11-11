#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

void setConsoleColor(int textColor, int bgColor)
{
#ifdef _WIN32
    // لنظام Windows
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, textColor | (bgColor << 4));
#else
    // لنظام Linux وغيره
    std::cout << "\033[" << textColor << "m\033[" << (bgColor + 10) << "m";
#endif
}

int main()
{
    // مثال: نص أحمر على خلفية بيضاء
    setConsoleColor(31, 47);
    std::cout << "Anas" << std::endl;

    // إعادة اللون إلى الوضع الطبيعي
    setConsoleColor(0, 0);
    return 0;
}