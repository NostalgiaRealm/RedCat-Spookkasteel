/*
 * FUN_00412ce4 at 00412ce4
 * undefined __register FUN_00412ce4(int * param_1, int * param_2)
 * Address ranges: 00412ce4-00412d78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412ce4(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_18 = 0;
  puStack_12c = &LAB_00412d79;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  if (param_1[1] == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(param_2,local_118);
  }
  else {
    puStack_128 = &stack0xfffffffc;
    FUN_00403270((int *)param_1[1],&local_18,0);
    local_14 = local_18;
    local_10 = 0xb;
    local_c = FUN_00412ca4((int)param_1);
    local_8 = 0;
    FUN_0040a894((byte *)"%s[%d]",&local_14,1,param_2);
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_00412d80;
  puStack_12c = (undefined1 *)0x412d78;
  FUN_00403db0(&local_18);
  return;
}

