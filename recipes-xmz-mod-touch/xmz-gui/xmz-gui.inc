
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.GPLv2;md5=751419260aa954499f7abaabaa882bbe"

S = "${WORKDIR}/git"

PR = "r0"

DEPENDS += " \
  gtk+3 \
  glib-2.0-native \
"
RDEPENDS_${PN} = " \
  gnome-themes \
  faenza-icon-theme \
  gnome-config \
  xmz-gui-init \
  xmz-gui-configuration \
"

# Konfiguraton Managment
# Kopiert die xMZ-Mod-Touch.json Konfigurationsdatei Vorlage nach /usr/share
do_install_append() {
  install -Dm0644 ${S}/xmz-gui.toml.example ${D}/usr/share/xmz-gui/xmz-gui.toml.example
}
