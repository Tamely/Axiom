#include "Application.h"

#include "Core/Window.h"

namespace Axiom {
Application::Application(const std::string &Title, const ApplicationArgs &Args)
    : m_Title(Title) {
  m_Window = new Window(Title, 1600, 900);
}

void Application::Run() {
  while (!m_Window->ShouldClose()) {
    m_Window->OnUpdate();
  }
}
} // namespace Axiom
