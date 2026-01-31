#pragma once

#include <string>

#include "Core/Window.h"

namespace Axiom {
struct ApplicationArgs {
  char **Arguments;
  int ArgumentCount;
};

class Application {
public:
  Application(const std::string &Title, const ApplicationArgs &Args);

  void Run();

private:
  std::string m_Title;
  Window *m_Window;
};

Application *Create(const ApplicationArgs &Args);
} // namespace Axiom
