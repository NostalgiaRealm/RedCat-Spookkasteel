/*
 * FUN_004d56d8 at 004d56d8
 * undefined __register FUN_004d56d8(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004d56d8-004d586f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d56d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_124 [256];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  puStack_12c = &LAB_004d5870;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_8 = param_1;
  local_c = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',param_3);
  local_10 = 1;
  for (local_10 = FUN_004d562c(local_8,1); local_10 != 0; local_10 = FUN_004d562c(local_8,local_10))
  {
    local_10 = FUN_00458810(" ",local_8,local_10);
    local_10 = FUN_004d55e0(local_8,local_10);
    local_10 = FUN_004d5534(local_8,local_10);
    local_10 = FUN_004d55e0(local_8,local_10);
    local_14 = FUN_00458810(" ",local_8,local_10);
    uVar2 = local_14;
    if (local_14 == 0) {
      iVar1 = FUN_00404030(local_8);
      uVar2 = iVar1 + 1U;
      if (SCARRY4(iVar1,1)) {
        uVar2 = thunk_FUN_00402874(iVar1 + 1U);
      }
    }
    local_14 = uVar2;
    piVar3 = &local_1c;
    uVar2 = local_14 - local_10;
    if (SBORROW4(local_14,local_10)) {
      thunk_FUN_00402874((uint)piVar3);
      uVar2 = extraout_ECX;
    }
    FUN_00404238(local_8,local_10,uVar2,piVar3);
    FUN_00409924(local_1c,&local_18);
    iVar1 = FUN_00404030(local_18);
    if (iVar1 < 1) {
      FUN_00402fe0(**(int **)(param_4 + -4),local_124);
      FUN_00403fd4(&local_24,local_124);
      FUN_004040f0(&local_20,3);
      FUN_00403d94(local_20);
    }
    (**(code **)(*local_c + 0x34))(local_c,local_18);
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_004d5877;
  puStack_12c = (undefined1 *)0x4d586f;
  FUN_00403dd4(&local_24,4);
  return;
}

