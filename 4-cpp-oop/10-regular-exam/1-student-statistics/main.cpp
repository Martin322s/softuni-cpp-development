#include "Solution.h"
#include "BaseStudent.h"

int main(void) {
    vector<shared_ptr<Student>> data;

    string buffer;
    getline(cin, buffer);
    while(readStudent(data, buffer))
        getline(cin, buffer);

    vector<string> fixedOutputs;
    fixedOutputs.resize(10);
    for(size_t cnt = 0; cnt <= 9; cnt++) {
        ostringstream ostr;
        ostr << cnt*10 << ".." << cnt*10+9;
        fixedOutputs[cnt] = ostr.str();
    }

    auto totals = processStudents(data);

    for(size_t cnt = 0; cnt <= 9; cnt++)
        cout << fixedOutputs[cnt] << " => " << totals[cnt] << endl;

    return 0;
}
