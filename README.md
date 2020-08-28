# crackmes

Different crack me challenges

* password checker
    checks input against some value

* keygen
    takes user input, produces a password from input based on algorithm

* patchme
    remove some code by nop/jump etc...

* pwnme
    binary exploit

## Vulns

32-bit
executable stack/ no DEP
no PIE
no canary

```
gcc file.c -m32 -z execstack -fno-stack-protector -fno-pie 
```

no endbr32/endbr64 control flow enforcement ??

