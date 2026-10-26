/*
 * FUN_004b1628 at 004b1628
 * undefined __register FUN_004b1628(int * param_1, undefined4 param_2)
 * Address ranges: 004b1628-004b1785
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b1628(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_120 = &LAB_004b1786;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_004b17d4();
  iVar4 = local_8[4] + 1;
  if (SCARRY4(local_8[4],1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar4 = extraout_EDX;
  }
  if ((int)uVar1 < iVar4) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_130 = "overflow";
    FUN_004040f0((int *)&local_14,3);
    piVar2 = FUN_0040ceec((int *)&DAT_00410554,'\x01',local_14);
    FUN_0040382c(piVar2);
  }
  uVar1 = local_8[4] + 1;
  if (SCARRY4(local_8[4],1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if (local_8[2] < (int)uVar1) {
    if (local_8[2] == 0) {
      uVar1 = (uint)((longlong)local_8[3] * 4);
      if ((longlong)(int)uVar1 != (longlong)local_8[3] * 4) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      if ((int)uVar1 < 0) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      puVar3 = FUN_0040960c(uVar1);
      local_8[1] = (int)puVar3;
      local_8[2] = local_8[3];
    }
    else {
      uVar1 = local_8[2] + local_8[3];
      if (SCARRY4(local_8[2],local_8[3])) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      iVar4 = (int)((longlong)(int)uVar1 * 4);
      if ((longlong)iVar4 != (longlong)(int)uVar1 * 4) {
        thunk_FUN_00402874(uVar1);
        iVar4 = extraout_EDX_00;
      }
      FUN_00402818(local_8 + 1,iVar4);
      uVar1 = local_8[3];
      piVar2 = local_8 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + uVar1;
      if (SCARRY4(iVar4,uVar1)) {
        thunk_FUN_00402874(uVar1);
      }
    }
  }
  puVar3 = (undefined4 *)FUN_004b146c((int)local_8,local_8[4]);
  *puVar3 = local_c;
  local_10 = local_8[4];
  piVar2 = local_8 + 4;
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + 1;
  if (SCARRY4(iVar4,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_18,2);
  return;
}

