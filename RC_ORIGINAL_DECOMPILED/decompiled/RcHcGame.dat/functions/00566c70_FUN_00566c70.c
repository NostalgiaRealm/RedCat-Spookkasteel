/*
 * FUN_00566c70 at 00566c70
 * undefined FUN_00566c70(void)
 * Address ranges: 00566c70-00566cb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00566c70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - iVar1 >> 2;
    }
    if (iVar2 <= iVar3) break;
    iVar1 = *(int *)(iVar1 + iVar3 * 4);
    if (iVar1 != 0) {
      FUN_00514430();
      FUN_005fe5f0(iVar1);
    }
    iVar3 = iVar3 + 1;
  }
  FUN_005673c0();
  return;
}

