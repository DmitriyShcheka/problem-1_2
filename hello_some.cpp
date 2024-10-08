#include <iostream>
#include <string>
 /* В функции надо выделять то, что имеет потенциал переиспользования. Эта функция не нужна никому,
 * кроме тебя. Попробуй выделить функциональность печати hello + слово */
void hello_some(std::string s){ 
   /* endl не просто выводит символ новой строки, а делает еще и дополнительные
     * операции, что тоже может замедлить программу. Поэтому тут лучше использовать
     * '\n' */
   std::cout << "Hello, world!" << std::endl;
   while(getline(std::cin, s) && !s.empty()){ 
      std::cout << "Hello, " << s << "!" << std::endl;         
   }  
}

