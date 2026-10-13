"Assignment 1 - Debugging with Valgrind"

"Valgrind before fixing the code"

==161030== Memcheck, a memory error detector
==161030== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==161030== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==161030== Command: ./task
==161030== 
==161030== Invalid write of size 4
==161030==    at 0x1091C6: main (task.c:7)
==161030==  Address 0x4aa1068 is 0 bytes after a block of size 40 alloc'd
==161030==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==161030==    by 0x109185: main (task.c:5)
==161030== 
==161030== Conditional jump or move depends on uninitialised value(s)
==161030==    at 0x1091F4: main (task.c:9)
==161030== 
==161030== Invalid read of size 4
==161030==    at 0x1091EF: main (task.c:9)
==161030==  Address 0x4aa1068 is 0 bytes after a block of size 40 alloc'd
==161030==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==161030==    by 0x109185: main (task.c:5)
==161030== 
==161030== 
==161030== HEAP SUMMARY:
==161030==     in use at exit: 40 bytes in 1 blocks
==161030==   total heap usage: 1 allocs, 0 frees, 40 bytes allocated
==161030== 
==161030== 40 bytes in 1 blocks are definitely lost in loss record 1 of 1
==161030==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==161030==    by 0x109185: main (task.c:5)
==161030== 
==161030== LEAK SUMMARY:
==161030==    definitely lost: 40 bytes in 1 blocks
==161030==    indirectly lost: 0 bytes in 0 blocks
==161030==      possibly lost: 0 bytes in 0 blocks
==161030==    still reachable: 0 bytes in 0 blocks
==161030==         suppressed: 0 bytes in 0 blocks
==161030== 
==161030== Use --track-origins=yes to see where uninitialised values come from
==161030== For lists of detected and suppressed errors, rerun with: -s
==161030== ERROR SUMMARY: 14 errors from 4 contexts (suppressed: 0 from 0)
"Valgrind after fixing the code"

==161090== Memcheck, a memory error detector
==161090== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==161090== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==161090== Command: ./task
==161090== 
==161090== 
==161090== HEAP SUMMARY:
==161090==     in use at exit: 0 bytes in 0 blocks
==161090==   total heap usage: 1 allocs, 1 frees, 40 bytes allocated
==161090== 
==161090== All heap blocks were freed -- no leaks are possible
==161090== 
==161090== For lists of detected and suppressed errors, rerun with: -s
==161090== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
"There were three bugs the first bug is: that the ipos and ival were not equal to 0. The second one was that the code wrote: for (int i = 0; i<=10; i++) for (int i = 0; i<=10; i++) and it should say for (int i = 0; i<10; i++) for (int i = 0; i<10; i++) And the third one was that there was no free(iarray)"
