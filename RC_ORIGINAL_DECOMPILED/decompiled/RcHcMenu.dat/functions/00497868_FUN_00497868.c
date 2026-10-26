/*
 * FUN_00497868 at 00497868
 * undefined __register FUN_00497868(int * param_1, int param_2)
 * Address ranges: 00497868-00497920
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00497868(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_00497921;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (-1 < param_2) {
    iVar2 = FUN_00497724((int)param_1);
    puVar1 = puStack_11c;
    if (local_c < iVar2) goto LAB_004978ea;
  }
  puStack_11c = puVar1;
  FUN_00402fe0(*local_8,local_118);
  FUN_00403fd4(&local_18,local_118);
  pcStack_130 = "Invalid index";
  FUN_004040f0(&local_14,3);
  FUN_00403d94(local_14);
LAB_004978ea:
  piVar3 = (int *)(**(code **)(*(int *)local_8[1] + 0x18))((int *)local_8[1],local_c);
  local_10 = FUN_00403224(piVar3,(int)&DAT_0048e2a4);
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_18,2);
  return;
}

