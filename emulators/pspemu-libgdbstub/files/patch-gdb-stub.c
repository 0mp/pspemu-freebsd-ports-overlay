--- gdb-stub.c.orig	2020-02-18 13:00:09 UTC
+++ gdb-stub.c
@@ -923,8 +923,8 @@ static int gdbStubCtxPktProcessFeatXmlRegs(PGDBSTUBCTX
             break;
         }
 
-        cbVal -= cbThisVal + pbDelim ? 1 : 0;
-        pbVal = pbDelim + pbDelim ? 1 : 0;
+        cbVal -= cbThisVal + (pbDelim ? 1 : 0);
+        pbVal = pbDelim + (pbDelim ? 1 : 0);
     }
 
     return rc;
