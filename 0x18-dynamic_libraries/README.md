## Dynamic Library

<!-- Task Body -->
    <p>Create the dynamic library libdynamic.so containing all the functions listed below:</p>

<pre><code>int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
</code></pre>

<p>If you haven&rsquo;t coded all of the above functions create empty ones, with the right prototype.<br>
Don&rsquo;t forget to push your <code>main.h</code> file in your repository, containing at least all the prototypes of the above functions.</p>

<pre><code>julien@ubuntu:~/0x18. Dynamic libraries$ ls -la lib*
-rwxrwxr-x 1 julien julien 13632 Jan  7 06:25 libdynamic.so
julien@ubuntu:~/0x18. Dynamic libraries$ nm -D libdynamic.so 
0000000000000a90 T _abs
0000000000000aa9 T _atoi
0000000000202048 B __bss_start
                 w __cxa_finalize
0000000000202048 D _edata
0000000000202050 B _end
00000000000011f8 T _fini
                 w __gmon_start__
0000000000000900 T _init
0000000000000bd7 T _isalpha
0000000000000c04 T _isdigit
0000000000000c25 T _islower
0000000000000c46 T _isupper
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
                 w _Jv_RegisterClasses
0000000000000c67 T _memcpy
0000000000000caa T _memset
0000000000000ce9 T _putchar
0000000000000d0e T _puts
0000000000000d4a T _strcat
0000000000000dcf T _strchr
0000000000000e21 T _strcmp
0000000000000e89 T _strcpy
0000000000000eeb T _strlen
0000000000000f15 T _strncat
0000000000000fa5 T _strncpy
0000000000001029 T _strpbrk
000000000000109d T _strspn
0000000000001176 T _strstr
                 U write
julien@ubuntu:~/0x18. Dynamic libraries$ cat 0-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf(&quot;%d\n&quot;, _strlen(&quot;My Dyn Lib&quot;));
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x18. Dynamic libraries$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len 
    linux-vdso.so.1 =&gt;  (0x00007fff5d1d2000)
    libdynamic.so =&gt; not found
    libc.so.6 =&gt; /lib/x86_64-linux-gnu/libc.so.6 (0x00007f74c6bb9000)
    /lib64/ld-linux-x86-64.so.2 (0x0000556be5b82000)
julien@ubuntu:~/0x18. Dynamic libraries$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len
    linux-vdso.so.1 =&gt;  (0x00007fff41ae9000)
    libdynamic.so =&gt; ./libdynamic.so (0x00007fd4bf2d9000)
    libc.so.6 =&gt; /lib/x86_64-linux-gnu/libc.so.6 (0x00007fd4beef6000)
    /lib64/ld-linux-x86-64.so.2 (0x0000557566402000)
julien@ubuntu:~/0x18. Dynamic libraries$ ./len 
10
julien@ubuntu:~/0x18. Dynamic libraries$ 
</code></pre>
