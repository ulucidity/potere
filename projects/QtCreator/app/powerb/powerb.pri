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
#   File: powerb.pri
#
# Author: $author$
#   Date: 5/2/2025
#
# generic QtCreator project .pri file for framework potere executable powerb
########################################################################

########################################################################
# powerb

# powerb TARGET
#
powerb_TARGET = powerb

# powerb INCLUDEPATH
#
powerb_INCLUDEPATH += \
$${potere_INCLUDEPATH} \

# powerb DEFINES
#
powerb_DEFINES += \
$${potere_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# powerb OBJECTIVE_HEADERS
#
#powerb_OBJECTIVE_HEADERS += \
#$${POTERE_SRC}/xos/app/console/powerb/main.hh \

# powerb OBJECTIVE_SOURCES
#
#powerb_OBJECTIVE_SOURCES += \
#$${POTERE_SRC}/xos/app/console/powerb/main.mm \

########################################################################
# powerb HEADERS
#
powerb_HEADERS += \
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
\
$${POTERE_SRC}/xos/app/console/network/sockets/protocol/power/control/base/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/network/sockets/protocol/power/control/base/main.hpp \
$${POTERE_SRC}/xos/app/console/network/sockets/protocol/power/control/client/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/network/sockets/protocol/power/control/client/main.hpp \
$${POTERE_SRC}/xos/app/console/network/sockets/protocol/power/control/server/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/network/sockets/protocol/power/control/server/main.hpp \

# powerb SOURCES
#
powerb_SOURCES += \
$${POTERE_SRC}/xos/app/console/network/sockets/protocol/power/control/base/main_opt.cpp \
$${POTERE_SRC}/xos/app/console/network/sockets/protocol/power/control/base/main.cpp \

########################################################################
# powerb FRAMEWORKS
#
powerb_FRAMEWORKS += \
$${potere_pigpio_FRAMEWORKS} \

# powerb LIBS
#
powerb_LIBS += \
$${potere_pigpio_LIBS} \

########################################################################
# NO Qt
QT -= gui core
