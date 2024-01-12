#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;
//using namespace TestLibrary::ClassLibrary1;


namespace winrt::BlankApp1::implementation
{
    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        hstring str = AuthoringDemo::Example::SayHello().c_str();
        myButton().Content(box_value(str));
    }
}
