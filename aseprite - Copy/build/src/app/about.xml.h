// Don't modify, generated file from C:/aseprite/data/widgets/about.xml

#ifndef GENERATED_ABOUT_H_INCLUDED
#define GENERATED_ABOUT_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/button.h"
#include "ui/label.h"
#include "ui/link_label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class About : public ui::Window {
  public:
    About() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("about.xml", "about", this);
      app::finder(this)
        >> "title" >> m_title
        >> "credits" >> m_credits
        >> "i18n_credits" >> m_i18nCredits
        >> "licenses" >> m_licenses
        >> "ok" >> m_ok
      ;
    }

    ui::Label* title() const { return m_title; }
    ui::LinkLabel* credits() const { return m_credits; }
    ui::LinkLabel* i18nCredits() const { return m_i18nCredits; }
    ui::LinkLabel* licenses() const { return m_licenses; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::Label* m_title;
    ui::LinkLabel* m_credits;
    ui::LinkLabel* m_i18nCredits;
    ui::LinkLabel* m_licenses;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
