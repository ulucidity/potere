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
#   File: powerpb.pro
#
# Author: $author$
#   Date: 4/28/2025
#
# os specific QtCreator project .pro file for framework potere executable powerpb
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;stara;cifra;bn;mp;talas;perifra;pita;argo;libjson
#
# Debug: potere/build/os/QtCreator/Debug/bin/powerpb
# Release: potere/build/os/QtCreator/Release/bin/powerpb
# Profile: potere/build/os/QtCreator/Profile/bin/powerpb
#
include(../../../../../build/QtCreator/potere.pri)
include(../../../../QtCreator/potere.pri)
include(../../potere.pri)
include(../../../../QtCreator/app/powerpb/powerpb.pri)

TARGET = $${powerpb_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${powerpb_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${powerpb_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${powerpb_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${powerpb_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${powerpb_HEADERS} \
$${powerpb_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${powerpb_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${powerpb_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${powerpb_LIBS} \
$${FRAMEWORKS} \

########################################################################
