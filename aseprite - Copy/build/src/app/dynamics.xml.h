// Don't modify, generated file from C:/aseprite/data/widgets/dynamics.xml

#ifndef GENERATED_DYNAMICS_H_INCLUDED
#define GENERATED_DYNAMICS_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/grid.h"
#include "ui/label.h"
#include "ui/link_label.h"
#include "ui/separator.h"
#include "ui/slider.h"

namespace app {
namespace gen {

  class Dynamics : public ui::VBox {
  public:
    Dynamics() {
      app::load_widget("dynamics.xml", "dynamics", this);
      app::finder(this)
        >> "stabilizer" >> m_stabilizer
        >> "stabilizer_factor" >> m_stabilizerFactor
        >> "grid" >> m_grid
        >> "values" >> m_values
        >> "options" >> m_options
        >> "separator" >> m_separator
        >> "size_label" >> m_sizeLabel
        >> "min_size" >> m_minSize
        >> "max_size" >> m_maxSize
        >> "angle_label" >> m_angleLabel
        >> "min_angle" >> m_minAngle
        >> "max_angle" >> m_maxAngle
        >> "gradient_label" >> m_gradientLabel
        >> "gradient_placeholder" >> m_gradientPlaceholder
        >> "gradient_from_to" >> m_gradientFromTo
        >> "separator2" >> m_separator2
        >> "pressure_label" >> m_pressureLabel
        >> "pressure_placeholder" >> m_pressurePlaceholder
        >> "velocity_label" >> m_velocityLabel
        >> "velocity_placeholder" >> m_velocityPlaceholder
        >> "same_in_all_tools" >> m_sameInAllTools
      ;
    }

    ui::CheckBox* stabilizer() const { return m_stabilizer; }
    ui::Slider* stabilizerFactor() const { return m_stabilizerFactor; }
    ui::HBox* grid() const { return m_grid; }
    app::ButtonSet* values() const { return m_values; }
    ui::Grid* options() const { return m_options; }
    ui::Separator* separator() const { return m_separator; }
    ui::Label* sizeLabel() const { return m_sizeLabel; }
    ui::Slider* minSize() const { return m_minSize; }
    ui::Slider* maxSize() const { return m_maxSize; }
    ui::Label* angleLabel() const { return m_angleLabel; }
    ui::Slider* minAngle() const { return m_minAngle; }
    ui::Slider* maxAngle() const { return m_maxAngle; }
    ui::Label* gradientLabel() const { return m_gradientLabel; }
    ui::HBox* gradientPlaceholder() const { return m_gradientPlaceholder; }
    ui::LinkLabel* gradientFromTo() const { return m_gradientFromTo; }
    ui::Separator* separator2() const { return m_separator2; }
    ui::Label* pressureLabel() const { return m_pressureLabel; }
    ui::HBox* pressurePlaceholder() const { return m_pressurePlaceholder; }
    ui::Label* velocityLabel() const { return m_velocityLabel; }
    ui::HBox* velocityPlaceholder() const { return m_velocityPlaceholder; }
    ui::CheckBox* sameInAllTools() const { return m_sameInAllTools; }

  private:
    ui::CheckBox* m_stabilizer;
    ui::Slider* m_stabilizerFactor;
    ui::HBox* m_grid;
    app::ButtonSet* m_values;
    ui::Grid* m_options;
    ui::Separator* m_separator;
    ui::Label* m_sizeLabel;
    ui::Slider* m_minSize;
    ui::Slider* m_maxSize;
    ui::Label* m_angleLabel;
    ui::Slider* m_minAngle;
    ui::Slider* m_maxAngle;
    ui::Label* m_gradientLabel;
    ui::HBox* m_gradientPlaceholder;
    ui::LinkLabel* m_gradientFromTo;
    ui::Separator* m_separator2;
    ui::Label* m_pressureLabel;
    ui::HBox* m_pressurePlaceholder;
    ui::Label* m_velocityLabel;
    ui::HBox* m_velocityPlaceholder;
    ui::CheckBox* m_sameInAllTools;
  };

} // namespace gen
} // namespace app

#endif
