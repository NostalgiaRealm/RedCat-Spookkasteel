/*
 * FUN_004b1528 at 004b1528
 * undefined __register FUN_004b1528(int * param_1, int param_2)
 * Address ranges: 004b1528-004b15f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b1528(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *in_FS_OFFSET;
  int iStack_138;
  int iStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_11c = 0;
  puStack_124 = &LAB_004b15fa;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_c = param_2;
  local_8 = param_1;
  if ((param_2 < 0) || (puVar1 = &stack0xfffffffc, param_1[4] <= param_2)) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    FUN_00409bd8(local_c,&local_11c);
    iStack_138 = local_11c;
    FUN_004040f0((int *)&local_14,4);
    piVar2 = FUN_0040ceec((int *)&DAT_00410554,'\x01',local_14);
    FUN_0040382c(piVar2);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  puVar3 = (undefined4 *)FUN_004b146c((int)local_8,local_c);
  local_10 = *puVar3;
  *in_FS_OFFSET = iStack_138;
  FUN_00403db0(&local_11c);
  FUN_00403dd4(&local_18,2);
  return;
}

