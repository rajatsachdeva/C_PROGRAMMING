# C Memory Layout

[C Memory Layout Explained](https://www.geeksforgeeks.org/memory-layout-of-c-program/)<br/>

`
[Thu Aug 16 22:25:46 Rajat]:memory_layout_in_c>vim memory_layout.c
[Thu Aug 16 22:26:17 Rajat]:memory_layout_in_c>gcc memory_layout.c -o memory_layout
[Thu Aug 16 22:26:42 Rajat]:memory_layout_in_c>ll
total 24
-rw-r--r--  1 rohanrajat  staff    51 Aug 16 22:26 memory_layout.c
-rwxr-xr-x  1 rohanrajat  staff  4248 Aug 16 22:26 memory_layout
[Thu Aug 16 22:26:43 Rajat]:memory_layout_in_c>size memory_layout
__TEXT	__DATA	__OBJC	others	dec	hex
4096	0	0	4294971392	4294975488	100002000	
[Thu Aug 16 22:26:52 Rajat]:memory_layout_in_c>vim memory_layout.c 
[Thu Aug 16 22:28:09 Rajat]:memory_layout_in_c>gcc memory_layout.c -o memory_layout
[Thu Aug 16 22:28:12 Rajat]:memory_layout_in_c>size memory_layout
__TEXT	__DATA	__OBJC	others	dec	hex
4096	4096	0	4294971392	4294979584	100003000	
[Thu Aug 16 22:28:14 Rajat]:memory_layout_in_c>size memory_layout
__TEXT	__DATA	__OBJC	others	dec	hex
4096	4096	0	4294971392	4294979584	100003000	
[Thu Aug 16 22:28:45 Rajat]:memory_layout_in_c>vim README.md
[Thu Aug 16 22:28:59 Rajat]:memory_layout_in_c>vim memory_layout.c 
[Thu Aug 16 22:30:10 Rajat]:memory_layout_in_c>gcc memory_layout.c -o memory_layout
[Thu Aug 16 22:30:12 Rajat]:memory_layout_in_c>size memory_layout
__TEXT	__DATA	__OBJC	others	dec	hex
4096	4096	0	4294971392	4294979584	100003000	
[Thu Aug 16 22:30:14 Rajat]:memory_layout_in_c>vim memory_layout.c 
[Thu Aug 16 22:30:37 Rajat]:memory_layout_in_c>gcc memory_layout.c -o memory_layout
[Thu Aug 16 22:30:38 Rajat]:memory_layout_in_c>size memory_layout
__TEXT	__DATA	__OBJC	others	dec	hex
4096	4096	0	4294971392	4294979584	100003000	
[Thu Aug 16 22:30:40 Rajat]:memory_layout_in_c>vim memory_layout.c 
[Thu Aug 16 22:31:11 Rajat]:memory_layout_in_c>gcc memory_layout.c -o memory_layout
[Thu Aug 16 22:31:13 Rajat]:memory_layout_in_c>size memory_layout
__TEXT	__DATA	__OBJC	others	dec	hex
4096	4096	0	4294971392	4294979584	100003000	
[Thu Aug 16 22:31:14 Rajat]:memory_layout_in_c>
`
