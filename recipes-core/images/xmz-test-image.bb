include recipes-core/images/core-image-minimal.bb

COMPATIBLE_MACHINE = "^bananapro$"

IMAGE_INSTALL += " \
		wayland \
    weston \
    weston-init \
		"

