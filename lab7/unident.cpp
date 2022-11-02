
#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line) {
  int index = 0;
  string res = " ";
    for(int i = 0; i < line.length(); i++){
        while(!isspace(line[i])){
            res += line.substr(line[i],i);
           
        }
    }
    return res;
  // ? while the character at the index is a space
  //   ? move onto the next character (next index)

  // ? get the substring from line starting at index
  // * string.substr(start_pos) gives the rest of the string starting from start_pos
  // ? return that substring
}

int main() {
  string line;
  while(getline(cin,line));
  cout << removeLeadingSpaces(line) << endl;
}


int main() {
   string line;
   int open_blocks; 
   while(getline(cin, line)) {
   line = removeLeadingSpaces(line);
         if(line[0]== '}'){
            open_blocks--;
         } 
      for( int i = 0; i < open_blocks; i++){
        cout << '\t';
      }
      cout << line << endl;
       open_blocks += countChar(line, '{');
       open_blocks -= countChar(line, '}');
   }
   return 0;
}


int main() {
   string line, res;
   int open_blocks,open,close; 
   while(getline(cin, line)) {
   res = removeLeadingSpaces(line);
         if(res[0] == '}'){
             for( int i = 0; i < open_blocks-1; i++){
                cout << '\t';
            }
        }
    else {
      for( int i = 0; i < open_blocks; i++){
        cout << '\t';
      }
    }
       open = countChar(res, '{');
       close = countChar(res, '}');
       open_blocks += open - close;
       cout << res << endl;
   }

}