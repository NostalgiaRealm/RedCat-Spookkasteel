/*
 * FUN_00412a88 at 00412a88
 * undefined __register FUN_00412a88(int * param_1, int * param_2)
 * Address ranges: 00412a88-00412b3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412a88(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int local_118;
  undefined1 local_114;
  byte *local_110;
  undefined1 local_10c;
  byte local_108 [256];
  int local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_8 = 0;
  puStack_128 = &LAB_00412b3e;
  puStack_12c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_12c;
  if (param_2 == (int *)0x0) {
    FUN_00403e48(&local_8,0x412b54);
  }
  else {
    puStack_124 = &stack0xfffffffc;
    FUN_00402fe0(*param_2,local_108);
    FUN_00403fd4(&local_8,local_108);
  }
  local_118 = local_8;
  local_114 = 0xb;
  FUN_00402fe0(*param_1,local_108);
  local_110 = local_108;
  local_10c = 4;
  uVar2 = 1;
  uVar1 = FUN_0040cfe4((int)&DAT_0040911c,'\x01',(undefined4 *)PTR_PTR_005722cc,1,&local_118);
  FUN_0040382c(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_12c = &LAB_00412b45;
  FUN_00403db0(&local_8);
  return;
}

