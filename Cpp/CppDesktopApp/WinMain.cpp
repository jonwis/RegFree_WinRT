#include "pch.h"
#include "winrt/WinRTComponent.h"
#include "winrt/AnotherThing.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace WinRTComponent;
using namespace AnotherThing;

int __stdcall wWinMain(HINSTANCE, HINSTANCE, LPWSTR, int)
{
    Class winrtComponentClass;
    AnotherClass anotherClass;

    init_apartment(apartment_type::single_threaded);
    ::MessageBoxW(::GetDesktopWindow(), winrtComponentClass.MyProperty().c_str(), L"Desktop App + WinRT Component", MB_OK);
    ::MessageBoxW(::GetDesktopWindow(), anotherClass.MyProperty().c_str(), L"Desktop App + WinRT Component (again)", MB_OK);
}
