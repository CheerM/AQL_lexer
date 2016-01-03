#include "lexer.h"

//test
int main() {
	Lexer lala;
	cout << lala.getFileName() << endl;
	vector<vector<Token> > result = lala.generator();

	for (int i = 0; i < result.size(); i ++) {
		cout << "No." << i << " = " << result[i].size() << endl;
		for (int j = 0; j < result[i].size(); j ++) {
			cout << result[i][j].content << "(" << result[i][j].type << ")" << endl;
		}
		cout << "***************************************************" << endl;
	}
	
	return 0;
}