
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.GPLv2;md5=751419260aa954499f7abaabaa882bbe"

S = "${WORKDIR}/git"

PR = "r1"

# DEPENDS += " \
# "

RDEPENDS_${PN} = " \
  xmz-server-init \
"
