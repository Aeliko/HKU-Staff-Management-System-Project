#include <string>
const int complex = 5;



string cipher(int cip, string line) {
  string output = "";
  if (!cip)
  shift = complex;
  else
  shift = -complex;
  for (int i = 0; i < line.length(); i++) {
    if (isupper(line[i]))
    output += char(int(text[i]+shift-65)%26 +65);
    else
    if (islower(line[i]))
    output += char(int(text[i]+shift-97)%26 +97);
    else
    output += line[i];
  }
  return output;
}
