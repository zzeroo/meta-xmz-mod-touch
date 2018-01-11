SUMMARY = "xMZ-Mod-Touch Test GUI"
HOMEPAGE = "https://github.com/zzeroo/xMZ-Mod-Touch-GUI.git"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.GPLv2;md5=751419260aa954499f7abaabaa882bbe"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
SRC_URI = "file://xmz-test-gui.service"
S = "${WORKDIR}"

PR = "r1"

do_install() {
	install -Dm0644 ${WORKDIR}/xmz-test-gui.service ${D}${systemd_system_unitdir}/xmz-test-gui.service
}

inherit systemd

RDEPENDS_${PN} = "xmz-test-gui"

SYSTEMD_SERVICE_${PN} = "xmz-test-gui.service"
