FILESEXTRAPATHS:prepend = "${THISDIR}/${PN}:"

inherit systemd
SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE:${PN} = "logger.service"



SRC_URI += "file://logger.service"

do_install:append() {
    install -d ${D}${systemd_unitdir}/system/
    install -m 0644 ${WORKDIR}/logger.service ${D}${systemd_unitdir}/system/
}


