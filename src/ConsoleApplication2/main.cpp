﻿#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

int main()
{
    init_apartment();
    Uri uri(L"http://aka.ms/cppwinrt");
    printf("Hello, %ls!\n", uri.AbsoluteUri().c_str());

    hstring str = AuthoringDemo::Example::SayHello().c_str();
    printf("String is, %ls!\n", str);
}
