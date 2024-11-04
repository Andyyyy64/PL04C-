#include <iostream>
#include <string>

using namespace std;

class WordCount {
    private:
        string Word;
        int Count;
    public:

        WordCount() : Word(""), Count(0) {}

        WordCount(const string& s, const int& c) : Word(s), Count(c) {}

        string word() const {
            return Word;
        }

        int count() const {
            return Count;
        }

        void word(const string& s) {
            Word = s;
        }

        void count(const int& c) {
            Count = c;
        }
};

int main() {
    WordCount wc1, wc2("test2", 2);

    wc1.word("test1");
    wc1.count(2);
    std::cout << wc2.word() << " " << wc2.count() << std::endl;

    return 0;
}
