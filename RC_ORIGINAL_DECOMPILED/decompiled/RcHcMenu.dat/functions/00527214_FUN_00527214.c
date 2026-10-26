/*
 * FUN_00527214 at 00527214
 * undefined __register FUN_00527214(int * param_1)
 * Address ranges: 00527214-005272c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00527214(int *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_005272c4;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_8 = param_1;
  uVar1 = FUN_0040320c((int *)param_1[1],(int)&LAB_00525f60);
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "Owner must be a TAppObjGrid2.";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  local_c = FUN_00403224((int *)local_8[1],(int)&LAB_00525f60);
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

