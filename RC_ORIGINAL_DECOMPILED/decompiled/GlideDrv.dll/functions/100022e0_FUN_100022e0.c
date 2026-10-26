/*
 * FUN_100022e0 at 100022e0
 * undefined __stdcall FUN_100022e0(void)
 * Address ranges: 100022e0-10002302
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100022e0(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = &DAT_100e3e20;
  iVar2 = 20000;
  do {
    if (*pcVar1 != '\0') {
      FUN_100022a0((undefined4 *)pcVar1);
    }
    pcVar1 = pcVar1 + 0x38;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

