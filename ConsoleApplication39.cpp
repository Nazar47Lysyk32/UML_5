#include <iostream>
#include "TextEditor.h"
#include "GPT_Plugin.h"

using namespace std;

int main()
{
	TextEditor* text = new TextEditor("text");

	TextEditor* GPTText = new GPT_Plugin(text);


	cout << GPTText->read();
}