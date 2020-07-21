#include "pch.h"
#include "AnotherClass.h"
#include "AnotherThing.AnotherClass.g.cpp"

namespace winrt::AnotherThing::implementation
{
    hstring componentString = L"Hello from another Non-Packaged WinRT Component! :D";

    hstring AnotherClass::MyProperty()
    {
        return componentString;
    }
}

