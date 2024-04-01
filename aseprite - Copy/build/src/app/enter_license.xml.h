// Don't modify, generated file from C:/aseprite/data/widgets/enter_license.xml

#ifndef GENERATED_ENTER_LICENSE_H_INCLUDED
#define GENERATED_ENTER_LICENSE_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/button.h"
#include "ui/entry.h"
#include "ui/image_view.h"
#include "ui/label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class EnterLicense : public ui::Window {
  public:
    EnterLicense() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("enter_license.xml", "enter_license", this);
      app::finder(this)
        >> "license_key" >> m_licenseKey
        >> "icon" >> m_icon
        >> "message" >> m_message
        >> "ok_button" >> m_okButton
      ;
    }

    ui::Entry* licenseKey() const { return m_licenseKey; }
    ui::ImageView* icon() const { return m_icon; }
    ui::Label* message() const { return m_message; }
    ui::Button* okButton() const { return m_okButton; }

  private:
    ui::Entry* m_licenseKey;
    ui::ImageView* m_icon;
    ui::Label* m_message;
    ui::Button* m_okButton;
  };

} // namespace gen
} // namespace app

#endif
