/* -*- mode: c++ -*-
 * kaleidoscope::simulator - Testing API for Kaleidoscope
 * Copyright (C) 2019  noseglasses (shinynoseglasses@gmail.com)
 * Copyright (C) 2020  Keyboard.io, Inc
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef KALEIDOSCOPE_VIRTUAL_BUILD

#include "kaleidoscope/simulator/interface/actions/generic_report/ReportAction.h"

namespace kaleidoscope {
namespace simulator {
namespace interface {
    namespace actions {

/// @brief Asserts that the current report is empty.
///
    class AssertReportEmpty {

     public:

      SIMULATOR_ACTION_STD_CONSTRUCTOR(AssertReportEmpty)

     private:

      class Action : public ReportAction_ {

       public:

        virtual void describe(const char *add_indent = "") const override {
          this->getSimulator()->log() << add_indent << "Report empty";
        }

        virtual void describeState(const char *add_indent = "") const {
          this->getSimulator()->log() << add_indent << "Report: ";
          this->getReport().dump(*this->getSimulator(), add_indent);
        }

        virtual bool evalInternal() override {
          return this->getReport().isEmpty();
        }
      };

      SIMULATOR_AUTO_DEFINE_ACTION_INVENTORY(AssertReportEmpty)
    };

    } // namespace actions
  } // namespace interface
} // namespace simulator
} // namespace kaleidoscope

#endif // KALEIDOSCOPE_VIRTUAL_BUILD