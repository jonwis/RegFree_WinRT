#pragma once

#include "AnotherThing.AnotherClass.g.h"

namespace winrt::AnotherThing::implementation
{
    struct AnotherClass : AnotherClassT<AnotherClass>
    {
        AnotherClass() = default;
        hstring MyProperty();
    };
}

namespace winrt::AnotherThing::factory_implementation
{
    struct AnotherClass : AnotherClassT<AnotherClass, implementation::AnotherClass>
    {
    };
}
