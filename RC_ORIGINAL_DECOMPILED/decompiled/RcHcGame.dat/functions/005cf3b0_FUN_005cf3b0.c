/*
 * FUN_005cf3b0 at 005cf3b0
 * undefined FUN_005cf3b0(void)
 * Address ranges: 005cf3b0-005cf3d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * FUN_005cf3b0(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  do {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    iVar2 = FUN_005cf3e0();
  } while (iVar2 != 0);
  return (void *)0x0;
}

