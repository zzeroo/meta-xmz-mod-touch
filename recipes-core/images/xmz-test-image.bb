include recipes-core/images/core-image-minimal.bb

COMPATIBLE_MACHINE = "bananapro"


# Include modules in rootfs
IMAGE_INSTALL += " \
	kernel-modules \
"

IMAGE_INSTALL += " \
	wayland \
	weston \
	weston-init \
"
