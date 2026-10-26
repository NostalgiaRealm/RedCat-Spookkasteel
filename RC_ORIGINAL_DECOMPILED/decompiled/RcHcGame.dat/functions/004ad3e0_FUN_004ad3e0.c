/*
 * FUN_004ad3e0 at 004ad3e0
 * undefined FUN_004ad3e0(void)
 * Address ranges: 004ad3e0-004ad43a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_004ad3e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_00484d70(param_2,*(undefined4 *)(param_1 + 0x28));
  iVar4 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
    }
    if (iVar2 <= iVar4) break;
    uVar5 = uVar1;
    FUN_004ad480(iVar4);
    uVar3 = FUN_004ad920(uVar5);
    if ((char)uVar3 == '\0') {
      return uVar3 & 0xffffff00;
    }
    iVar4 = iVar4 + 1;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

