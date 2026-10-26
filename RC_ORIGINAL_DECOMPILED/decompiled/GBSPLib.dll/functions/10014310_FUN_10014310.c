/*
 * FUN_10014310 at 10014310
 * undefined FUN_10014310(void)
 * Address ranges: 10014310-10014332
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * FUN_10014310(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  do {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    iVar2 = FUN_10014340();
  } while (iVar2 != 0);
  return (void *)0x0;
}

