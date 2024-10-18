#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativetestingTwo
{
    TEST_CLASS(NativetestingTwo)
    {
    public:

        
        TEST_METHOD(setLen_ValidInput)
        {
            int length = 25;
            setLength(50, &length);  
            Assert::AreEqual(50, length);  
        }

        
        TEST_METHOD(setLen_InvalidInput_TooHigh)
        {
            int length = 25;  
            setLength(150, &length); 
            Assert::AreEqual(25, length); 
        }

        
        TEST_METHOD(setLen_InvalidInput_Negative)
        {
            int length = 25;  
            setLength(-10, &length);  
            Assert::AreEqual(25, length);  
        }

        
        TEST_METHOD(setWid_ValidInput)
        {
            int width = 0;  
            setWidth(50, &width);  
            Assert::AreEqual(50, width);  
        }

        TEST_METHOD(setWid_InvalidInput_TooHigh)
        {
            int width = 0;  
            setWidth(150, &width);  
            Assert::AreEqual(0, width);  
        }

        
        TEST_METHOD(setWid_InvalidInput_ZeroOrNegative)
        {
            int width = 0; 
            setWidth(0, &width);  
            Assert::AreEqual(0, width);  
        }

        
        TEST_METHOD(setLen_EdgeCase_MaxValid)
        {
            int length = 25;  
            setLength(99, &length); 
            Assert::AreEqual(99, length); 
        }

        
        TEST_METHOD(setWid_EdgeCase_MinValid)
        {
            int width = 0;  
            setWidth(1, &width);  
            Assert::AreEqual(1, width); 
        }
    };
}
