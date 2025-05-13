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
#   File: powercgicatch.pro
#
# Author: $author$
#   Date: 5/9/2025
#
# os specific QtCreator project .pro file for framework potere executable powercgicatch
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;stara;cifra;bn;mp;talas;perifra;pita;argo;libjson
#
# Debug: potere/build/os/QtCreator/Debug/bin/powercgicatch
# Release: potere/build/os/QtCreator/Release/bin/powercgicatch
# Profile: potere/build/os/QtCreator/Profile/bin/powercgicatch
#
include(../../../../../build/QtCreator/potere.pri)
include(../../../../QtCreator/potere.pri)
include(../../potere.pri)
include(../../../../QtCreator/app/powercgicatch/powercgicatch.pri)

TARGET = $${powercgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${powercgicatch_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${powercgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${powercgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${powercgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${powercgicatch_HEADERS} \
$${powercgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${powercgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${powercgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${powercgicatch_LIBS} \
$${FRAMEWORKS} \

########################################################################

