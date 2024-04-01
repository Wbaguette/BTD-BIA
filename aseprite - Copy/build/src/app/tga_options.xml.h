// Don't modify, generated file from C:/aseprite/data/widgets/tga_options.xml

#ifndef GENERATED_TGA_OPTIONS_H_INCLUDED
#define GENERATED_TGA_OPTIONS_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/label.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class TgaOptions : public ui::Window {
  public:
    TgaOptions() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("tga_options.xml", "tga_options", this);
      app::finder(this)
        >> "bits_per_pixel_label" >> m_bitsPerPixelLabel
        >> "bits_per_pixel" >> m_bitsPerPixel
        >> "compress" >> m_compress
        >> "dont_show" >> m_dontShow
        >> "ok" >> m_ok
      ;
    }

    ui::Label* bitsPerPixelLabel() const { return m_bitsPerPixelLabel; }
    ui::ComboBox* bitsPerPixel() const { return m_bitsPerPixel; }
    ui::CheckBox* compress() const { return m_compress; }
    ui::CheckBox* dontShow() const { return m_dontShow; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::Label* m_bitsPerPixelLabel;
    ui::ComboBox* m_bitsPerPixel;
    ui::CheckBox* m_compress;
    ui::CheckBox* m_dontShow;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
