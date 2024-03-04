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
		TEST_METHOD(PaperRock)
		{
			char player1[20] = "paper";
			char player2[20] = "rock";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual(player2, result);
		}
		TEST_METHOD(ScissorsRock)
		{
			char player1[20] = "scissors";
			char player2[20] = "rock";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual(player2, result);
		}
		TEST_METHOD(RockScissors)
		{
			char player1[20] = "rock";
			char player2[20] = "scissors";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual(player2, result);
		}
		TEST_METHOD(PaperScissors)
		{
			char player1[20] = "paper";
			char player2[20] = "scissors";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual(player2, result);
		}
		TEST_METHOD(ScissorsPaper)
		{
			char player1[20] = "scissors";
			char player2[20] = "paper";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual(player2, result);
		}
		TEST_METHOD(DrawPaper)
		{
			char player1[20] = "paper";
			char player2[20] = "paper";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(DrawRock)
		{
			char player1[20] = "rock";
			char player2[20] = "rock";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(DrawScissors)
		{
			char player1[20] = "scissors";
			char player2[20] = "scissors";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(Invalid)
		{
			char player1[20] = "rock";
			char player2[20] = "1233ddd";
			char* result = RockPaperScissors(player1, player2);
			Assert::AreEqual("Invalid", result);
		}
	};
}
