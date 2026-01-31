#include "Window.h"
#include <iostream>

#define WIN32_MEAN_AND_LEAN
#include <Windows.h>

#include <GL/GL.h>
#include <GLFW/glfw3.h>

#include <string>

namespace Axiom {
Window::Window(const std::string &Title, uint32_t Width, uint32_t Height)
    : m_Title(Title), m_Width(Width), m_Height(Height) {
  glfwInit();

  m_NativeHandle =
      glfwCreateWindow(m_Width, m_Height, m_Title.c_str(), nullptr, nullptr);

  if (!m_NativeHandle) {
    std::cerr << "Failed to create window!" << std::endl;
    return;
  }

  glfwMakeContextCurrent(m_NativeHandle);
}

Window::~Window() {
  glfwDestroyWindow(m_NativeHandle);
  glfwTerminate();
}

void Window::OnUpdate() {
  glfwPollEvents();

  glViewport(0, 0, m_Width, m_Height);
  glClearColor(1.0, 0.0, 1.0, 1.0);

  glClear(GL_COLOR_BUFFER_BIT);

  glfwSwapBuffers(m_NativeHandle);
}

[[nodiscard]] bool Window::ShouldClose() const {
  return glfwWindowShouldClose(m_NativeHandle);
}
} // namespace Axiom
