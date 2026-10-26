/*
 * FUN_0054a14c at 0054a14c
 * undefined __register FUN_0054a14c(int * param_1, int * param_2)
 * Address ranges: 0054a14c-0054a20d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054a14c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0054a20e;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[6] != '\0') {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "ConditionArray can only be changed if list is closed";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  FUN_00403094((int *)local_8[10]);
  local_8[10] = 0;
  if (local_c != (int *)0x0) {
    piVar2 = FUN_004b6100(local_c);
    local_8[10] = (int)piVar2;
  }
  (**(code **)(*local_8 + 0x70))();
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

