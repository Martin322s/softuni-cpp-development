#include "cat.h"
#include "dog.h"
#include "cow.h"

#include <iostream>
#include <string>
#include <list>
#include <map>
#include <memory>

using namespace std;

#define CATS 0
#define DOGS 1
#define COWS 2

const string descriptions[3] = {"Cats: ", "Dogs: ", "Cows: "};
const string totals[3] = { "- Caught mice: ", "- Chased cats: ", "- Produced milk: "};

int main() {

    map<unsigned, list<shared_ptr<Animal>>> animals = {
        pair<unsigned, list<shared_ptr<Animal>>>(CATS, list<shared_ptr<Animal>>()),
        pair<unsigned, list<shared_ptr<Animal>>>(DOGS, list<shared_ptr<Animal>>()),
        pair<unsigned, list<shared_ptr<Animal>>>(COWS, list<shared_ptr<Animal>>()),
    };

    string buffer;
    cin >> buffer;
    while(buffer != "end") {
        if (buffer == "cat")
            animals[CATS].push_back(make_shared<Cat>(Cat(cin)));
        else if (buffer == "dog")
            animals[DOGS].push_back(make_shared<Dog>(Dog(cin)));
        else 
            animals[COWS].push_back(make_shared<Cow>(Cow(cin)));
        cin >> buffer;
    }

    unsigned weeks;
    cin >> weeks;

    cout << "Weekly:" << endl;
    unsigned counter = 0;
    for(auto as : animals) {
        if (as.second.size()) {
            cout << "  " << descriptions[counter] << endl;
            for(auto & a : as.second) {
                cout << "  - " << a->getDescription() << a->getInfo() << " = " << a->getResult(1) << endl;
            }
        } 
        counter++;
    }

    cout << "Total for " << weeks << " weeks:" << endl;

    counter = 0;
    for(auto as : animals) {
        if (as.second.size()) {
            unsigned result = 0;
            for(auto & a : as.second)
                result += a->getResult(weeks);
            
            cout << totals[counter] << result << endl;
        }
        counter++;
    }

    return 0;
}
