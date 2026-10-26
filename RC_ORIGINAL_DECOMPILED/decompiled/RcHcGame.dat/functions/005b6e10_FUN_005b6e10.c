/*
 * FUN_005b6e10 at 005b6e10
 * undefined FUN_005b6e10(void)
 * Address ranges: 005b6e10-005b6e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b6e10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_2 + 8);
  local_c = *(undefined4 *)(param_2 + 4);
  local_4 = *(undefined4 *)(param_2 + 0xc);
  iVar4 = FUN_005d1790(&local_c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0xd5cc);
  iVar2 = *(int *)(iVar1 + 8 + iVar4 * 0xc);
  iVar1 = iVar1 + iVar4 * 0xc;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xb0) = param_2;
  }
  uVar3 = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_2 + 0xb0) = 0;
  *(undefined4 *)(param_2 + 0xb4) = uVar3;
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(param_2 + 0x94) = iVar1;
  return;
}

