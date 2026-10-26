/*
 * FUN_004ad3a0 at 004ad3a0
 * undefined FUN_004ad3a0(void)
 * Address ranges: 004ad3a0-004ad3d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004ad3a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
    }
    if (iVar1 <= iVar2) break;
    FUN_004ad480(iVar2);
    FUN_0040ae70();
    iVar2 = iVar2 + 1;
  }
  return;
}

