#pragma once

class FBullCowGame {
public:
	void Reset(); // TODO Make a more rich return value
	int GetMaxTries();
	int GetCurrentTries();
	bool IsGameWon();
	bool CheckGuessValidity(string); // TODO Make a more rich return value


// ^^ Please try and ignore this and focus on the interface above ^^
private:
	int MyCurrentTry;
	int MyMaxTries;
};