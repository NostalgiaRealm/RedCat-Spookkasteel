/*
 * FUN_00569038 at 00569038
 * undefined __register FUN_00569038(int * param_1)
 * Address ranges: 00569038-00569138
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569038(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 *local_124;
  undefined *local_120;
  byte local_11c [256];
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_120 = (undefined *)0x0;
  local_124 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  puStack_12c = &LAB_00569139;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_11c);
  FUN_00403fd4(&local_1c,local_11c);
  FUN_004040f0((int *)&local_18,3);
  puVar1 = local_18;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  local_10 = 0;
  local_14 = 0;
  do {
    FUN_004b0344(local_14,(int *)&local_124);
    FUN_0040407c((int *)&local_120,(undefined4 *)local_8[0x44],local_124);
    uVar2 = FUN_00409dd0(local_120);
    if ((char)uVar2 != '\0') {
      bVar3 = SCARRY4(local_10,1);
      local_10 = local_10 + 1;
      if (bVar3) {
        thunk_FUN_00402874(uVar2);
      }
    }
    local_14 = local_14 + 1;
  } while (local_14 != 8);
  local_c = local_10;
  *in_FS_OFFSET = "GetPlayerCount";
  FUN_00403dd4((int *)&local_124,2);
  FUN_00403dd4(&local_1c,2);
  return;
}

