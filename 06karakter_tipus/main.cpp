#include <iostream>

using namespace std;

//el�feldolgoz�
#define ESC 27
#define TABULATOR '\t'
#define ENTER   '\n'

int main()
{
    // c egy karakter
    char c;
    // kezd��rt�k ad�s
    char utolso='z';
    // konstans karakterv�ltoz�
    const char allando='t';

    cout<<'a';
    cout<<utolso<<TABULATOR<<allando<<ENTER<<'1';

    return 0;
}
