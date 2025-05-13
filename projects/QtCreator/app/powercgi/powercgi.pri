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
#   File: powercgi.pri
#
# Author: $author$
#   Date: 5/9/2025
#
# generic QtCreator project .pri file for framework potere executable powercgi
########################################################################

########################################################################
# powercgi

# powercgi TARGET
#
powercgi_TARGET = powercgi

# powercgi INCLUDEPATH
#
powercgi_INCLUDEPATH += \
$${potere_INCLUDEPATH} \

# powercgi DEFINES
#
powercgi_DEFINES += \
$${potere_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# powercgi OBJECTIVE_HEADERS
#
#powercgi_OBJECTIVE_HEADERS += \
#$${POTERE_SRC}/xos/app/console/protocol/power/control/http/cgi/main.hh \

# powercgi OBJECTIVE_SOURCES
#
#powercgi_OBJECTIVE_SOURCES += \
#$${POTERE_SRC}/xos/app/console/protocol/power/control/http/cgi/main.mm \

########################################################################
# powercgi HEADERS
#
powercgi_HEADERS += \
$${NADIR_SRC}/xos/console/sequence.hpp \
$${NADIR_SRC}/xos/console/out.hpp \
$${NADIR_SRC}/xos/console/output.hpp \
$${NADIR_SRC}/xos/console/input.hpp \
$${NADIR_SRC}/xos/console/error.hpp \
$${NADIR_SRC}/xos/console/io.hpp \
$${NADIR_SRC}/xos/console/main.hpp \
$${NADIR_SRC}/xos/console/getopt/main_opt.hpp \
$${NADIR_SRC}/xos/console/getopt/main.hpp \
\
$${NADIR_SRC}/xos/app/console/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/main.hpp \
$${NADIR_SRC}/xos/app/console/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/version/main.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/cgi/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/catcher/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/catcher/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/gpio/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/main.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/onoff/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/onoff/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/gpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/base/onoff/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/gpio/base/onoff/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/gpio/server/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/network/sockets/protocol/gpio/server/main.hpp \
\
$${POTERE_SRC}/xos/app/console/protocol/power/control/base/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/base/main.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/client/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/client/main.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/server/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/server/main.hpp \
\
$${POTERE_SRC}/xos/app/console/protocol/power/control/http/cgi/catcher/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/http/cgi/catcher/main.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/http/cgi/client/main_opt.hpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/http/cgi/client/main.hpp \

# powercgi SOURCES
#
powercgi_SOURCES += \
$${POTERE_SRC}/xos/app/console/protocol/power/control/http/cgi/client/main_opt.cpp \
$${POTERE_SRC}/xos/app/console/protocol/power/control/http/cgi/client/main.cpp \

_powercgi_SOURCES += \
$${PERIFRA_SRC}/xos/app/console/gpio/base/onoff/main_opt.cpp \
$${PERIFRA_SRC}/xos/app/console/gpio/base/onoff/main.cpp \

########################################################################
# powercgi FRAMEWORKS
#
powercgi_FRAMEWORKS += \
$${potere_FRAMEWORKS} \

# powercgi LIBS
#
powercgi_LIBS += \
$${potere_LIBS} \

########################################################################
# NO Qt
QT -= gui core
