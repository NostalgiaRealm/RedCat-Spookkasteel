/*
 * FUN_004adfb0 at 004adfb0
 * undefined FUN_004adfb0(void)
 * Address ranges: 004adfb0-004adff4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004adfb0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_004ad8d0();
  return;
}

