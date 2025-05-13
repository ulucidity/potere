########################################################################
# Copyright (c) 1988-2025 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: powerp.pri
#
# Author: $author$
#   Date: 4/28/2025
#
# generic QtCreator project .pri file for framework potere executable powerp
########################################################################

########################################################################
# powerp

# powerp TARGET
#
powerp_TARGET = powerp

# powerp INCLUDEPATH
#
powerp_INCLUDEPATH += \
$${potere_INCLUDEPATH} \

# powerp DEFINES
#
powerp_DEFINES += \
$${potere_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# powerp OBJECTIVE_HEADERS
#
#powerp_OBJECTIVE_HEADERS += \
#$${POTERE_SRC}/xos/app/console/powerp/main.hh \

# powerp OBJECTIVE_SOURCES
#
#powerp_OBJECTIVE_SOURCES += \
#$${POTERE_SRC}/xos/app/console/powerp/main.mm \

########################################################################
# powerp HEADERS
#
powerp_HEADERS += \
$${NADIR_SRC}/xos/app/console/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/main.hpp \
$${NADIR_SRC}/xos/app/console/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/version/main.hpp \
\
$${NADIR_SRC}/xos/app/console/nadir/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/nadir/version/main.hpp \
$${NADIR_SRC}/xos/app/console/framework/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/framework/version/main.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main.hpp \
$${NADIR_SRC}/xos/app/console/nadir/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/nadir/main.hpp \
\
$${VERSA_SRC}/xos/app/console/protocol/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/base/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/client/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/client/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/server/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/server/main.hpp \
\
$${VERSA_SRC}/xos/app/console/protocol/crlf/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/crlf/base/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/crlf/client/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/crlf/client/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/crlf/server/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/crlf/server/main.hpp \
\
$${PERIFRA_SRC}/xos/gpio/implement.hpp \
$${PERIFRA_SRC}/xos/gpio/extend.hpp \
$${PERIFRA_SRC}/xos/gpio/os/os.hpp \
$${PERIFRA_SRC}/xos/gpio/posix/gpio.hpp \
$${PERIFRA_SRC}/xos/gpio/apple/osx/gpio.hpp \
$${PERIFRA_SRC}/xos/gpio/os/gpio.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/server/main.hpp \
\
$${POTERE_SRC}/xos/app/console/potere/version/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/potere/version/main.hpp \
$${POTERE_SRC}/xos/app/console/framework/version/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/framework/version/main.hpp \
\
$${POTERE_SRC}/xos/app/console/protocol/power/control/base/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/base/main.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/client/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/client/main.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/server/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/server/main.hpp \

# powerp SOURCES
#
powerp_SOURCES += \
$${PERIFRA_SRC}/xos/gpio/implement.cpp \
$${PERIFRA_SRC}/xos/gpio/extend.cpp \
$${PERIFRA_SRC}/xos/gpio/os/os.cpp \
$${PERIFRA_SRC}/xos/gpio/os/gpio.cpp \
\
$${POTERE_SRC}/xos/app/console/protocol/power/control/client/main_opt.cpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/client/main.cpp \

########################################################################
# powerp FRAMEWORKS
#
powerp_FRAMEWORKS += \
$${potere_FRAMEWORKS} \

# powerp LIBS
#
powerp_LIBS += \
$${potere_LIBS} \

########################################################################
# NO Qt
QT -= gui core

