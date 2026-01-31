#pragma once

#include <cstdint>
#include <string>

struct GLFWwindow;

namespace Axiom {
class Window {
public:
  Window(const std::string &Title, uint32_t Width, uint32_t Height);
  ~Window();

  Window(Window &) = delete;
  void operator=(Window &) = delete;

public:
  void OnUpdate();

  [[nodiscard]] bool ShouldClose() const;

private:
  std::string m_Title;
  uint32_t m_Width;
  uint32_t m_Height;

  GLFWwindow *m_NativeHandle;
};
} // namespace Axiom
