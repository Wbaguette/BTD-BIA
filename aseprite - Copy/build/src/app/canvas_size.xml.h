// Don't modify, generated file from C:/aseprite/data/widgets/canvas_size.xml

#ifndef GENERATED_CANVAS_SIZE_H_INCLUDED
#define GENERATED_CANVAS_SIZE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class CanvasSize : public ui::Window {
  public:
    CanvasSize() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("canvas_size.xml", "canvas_size", this);
      app::finder(this)
        >> "width" >> m_width
        >> "height" >> m_height
        >> "dir" >> m_dir
        >> "left" >> m_left
        >> "top" >> m_top
        >> "right" >> m_right
        >> "bottom" >> m_bottom
        >> "trim" >> m_trim
        >> "ok" >> m_ok
      ;
    }

    app::ExprEntry* width() const { return m_width; }
    app::ExprEntry* height() const { return m_height; }
    app::ButtonSet* dir() const { return m_dir; }
    app::ExprEntry* left() const { return m_left; }
    app::ExprEntry* top() const { return m_top; }
    app::ExprEntry* right() const { return m_right; }
    app::ExprEntry* bottom() const { return m_bottom; }
    ui::CheckBox* trim() const { return m_trim; }
    ui::Button* ok() const { return m_ok; }

  private:
    app::ExprEntry* m_width;
    app::ExprEntry* m_height;
    app::ButtonSet* m_dir;
    app::ExprEntry* m_left;
    app::ExprEntry* m_top;
    app::ExprEntry* m_right;
    app::ExprEntry* m_bottom;
    ui::CheckBox* m_trim;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
