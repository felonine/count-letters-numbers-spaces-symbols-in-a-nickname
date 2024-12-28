#include <iostream>
#include <string>
#include <cctype>  

void conclusion(std::string& input);  
void letters_counter(int& letter_count, const std::string& input);
void digits_counter(int& digit_count, const std::string& input);
void spaces_counter(int& space_count, const std::string& input);
void others_counter(int& other_count, const std::string& input);
  void analyzer_error(std::string& input)  
  {    
          while(true) { 
               std::cout << " Enter your nick_name: ";
               getline(std::cin, input); 
                    if(input.empty()) { 
                        std::cout << "\n pls write your nickname, again: ";

                    } else { 
                        break;
                    }
          }
          
  }

int main() {
    std::string input;
    conclusion(input); 
     analyzer_error(input);
    

    int letter_counter = 0;
    int digit_counter = 0;
    int space_counter = 0;
    int other_counter = 0;

    letters_counter(letter_counter, input);
    digits_counter(digit_counter, input);
    spaces_counter(space_counter, input);
    others_counter(other_counter, input);

    std::cout << std::endl;
    std::cout << "Letters in nickname: " << letter_counter << std::endl;
    std::cout << "Digits in nickname: " << digit_counter << std::endl;
    std::cout << "Spaces in nickname: " << space_counter << std::endl;
    std::cout << "Others in nickname: " << other_counter << std::endl;

    return 0;
}

void conclusion(std::string& input) {  
    std::cout << "You can enter symbols like: (@, %, $, *, ., /, # and others)" << std::endl;
    
}

void letters_counter(int& letter_count, const std::string& input) {
    for (char symbol : input) {
        if (isalpha(symbol)) {
            letter_count++;
        }
    }
}

void digits_counter(int& digit_count, const std::string& input) {
    for (char symbol : input) {  
        if (isdigit(symbol)) {
            digit_count++;
        }
    }
}

void spaces_counter(int& space_count, const std::string& input) 
{
    for (char symbol : input) {
        if (isspace(symbol)) {
            space_count++;
        }
    }
}

void others_counter(int& other_count, const std::string& input) 
{
    for (char symbol : input) {
        if (!isalpha(symbol) && !isdigit(symbol) && !isspace(symbol)) {
            other_count++;
        }
    }
}  
 