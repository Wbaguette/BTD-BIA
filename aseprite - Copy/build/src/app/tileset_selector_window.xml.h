// Don't modify, generated file from C:/aseprite/data/widgets/tileset_selector_window.xml

#ifndef GENERATED_TILESET_SELECTOR_WINDOW_H_INCLUDED
#define GENERATED_TILESET_SELECTOR_WINDOW_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class TilesetSelectorWindow : public ui::Window {
  public:
    TilesetSelectorWindow() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("tileset_selector_window.xml", "tileset_selector_window", this);
      app::finder(this)
        >> "tileset_options" >> m_tilesetOptions
        >> "ok" >> m_ok
      ;
    }

    ui::HBox* tilesetOptions() const { return m_tilesetOptions; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::HBox* m_tilesetOptions;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
