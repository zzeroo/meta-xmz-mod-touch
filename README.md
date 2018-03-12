# yocto/OpenEmbedded Rezepte für die 'xMZ-Platform'

Rezepte für das yocto/OpenEmbedded Buildsystem.

Dazu gehören `xmz-server`, `xmz-gui` und Werkzeuge wie der `xmz-client`
und der `xmz-co-no2-calibrator`.

## Abhängikeiten

Dieser Layer hängt von folgenden Layern ab:

### meta-openembedded
Das OpenEmbedded Meta Repo `git://git.openembedded.org/meta-openembedded`
enthält viele verschiedene Layer. Es ist nur nötig dieses eine Meta Layer zu
clonen. In der bitbake `bblayers.conf` werden dann die verschieden Unterverzeichnisse
angegeben, z.B. `/home/build/meta-openembedded/meta-oe` oder
`/home/build/meta-openembedded/meta-gnome`

#### OpenEmbedded Core `oe-core`

	URI: git://git.openembedded.org/meta-openembedded
	layers: meta-oe
	branch: master
	revision: HEAD

#### OpenEmbedded `meta-gnome`

	URI: git://git.openembedded.org/meta-openembedded
	layers: meta-gnome
	branch: master
	revision: HEAD

#### OpenEmbedded `meta-networking`

	URI: git://git.openembedded.org/meta-openembedded
	layers: meta-networking
	branch: master
	revision: HEAD

#### OpenEmbedded `meta-python`

	URI: git://git.openembedded.org/meta-openembedded
	layers: meta-python
	branch: master
	revision: HEAD


### Board Support Package (BSP) für Lemaker Geräte `meta-bsp_lemaker`

	URI: https://github.com/zzeroo/meta-bsp_lemaker
	layers: meta-bsp_lemaker
	branch: master
	revision: HEAD

### Rust Programiersprach `meta-rust`

	URI: https://github.com/meta-rust/meta-rust.git
	layers: meta-rust
	branch: master
	revision: HEAD
