// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

namespace AuthoringDemo
{
    public sealed class Example
    {
        public int SampleProperty { get; set; }

        public static string SayHello()
        {
            return "Hello from your C# WinRT component";
        }

        public static string SayHelloAgain()
        {
            return "Hello again from your C# WinRT component";
        }
    }
}
