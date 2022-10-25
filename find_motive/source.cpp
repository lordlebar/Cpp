#include <fstream>
#include "source.h"

using namespace std;

int count_motive(char *path, char *motive){

    ifstream file;
    file.open(path);

    if (file.fail()) {
        cout << "The file " << path << " could not be opened.\n";
        return 1;
    }

    string w;
    int count = 0;
    while(file >> w)
    {
        if(w.find(motive) != string::npos)
            count++;
    }
    cout << "The file " << path << " contains " << count << " words containing the motive "<< motive <<"\n";
    return 0;
}
