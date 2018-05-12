#include "stringvar.h"
#include "realvar.h"
#include "numericvar.h"
#include "charvar.h"
//#include "maps.h"
#include <unistd.h>
#include <vector>
#include "parse.h"
#include "operations.h"
class Wrap{
    protected:
        map <pair<string,string>, Var*> varmap; //(variable map) map that has two keys to search for the variable and a value pointer to the passed object from cloning
        map<string,operation *> ops;
        map <string, Var *> dtypemap;
        map<string,int> labels;
        typedef  array<pair<string,string>,4> pair_array;
        Parse parser;
        vector <string> lines;
        vector <string> :: iterator i;
        vector <string> :: reverse_iterator ir;
    public:
        Wrap(string filename);
        void Save_var(string line);
        void action();
        void check_labels();
        //~Wrap();
};