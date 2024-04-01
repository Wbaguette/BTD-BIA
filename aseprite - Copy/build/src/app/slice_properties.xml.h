// Don't modify, generated file from C:/aseprite/data/widgets/slice_properties.xml

#ifndef GENERATED_SLICE_PROPERTIES_H_INCLUDED
#define GENERATED_SLICE_PROPERTIES_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/entry.h"
#include "ui/grid.h"
#include "ui/label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class SliceProperties : public ui::Window {
  public:
    SliceProperties() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("slice_properties.xml", "slice_properties", this);
      app::finder(this)
        >> "properties_grid" >> m_propertiesGrid
        >> "label1" >> m_label1
        >> "name" >> m_name
        >> "user_data" >> m_userData
        >> "bounds_x" >> m_boundsX
        >> "bounds_y" >> m_boundsY
        >> "bounds_w" >> m_boundsW
        >> "bounds_h" >> m_boundsH
        >> "center" >> m_center
        >> "center_x" >> m_centerX
        >> "center_y" >> m_centerY
        >> "center_w" >> m_centerW
        >> "center_h" >> m_centerH
        >> "pivot" >> m_pivot
        >> "pivot_x" >> m_pivotX
        >> "pivot_y" >> m_pivotY
        >> "ok" >> m_ok
      ;
    }

    ui::Grid* propertiesGrid() const { return m_propertiesGrid; }
    ui::Label* label1() const { return m_label1; }
    ui::Entry* name() const { return m_name; }
    ui::Button* userData() const { return m_userData; }
    app::ExprEntry* boundsX() const { return m_boundsX; }
    app::ExprEntry* boundsY() const { return m_boundsY; }
    app::ExprEntry* boundsW() const { return m_boundsW; }
    app::ExprEntry* boundsH() const { return m_boundsH; }
    ui::CheckBox* center() const { return m_center; }
    app::ExprEntry* centerX() const { return m_centerX; }
    app::ExprEntry* centerY() const { return m_centerY; }
    app::ExprEntry* centerW() const { return m_centerW; }
    app::ExprEntry* centerH() const { return m_centerH; }
    ui::CheckBox* pivot() const { return m_pivot; }
    app::ExprEntry* pivotX() const { return m_pivotX; }
    app::ExprEntry* pivotY() const { return m_pivotY; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::Grid* m_propertiesGrid;
    ui::Label* m_label1;
    ui::Entry* m_name;
    ui::Button* m_userData;
    app::ExprEntry* m_boundsX;
    app::ExprEntry* m_boundsY;
    app::ExprEntry* m_boundsW;
    app::ExprEntry* m_boundsH;
    ui::CheckBox* m_center;
    app::ExprEntry* m_centerX;
    app::ExprEntry* m_centerY;
    app::ExprEntry* m_centerW;
    app::ExprEntry* m_centerH;
    ui::CheckBox* m_pivot;
    app::ExprEntry* m_pivotX;
    app::ExprEntry* m_pivotY;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
