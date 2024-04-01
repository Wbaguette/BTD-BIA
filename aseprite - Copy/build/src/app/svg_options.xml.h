// Don't modify, generated file from C:/aseprite/data/widgets/svg_options.xml

#ifndef GENERATED_SVG_OPTIONS_H_INCLUDED
#define GENERATED_SVG_OPTIONS_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/expr_entry.h"
#include "ui/button.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class SvgOptions : public ui::Window {
  public:
    SvgOptions() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("svg_options.xml", "svg_options", this);
      app::finder(this)
        >> "pxsc" >> m_pxsc
        >> "dont_show" >> m_dontShow
        >> "ok" >> m_ok
      ;
    }

    app::ExprEntry* pxsc() const { return m_pxsc; }
    ui::CheckBox* dontShow() const { return m_dontShow; }
    ui::Button* ok() const { return m_ok; }

  private:
    app::ExprEntry* m_pxsc;
    ui::CheckBox* m_dontShow;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
