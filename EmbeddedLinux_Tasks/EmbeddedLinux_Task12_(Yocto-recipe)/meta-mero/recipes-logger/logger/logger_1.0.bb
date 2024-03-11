SUMMARY = "A Python script to log user messages"
DESCRIPTION = "This recipe installs a Python script named logger.py onto the target image."

LICENSE="CLOSED"
LIC_FILES_CHKSUM=""

RDEPENDS:${PN} += "python3"

SRC_URI = "file://logger.py"

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${WORKDIR}/logger.py ${D}${bindir}/
}

FILES_${PN} += "${bindir}/logger.py"

