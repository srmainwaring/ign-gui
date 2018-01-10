/*
 * Copyright (C) 2017 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef IGNITION_GUI_ANIMATEDBOXPLUGIN_HH_
#define IGNITION_GUI_ANIMATEDBOXPLUGIN_HH_

#ifndef Q_MOC_RUN
  #include <ignition/gui/qt.h>
  #include <ignition/gui/Plugin.hh>
#endif
#include <ignition/rendering.hh>

namespace ignition
{
  namespace gui
  {
    class AnimatedBoxPlugin : public Plugin
    {
      Q_OBJECT

      /// \brief Constructor
      public: AnimatedBoxPlugin();

      /// \brief Destructor
      public: virtual ~AnimatedBoxPlugin();

      /// \brief Timer for updates
      private: QTimer *timer{nullptr};

      /// \brief Current animation time
      private: double animTime{0.0};
    };
  }
}

#endif