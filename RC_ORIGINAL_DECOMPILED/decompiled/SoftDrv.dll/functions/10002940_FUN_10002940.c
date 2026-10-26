/*
 * FUN_10002940 at 10002940
 * undefined FUN_10002940(void)
 * Address ranges: 10002940-1000295c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002940(void)

{
  void *pvVar1;
  
  pvVar1 = _malloc(0x104);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(undefined4 *)((int)pvVar1 + 0x100) = 0;
  return;
}

