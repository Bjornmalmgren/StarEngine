
#include "StarEngine.h"

int main(int argc, const char** argv) {
	Engine::StarEngine app;
	if (app.Open()) {
		app.Run();
		app.Close();
	}
}