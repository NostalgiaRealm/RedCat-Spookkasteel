/*
 * FUN_0057c960 at 0057c960
 * undefined FUN_0057c960(void)
 * Address ranges: 0057c960-0057c98d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0057c960(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x104) = 0;
  iVar1 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar1 = FUN_0055b280();
  }
  if (*(char *)(iVar1 + 0x67d) != '\0') {
    *(undefined1 *)(iVar1 + 0x67c) = 1;
    *(undefined1 *)(iVar1 + 0x67d) = 0;
  }
  return;
}

