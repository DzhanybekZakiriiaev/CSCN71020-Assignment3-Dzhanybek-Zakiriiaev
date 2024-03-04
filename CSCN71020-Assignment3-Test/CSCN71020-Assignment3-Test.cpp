#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* RockPaperScissors(char* player1, char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020Assignment3Test
{
	TEST_CLASS(CSCN71020Assignment3Test)
	{
	public:
		
		TEST_METHOD(RockPaper)
		{
			char player1[20] = "rock";
		    char player2[20] = "paper";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual(player2, result);
		}
	};
}
