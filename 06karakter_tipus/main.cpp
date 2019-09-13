#include <iostream>

using namespace std;

//elõfeldolgozó
#define ESC 27
#define TABULATOR '\t'
#define ENTER   '\n'

int main()
{
    // c egy karakter
    char c;
    // kezdõérték adás
    char utolso='z';
    // konstans karakterváltozó
    const char allando='t';

    cout<<'a';
    cout<<utolso<<TABULATOR<<allando<<ENTER<<'1';

    return 0;
}
