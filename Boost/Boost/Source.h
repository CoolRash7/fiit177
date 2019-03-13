#include <string>
#include <conio.h>


std::string number_less_20_to_string(int number)
{

	std::string answer = "";
	switch(number) {
		case 0: answer="ноль"; 
			break;
		case 1: answer="один";
			break;
		case 2: answer="два";
			break;
		case 3: answer="три";
			break;
		case 4: answer="четыре";
			break;
		case 5: answer="пять";
			break;
		case 6: answer="шесть";
			break;
		case 7: answer="семь";
			break;
		case 8: answer="восемь";
			break;
		case 9: answer="девять";
			break;
		case 10: answer="десять";
			break;
		case 11: answer="одинадцать";
			break;
		case 12: answer="двенадцать";
			break;
		case 13: answer="тринадцать";
			break;
		case 14: answer="четырнадцать";
			break;
		case 15: answer="пятнадцать";
			break;
		case 16: answer="шестнадцать";
			break;
		case 17: answer="семьнадцать";
			break;
		case 18: answer="восемьнадцать";
			break;
		case 19: answer="девятнадцать";
			break;
		case 20: answer="двадцать";
	}

	return answer;
}

std::string number_less_100_to_string(int number)
{
    std::string answer = "";
	std::string answer0 = "";
	std::string answer1 = "";
	if (number >= 0 && number <= 20) {
		answer = number_less_20_to_string(number);
	} else if (number > 20 && number != 100) {

		int number1 = number % 10;
		int number2 = number % 100 / 10;

		switch(number2) {
			case 2: answer1 = "двадцать "; break;
			case 3: answer1 = "тридцать "; break;
			case 4: answer1 = "сорок "; break;
			case 5: answer1 = "пятдесять "; break;
			case 6: answer1 = "шестдесять "; break;
			case 7: answer1 = "семьдесять "; break;
			case 8: answer1 = "пятдесять "; break;
			case 9: answer1 = "девятсот "; break;

		}
		answer0 = number_less_20_to_string(number1);
		answer = answer1 + answer0;
	} else if (number == 100) {
		answer = "сто";
	}

    return answer;
}


