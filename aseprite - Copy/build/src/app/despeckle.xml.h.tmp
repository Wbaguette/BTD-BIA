// Don't modify, generated file from C:/aseprite/data/widgets/despeckle.xml

#ifndef GENERATED_DESPECKLE_H_INCLUDED
#define GENERATED_DESPECKLE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/box.h"

namespace app {
namespace gen {

  class Despeckle : public ui::HBox {
  public:
    Despeckle() {
      app::load_widget("despeckle.xml", "despeckle", this);
      app::finder(this)
        >> "width" >> m_width
        >> "height" >> m_height
      ;
    }

    app::ExprEntry* width() const { return m_width; }
    app::ExprEntry* height() const { return m_height; }

  private:
    app::ExprEntry* m_width;
    app::ExprEntry* m_height;
  };

} // namespace gen
} // namespace app

#endif
