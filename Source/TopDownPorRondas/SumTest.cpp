// Fill out your copyright notice in the Description page of Project Settings.

#include "Misc/AutomationTest.h"
#include "SumTest.h"

// FBasicSumTest.cpp
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FBasicSumTest,
	"Game.Cooking.SumTest",
	EAutomationTestFlags::EditorContext |
	EAutomationTestFlags::ProductFilter
)
bool FBasicSumTest::RunTest(const FString& Params)
{
	int32 result = 10 + 10;
	//TestEqual(TEXT(“10 + 10 debe ser igual a 20”), result, 20);
	//return true;
	return TestEqual(TEXT("10 + 10 debe ser igual a 20"), result, 20);
}