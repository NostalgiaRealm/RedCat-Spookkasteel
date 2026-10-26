/*
 * FUN_005443c0 at 005443c0
 * undefined FUN_005443c0(void)
 * Address ranges: 005443c0-0054443c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005443c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 4;
    }
    if (iVar2 <= iVar3) break;
    FUN_00548f50();
    FUN_00548a70();
    cVar1 = FUN_00544440();
    if (cVar1 != '\0') {
      FUN_005413b0(param_1);
      cVar1 = FUN_00542f20();
      if (cVar1 == '\0') {
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
  }
  return 0;
}

