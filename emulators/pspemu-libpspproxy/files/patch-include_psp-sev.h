--- include/psp-sev.h.orig	2020-01-31 12:58:00 UTC
+++ include/psp-sev.h
@@ -13,7 +13,13 @@
 #ifndef __PSP_SEV_USER_H__
 #define __PSP_SEV_USER_H__
 
-#include <linux/types.h>
+#include <stdint.h>
+
+typedef uint8_t __u8;
+typedef uint16_t __u16;
+typedef uint32_t __u32;
+typedef int32_t __s32;
+typedef uint64_t __u64;
 
 /**
  * SEV platform commands
