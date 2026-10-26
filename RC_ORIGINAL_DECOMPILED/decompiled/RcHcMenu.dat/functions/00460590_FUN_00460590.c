/*
 * FUN_00460590 at 00460590
 * undefined __register FUN_00460590(int * param_1, uint param_2)
 * Address ranges: 00460590-00460643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00460590(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined2 local_e;
  uint local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_00460644;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_2;
  local_8 = param_1;
  if (((int)param_2 < 0) || (puVar1 = &stack0xfffffffc, param_1[1] <= (int)param_2)) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_130 = "Out of range";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  uVar2 = local_c;
  if (0xe < local_c) {
    uVar2 = thunk_FUN_00402874(local_c);
  }
  local_e = *(undefined2 *)((int)local_8 + uVar2 * 2 + 0x44);
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_18,2);
  return;
}

