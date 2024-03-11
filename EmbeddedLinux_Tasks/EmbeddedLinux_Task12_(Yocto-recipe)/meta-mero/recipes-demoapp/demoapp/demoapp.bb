SUMMARY = "demoapp"
DESCRIPTION = "This recipe downloads a Git repository and builds it using CMake."
LICENSE = "CLOSED"


SRCREV = "720c663c5fd7246b4b42c5205d74db7d9784b5b2"
SRC_URI = "git://github.com/FadyKhalil/DemoApp.git;protocol=https;branch=main"

S = "${WORKDIR}/git"

inherit cmake


do_configure() {
    mkdir -p ${B}
    cd ${B}
    cmake ${S}
}

do_install() {
    install -d ${D}/usr/bin
    install -m 0755 ${B}/calculator ${D}/usr/bin/demoapp
}

