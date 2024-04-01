// Don't modify, generated file from C:/aseprite/data/widgets/new_layer.xml

#ifndef GENERATED_NEW_LAYER_H_INCLUDED
#define GENERATED_NEW_LAYER_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/entry.h"
#include "ui/label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class NewLayer : public ui::Window {
  public:
    NewLayer() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("new_layer.xml", "new_layer", this);
      app::finder(this)
        >> "name" >> m_name
        >> "tileset_label" >> m_tilesetLabel
        >> "tileset_options" >> m_tilesetOptions
        >> "ok" >> m_ok
      ;
    }

    ui::Entry* name() const { return m_name; }
    ui::Label* tilesetLabel() const { return m_tilesetLabel; }
    ui::HBox* tilesetOptions() const { return m_tilesetOptions; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::Entry* m_name;
    ui::Label* m_tilesetLabel;
    ui::HBox* m_tilesetOptions;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
