LIC_FILES_CHKSUM = " \
	file://COPYING.LESSER;md5=4fbd65380cdd255951079008b364516c \
"

S = "${WORKDIR}/git"

PR = "r1"

# Examples sollen auch alle mit in das Image eingebunden werden.
cargo_do_compile_append() {
  for f in ${S}/examples/*.rs; do
    cargo build --example $(basename -s.rs $f)
  done
}

# Install examples
cargo_do_install_append() {
	for f in ${S}/target/debug/examples/*; do
		if [ -f "$f" ] && [ -x "$f" ]; then
			install -Dm 0755 "$f" "${D}${bindir}"
			FILES_${PN} += "${bindir}${f}"
			bbnote "file installed: $f"
		fi
	done
}

do_install () {
	:
}
