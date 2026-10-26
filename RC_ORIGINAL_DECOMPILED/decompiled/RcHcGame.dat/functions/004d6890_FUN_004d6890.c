/*
 * FUN_004d6890 at 004d6890
 * undefined FUN_004d6890(void)
 * Address ranges: 004d6890-004d68db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004d6890(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_004cffd0();
  iVar4 = 0;
  while( true ) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1b0) + 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1b0) + 8) - iVar2 >> 2;
    }
    if (iVar2 <= iVar4) break;
    piVar3 = (int *)FUN_00437340(iVar4);
    if (iVar1 == *piVar3) {
      return 1;
    }
    iVar4 = iVar4 + 1;
  }
  return 0;
}

