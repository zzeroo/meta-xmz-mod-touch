DESCRIPTION = "Ein wenig Gnome Konfig"
HOMEPAGE = "https://zzeroo.com"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.GPLv2;md5=751419260aa954499f7abaabaa882bbe"

PR = "r3"

SRC_URI = " \
  file://gtk.css \
  file://settings.ini \
"

do_install() {
  install -Dm0644 ${WORKDIR}/gtk.css ${D}/home/root/.config/gtk-3.0/gtk.css
  install -Dm0644 ${WORKDIR}/settings.ini ${D}/home/root/.config/gtk-3.0/settings.ini
}

FILES_${PN} += "/home/root/.config/gtk-3.0/gtk.css"
FILES_${PN} += "/home/root/.config/gtk-3.0/settings.ini"

PACKAGES = "${PN}"
