﻿#pragma once

#include "MainPage.g.h"

namespace winrt::BlankApp1::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage()
        {
            InitializeComponent();
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::BlankApp1::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
