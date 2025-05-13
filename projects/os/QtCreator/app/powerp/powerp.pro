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
#   File: powerp.pro
#
# Author: $author$
#   Date: 4/28/2025
#
# os specific QtCreator project .pro file for framework potere executable powerp
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;stara;cifra;bn;mp;talas;perifra;pita;argo;libjson
#
# Debug: potere/build/os/QtCreator/Debug/bin/powerp
# Release: potere/build/os/QtCreator/Release/bin/powerp
# Profile: potere/build/os/QtCreator/Profile/bin/powerp
#
include(../../../../../build/QtCreator/potere.pri)
include(../../../../QtCreator/potere.pri)
include(../../potere.pri)
include(../../../../QtCreator/app/powerp/powerp.pri)

TARGET = $${powerp_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${powerp_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${powerp_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${powerp_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${powerp_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${powerp_HEADERS} \
$${powerp_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${powerp_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${powerp_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${powerp_LIBS} \
$${FRAMEWORKS} \

########################################################################
