
#include <iostream>
#include <string>
#include <locale>
#include "letters.h"
using namespace std;

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"

void print_final_output(string output, string color_choice)
{
  // 0 = white
  // 1 = red
  // 2 = green
  // 3 = yellow
  // 4 = blue
  // 5 = magenta
  // 6 = cyan

  if (color_choice[0] == '1')
  {
    // red
    cout << BOLDRED << output << RESET << "\n";
  }
  
  else if (color_choice[0] == '2')
  {
    // green
    cout << BOLDGREEN << output << RESET << "\n";
  }
  
  else if (color_choice[0] == '3')
  {
    // yellow
    cout << BOLDYELLOW << output << RESET << "\n";
  }
  
  else if (color_choice[0] == '4')
  {
    // blue
    cout << BOLDBLUE << output << RESET << "\n";
  }
  
  else if (color_choice[0] == '5')
  {
    // magenta
    cout << BOLDMAGENTA << output << RESET << "\n";
  }
  
  else if (color_choice[0] == '6')
  {
    // cyan
    cout << BOLDCYAN << output << RESET << "\n";
  }
  
  else
  {
    // white
    cout << BOLDWHITE << output << RESET << "\n";
  }
}

string get_string(char letter, int index, string &error_string)
{
  
  if (letter == A)
  {
    return A_[index];
  }
  
  if (letter == B)
  {
    return B_[index];
  }
  
  if (letter == C)
  {
    return C_[index];
  }
  
  if (letter == D)
  {
    return D_[index];
  }
  
  if (letter == E)
  {
    return E_[index];
  }
  
  if (letter == F)
  {
    return F_[index];
  }
  
  if (letter == G)
  {
    return G_[index];
  }
  
  if (letter == H)
  {
    return H_[index];
  }
  
  if (letter == I)
  {
    return I_[index];
  }
  
  if (letter == J)
  {
    return J_[index];
  }
  
  if (letter == K)
  {
    return K_[index];
  }
  
  if (letter == L)
  {
    return L_[index];
  }
  
  if (letter == M)
  {
    return M_[index];
  }
  
  if (letter == N)
  {
    return N_[index];
  }
  
  if (letter == O)
  {
    return O_[index];
  }
  
  if (letter == P)
  {
    return P_[index];
  }
  
  if (letter == Q)
  {
    return Q_[index];
  }
  
  if (letter == R)
  {
    return R_[index];
  }
  
  if (letter == S)
  {
    return S_[index];
  }
  
  if (letter == T)
  {
    return T_[index];
  }
  
  if (letter == U)
  {
    return U_[index];
  }
  
  if (letter == V)
  {
    return V_[index];
  }
  
  if (letter == W)
  {
    return W_[index];
  }
  
  if (letter == X)
  {
    return X_[index];
  }
  
  if (letter == Y)
  {
    return Y_[index];
  }
  
  if (letter == Z)
  {
    return Z_[index];
  }
  
  if (index == 0)
  {
    error_string += letter;
    error_string += " ";
  }
  
  return "";
}

void set_equal(string (&array1)[6], string array2[6])
{
  // array1 = array2
  for (int i = 0; i < 6; i++)
  {
    array1[i] = array2[i];
  }
  return;
}

void add_to_output(string rows[], string &output)
{
  for (int i = 0; i < 6; i++)
  {
    output += rows[i];
    output += "\n";
  }
  
  return;
}

