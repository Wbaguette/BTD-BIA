// Don't modify, generated file from C:/aseprite/data/widgets/outline.xml

#ifndef GENERATED_OUTLINE_H_INCLUDED
#define GENERATED_OUTLINE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "app/ui/color_button.h"
#include "ui/box.h"

namespace app {
namespace gen {

  class Outline : public ui::VBox {
  public:
    Outline() {
      app::load_widget("outline.xml", "outline", this);
      app::finder(this)
        >> "color" >> m_color
        >> "bg_color" >> m_bgColor
        >> "outline_type" >> m_outlineType
        >> "outline_matrix" >> m_outlineMatrix
        >> "place" >> m_place
      ;
    }

    app::ColorButton* color() const { return m_color; }
    app::ColorButton* bgColor() const { return m_bgColor; }
    app::ButtonSet* outlineType() const { return m_outlineType; }
    app::ButtonSet* outlineMatrix() const { return m_outlineMatrix; }
    app::ButtonSet* place() const { return m_place; }

  private:
    app::ColorButton* m_color;
    app::ColorButton* m_bgColor;
    app::ButtonSet* m_outlineType;
    app::ButtonSet* m_outlineMatrix;
    app::ButtonSet* m_place;
  };

} // namespace gen
} // namespace app

#endif
