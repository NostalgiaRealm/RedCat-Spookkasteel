/*
 * FUN_10002c10 at 10002c10
 * undefined FUN_10002c10(void)
 * Address ranges: 10002c10-10002c32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * FUN_10002c10(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  do {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    iVar2 = FUN_10002c40();
  } while (iVar2 != 0);
  return (void *)0x0;
}

