// Don't modify, generated file from C:/aseprite/data/widgets/grid_settings.xml

#ifndef GENERATED_GRID_SETTINGS_H_INCLUDED
#define GENERATED_GRID_SETTINGS_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class GridSettings : public ui::Window {
  public:
    GridSettings() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("grid_settings.xml", "grid_settings", this);
      app::finder(this)
        >> "grid_x" >> m_gridX
        >> "grid_y" >> m_gridY
        >> "grid_w" >> m_gridW
        >> "grid_h" >> m_gridH
        >> "ok" >> m_ok
      ;
    }

    app::ExprEntry* gridX() const { return m_gridX; }
    app::ExprEntry* gridY() const { return m_gridY; }
    app::ExprEntry* gridW() const { return m_gridW; }
    app::ExprEntry* gridH() const { return m_gridH; }
    ui::Button* ok() const { return m_ok; }

  private:
    app::ExprEntry* m_gridX;
    app::ExprEntry* m_gridY;
    app::ExprEntry* m_gridW;
    app::ExprEntry* m_gridH;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
