--- plugins/check_nagios.c.orig	2020-12-17 10:11:10 UTC
+++ plugins/check_nagios.c
@@ -64,6 +64,7 @@ main (int argc, char **argv)
 	int procuid = 0;
 	int procpid = 0;
 	int procppid = 0;
+	int procjid = 0;
 	int procvsz = 0;
 	int procrss = 0;
 	float procpcpu = 0;
