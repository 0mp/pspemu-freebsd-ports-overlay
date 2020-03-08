PORTNAME=	pspemu
DISTVERSION=	g20200307
CATEGORIES=	emulators

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	PSP emulator

LICENSE=	GPLv3 MIT
LICENSE_COMB=	multi
LICENSE_FILE_GPLv3=	${WRKSRC}/LICENSE
LICENSE_FILE_MIT=	${WRKSRC}/psp-includes/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libcapstone.a:devel/capstone4 \
		${LOCALBASE}/lib/libgdbstub.a:emulators/pspemu-libgdbstub \
		${LOCALBASE}/lib/libpspproxy.a:emulators/pspemu-libpspproxy \
		${LOCALBASE}/lib/libunicorn.a:emulators/pspemu-unicorn
LIB_DEPENDS=	libpspproxy.so:emulators/pspemu-libpspproxy

USES=		cmake localbase pkgconfig ssl
USE_GITHUB=	yes
GH_ACCOUNT=	PSPReverse
GH_PROJECT=	PSPEmu
GH_TAGNAME=	1321bca
GH_TUPLE=	PSPReverse:psp-includes:284e992:pspincludes/psp-includes

CMAKE_ARGS=	-DCAPSTONE_LIBRARIES:STRING=${LOCALBASE}/lib/libcapstone.a \
		-DGDBSTUB_LIBRARIES:STRING=${LOCALBASE}/lib/libgdbstub.a \
		-DUNICORN_LIBRARIES:STRING=${LOCALBASE}/lib/libunicorn.a

PLIST_FILES=	bin/PSPEmu

do-install:
	${INSTALL_PROGRAM} ${INSTALL_WRKSRC}/PSPEmu ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
