
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.GPLv2;md5=751419260aa954499f7abaabaa882bbe"

S = "${WORKDIR}/git"

PR = "r0"

# DEPENDS += " \
# "

RDEPENDS_${PN} = " \
  xmz-server-init \
"

# Konfiguraton Managment
# Kopiert die xMZ-Mod-Touch.json Konfigurationsdatei Vorlage nach /usr/share
do_install_append() {
  install -Dm0644 ${S}/xmz.toml.example ${D}/usr/share/xmz-server/xmz.toml.example
}
