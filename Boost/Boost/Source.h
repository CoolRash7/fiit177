#include <string>
#include <conio.h>


std::string number_less_20_to_string(int number)
{

	std::string answer = "";
	switch(number) {
		case 0: answer="����"; 
			break;
		case 1: answer="����";
			break;
		case 2: answer="���";
			break;
		case 3: answer="���";
			break;
		case 4: answer="������";
			break;
		case 5: answer="����";
			break;
		case 6: answer="�����";
			break;
		case 7: answer="����";
			break;
		case 8: answer="������";
			break;
		case 9: answer="������";
			break;
		case 10: answer="������";
			break;
		case 11: answer="����������";
			break;
		case 12: answer="����������";
			break;
		case 13: answer="����������";
			break;
		case 14: answer="������������";
			break;
		case 15: answer="����������";
			break;
		case 16: answer="�����������";
			break;
		case 17: answer="�����������";
			break;
		case 18: answer="�������������";
			break;
		case 19: answer="������������";
			break;
		case 20: answer="��������";
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
			case 2: answer1 = "�������� "; break;
			case 3: answer1 = "�������� "; break;
			case 4: answer1 = "����� "; break;
			case 5: answer1 = "��������� "; break;
			case 6: answer1 = "���������� "; break;
			case 7: answer1 = "���������� "; break;
			case 8: answer1 = "��������� "; break;
			case 9: answer1 = "�������� "; break;

		}
		answer0 = number_less_20_to_string(number1);
		answer = answer1 + answer0;
	} else if (number == 100) {
		answer = "���";
	}

    return answer;
}