void start(int max_length)
{
  bool quit = false;
  
  string text         = "";
  string input        = "";
  string final_output = "";
  string quit_string  = "";
  string error_string = "";
  string color_choice = "";
  
  locale loc;
  
  string current_rows[] = { "", "", "", "", "", "" };
  string blanks[]       = { "", "", "", "", "", "" };
  string last_rows[]    = { "", "", "", "", "", "" };
  
  int last_space_index = 0;
  cout << "\n";
  
  while (!quit)
  {
    cout << "What do you want to type?\n";
    getline(cin, text);
    cout << "\n";
    
    cout << "0 - " << WHITE << "White" << RESET << "\n";
    cout << "1 - " << RED << "Red" << RESET << "\n";
    cout << "2 - " << GREEN << "Green" << RESET << "\n";
    cout << "3 - " << YELLOW << "Yellow" << RESET << "\n";
    cout << "4 - " << BLUE << "Blue" << RESET << "\n";
    cout << "5 - " << MAGENTA << "Magenta" << RESET << "\n";
    cout << "6 - " << CYAN << "Cyan" << RESET << "\n";
    cout << "Which color?\n";
    getline(cin, color_choice);
    cout << "\n";
    
    // check valid color choice
    if (color_choice[0] != '0' &&
        color_choice[0] != '1' &&
        color_choice[0] != '2' &&
        color_choice[0] != '3' &&
        color_choice[0] != '4' &&
        color_choice[0] != '5' &&
        color_choice[0] != '6')
    {
      cout << "Invalid color choice. Using white.\n\n";
    }
  
    for (int i = 0; i < int(text.size()); i++)
    {
      text[i] = toupper(text[i], loc);
    }
  
    for (int i = 0; i < int(text.size()); i++)
    {
      if (int(current_rows[0].size()) >= max_length)
      {
        // the size of the row is too long
        // go back to previously saved space
        set_equal(current_rows, last_rows);
        
        // go back to correct index of input
        i = last_space_index;
        
        // add this row to output
        add_to_output(current_rows, final_output);
        
        // blank out the rows
        set_equal(current_rows, blanks);
        set_equal(last_rows, blanks);
      }
    
      if (text[i] == ' ')
      {
        // a space
        // add three spaces
        current_rows[0] += "   ";
        current_rows[1] += "   ";
        current_rows[2] += "   ";
        current_rows[3] += "   ";
        current_rows[4] += "   ";
        current_rows[5] += "   ";
        // take snapshot of rows at this point
        // in case we need to come back to this point
        set_equal(last_rows, current_rows);

        // save index of text string
        // if it needs to fit on the next line instead
        last_space_index = i+1;
      }
    
      else
      {
        // check if lines will overflow the max line length
        // also check if last_rows are blank because then
        // add a dash
        if (((current_rows[1].size() + (get_string(text[i], 1, error_string)).size()) > max_length)
             && last_rows[0].size() == 0)
        {
          current_rows[0] += dash[0];
          current_rows[1] += dash[1];
          current_rows[2] += dash[2];
          current_rows[3] += dash[3];
          current_rows[4] += dash[4];
          current_rows[5] += dash[5];
          
          // add this row to output
          add_to_output(current_rows, final_output);
          
          // blank out the rows
          set_equal(current_rows, blanks);
          set_equal(last_rows, blanks);
          
          i--; // go back an index
          // so you can redo this letter that got cut off
        }
      
        else
        {
          // add lines of ascii character
          current_rows[0] += get_string(text[i], 0, error_string);
          current_rows[1] += get_string(text[i], 1, error_string);
          current_rows[2] += get_string(text[i], 2, error_string);
          current_rows[3] += get_string(text[i], 3, error_string);
          current_rows[4] += get_string(text[i], 4, error_string);
          current_rows[5] += get_string(text[i], 5, error_string);
        }
      }
    }
  
    // add final row
    add_to_output(current_rows, final_output);
    
    if (error_string.size() > 0)
    {
      cout << "Sorry, we aren't able to produce the following characters:\n";
      cout << error_string << "\n\n";
    }
    
    print_final_output(final_output, color_choice);
    
    cout << "\nQuit? y/n\n";
    getline(cin, quit_string);
    cout << "\n";
    
    if (quit_string[0] == 'y' || quit_string[0] == 'Y')
    {
      quit = true;
      cout << "Bye!\n\n";
      return;
    }
    
    else if (quit_string[0] == 'n' || quit_string[0] == 'N')
    {
      // reset values for loop
      text          = "";
      input         = "";
      final_output  = "";
      quit_string   = "";
      error_string  = "";
  
      // blank out the rows
      set_equal(current_rows, blanks);
      set_equal(last_rows, blanks);
    }
    
    else
    {
      cout << "Unrecognized command.\nExiting.\n";
      return;
    }
  }
  
  // shouldn't get here i think
  // maybe test
  return;
}

int main(void)
{
  // try to add in something that can test the terminal size
  // and change this variable to fit accordingly
  int max_line_length = 80;
  start(max_line_length);
  
  return 0;
}
