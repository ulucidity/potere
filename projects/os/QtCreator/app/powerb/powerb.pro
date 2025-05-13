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
#   File: powerb.pro
#
# Author: $author$
#   Date: 5/2/2025
#
# os specific QtCreator project .pro file for framework potere executable powerb
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;stara;cifra;bn;mp;talas;perifra;pita;argo;libjson
#
# Debug: potere/build/os/QtCreator/Debug/bin/powerb
# Release: potere/build/os/QtCreator/Release/bin/powerb
# Profile: potere/build/os/QtCreator/Profile/bin/powerb
#
include(../../../../../build/QtCreator/potere.pri)
include(../../../../QtCreator/potere.pri)
include(../../potere.pri)
include(../../../../QtCreator/app/powerb/powerb.pri)

TARGET = $${powerb_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${powerb_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${powerb_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${powerb_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${powerb_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${powerb_HEADERS} \
$${powerb_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${powerb_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${powerb_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${powerb_LIBS} \
$${FRAMEWORKS} \

########################################################################


