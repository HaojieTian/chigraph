/* An insertion at the beginning of the file and change in the middle */

#define FILE_PREPEND_AND_CHANGE \
	"insert at front\n" \
	"hey!\n" \
	"this is some context!\n" \
	"around some lines\n" \
	"that will change\n" \
	"yes it is!\n" \
	"(THIS line is changed!)\n" \
	"and this\n" \
	"is additional context\n" \
	"below it!\n"

#define PATCH_ORIGINAL_TO_PREPEND_AND_CHANGE \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..f73c8bb 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1,9 +1,10 @@\n" \
	"+insert at front\n" \
	" hey!\n" \
	" this is some context!\n" \
	" around some lines\n" \
	" that will change\n" \
	" yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n" \
	" and this\n" \
	" is additional context\n" \
	" below it!\n"

#define PATCH_ORIGINAL_TO_PREPEND_AND_CHANGE_NOCONTEXT \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..f73c8bb 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -0,0 +1 @@\n" \
	"+insert at front\n" \
	"@@ -6 +7 @@ yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n"

/* A deletion at the beginning of the file and a change in the middle */

#define FILE_DELETE_AND_CHANGE \
	"this is some context!\n" \
	"around some lines\n" \
	"that will change\n" \
	"yes it is!\n" \
	"(THIS line is changed!)\n" \
	"and this\n" \
	"is additional context\n" \
	"below it!\n"

#define PATCH_ORIGINAL_TO_DELETE_AND_CHANGE \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..1e2dfa6 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1,9 +1,8 @@\n" \
	"-hey!\n" \
	" this is some context!\n" \
	" around some lines\n" \
	" that will change\n" \
	" yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n" \
	" and this\n" \
	" is additional context\n" \
	" below it!\n"

#define PATCH_ORIGINAL_TO_DELETE_AND_CHANGE_NOCONTEXT \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..1e2dfa6 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1 +0,0 @@\n" \
	"-hey!\n" \
	"@@ -6 +5 @@ yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n"

/* A deletion at the beginning of the file */

#define FILE_DELETE_FIRSTLINE \
	"this is some context!\n" \
	"around some lines\n" \
	"that will change\n" \
	"yes it is!\n" \
	"(this line is changed)\n" \
	"and this\n" \
	"is additional context\n" \
	"below it!\n"

#define PATCH_ORIGINAL_TO_DELETE_FIRSTLINE \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..f31fa13 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1,4 +1,3 @@\n" \
	"-hey!\n" \
	" this is some context!\n" \
	" around some lines\n" \
	" that will change\n"

#define PATCH_SIMPLE_COMMIT \
	"commit 15e119375018fba121cf58e02a9f17fe22df0df8\n" \
	"Author: Edward Thomson <ethomson@edwardthomson.com>\n" \
	"Date:   Wed Jun 14 13:31:20 2017 +0200\n" \
	"\n" \
	"    CHANGELOG: document git_filter_init and GIT_FILTER_INIT\n" \
	"\n" \
	"diff --git a/CHANGELOG.md b/CHANGELOG.md\n" \
	"index 1b9e0c90a..24ecba426 100644\n" \
	"--- a/CHANGELOG.md\n" \
	"+++ b/CHANGELOG.md\n" \
	"@@ -96,6 +96,9 @@ v0.26\n" \
	" * `git_transport_smart_proxy_options()' enables you to get the proxy options for\n" \
	"   smart transports.\n" \
	"\n" \
	"+* The `GIT_FILTER_INIT` macro and the `git_filter_init` function are provided\n" \
	"+  to initialize a `git_filter` structure.\n" \
	"+\n" \
	" ### Breaking API changes\n" \
	"\n" \
	" * `clone_checkout_strategy` has been removed from\n"

#define PATCH_MULTIPLE_HUNKS \
	"diff --git a/x b/x\n" \
	"index 0719398..fa0350c 100644\n" \
	"--- a/x\n" \
	"+++ b/x\n" \
	"@@ -1,5 +1,4 @@\n" \
	" 1\n" \
	"-2\n" \
	" 3\n" \
	" 4\n" \
	" 5\n" \
	"@@ -7,3 +6,4 @@\n" \
	" 7\n" \
	" 8\n" \
	" 9\n" \
	"+10\n"

#define PATCH_MULTIPLE_FILES \
	"diff --git a/x b/x\n" \
	"index 8a1218a..7059ba5 100644\n" \
	"--- a/x\n" \
	"+++ b/x\n" \
	"@@ -1,5 +1,4 @@\n" \
	" 1\n" \
	" 2\n" \
	"-3\n" \
	" 4\n" \
	" 5\n" \
	"diff --git a/y b/y\n" \
	"index e006065..9405325 100644\n" \
	"--- a/y\n" \
	"+++ b/y\n" \
	"@@ -1,4 +1,5 @@\n" \
	" a\n" \
	" b\n" \
	"+c\n" \
	" d\n" \
	" e\n"
#define PATCH_NAME_WHITESPACE \
	"diff --git a/file with spaces.txt b/file with spaces.txt\n" \
	"index 9432026..83759c0 100644\n" \
	"--- a/file with spaces.txt\n" \
	"+++ b/file with spaces.txt\n" \
	"@@ -0,3 +0,2 @@\n" \
	" and this\n" \
	"-is additional context\n" \
	" below it!\n" \


#define PATCH_ORIGINAL_NEW_FILE_WITH_SPACE \
	"diff --git a/sp ace.txt b/sp ace.txt\n" \
	"new file mode 100644\n" \
	"index 000000000..789819226\n" \
	"--- /dev/null\n" \
	"+++ b/sp ace.txt\n" \
	"@@ -0,0 +1 @@\n" \
	"+a\n"

#define PATCH_CRLF \
	"diff --git a/test-file b/test-file\r\n" \
	"new file mode 100644\r\n" \
	"index 0000000..af431f2 100644\r\n" \
	"--- /dev/null\r\n" \
	"+++ b/test-file\r\n" \
	"@@ -0,0 +1 @@\r\n" \
	"+a contents\r\n"