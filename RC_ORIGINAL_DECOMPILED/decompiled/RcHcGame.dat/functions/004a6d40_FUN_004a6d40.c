/*
 * FUN_004a6d40 at 004a6d40
 * undefined FUN_004a6d40(void)
 * Address ranges: 004a6d40-004a6dac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a6d40(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_006b8f60 != 0) {
    iVar5 = 0;
    while( true ) {
      iVar3 = DAT_006b8f60;
      iVar1 = *(int *)(DAT_006b8f60 + 4);
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(DAT_006b8f60 + 8) - iVar1 >> 2;
      }
      if (iVar4 <= iVar5) break;
      puVar2 = *(undefined4 **)(iVar1 + iVar5 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(DAT_006b8f60 + 4) + -4 + iVar5 * 4) = 0;
    }
    if (DAT_006b8f60 != 0) {
      FUN_004a70b0();
      FUN_005fe5f0(iVar3);
    }
    DAT_006b8f60 = 0;
  }
  return;
}

