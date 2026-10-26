/*
 * FUN_0054916c at 0054916c
 * undefined __register FUN_0054916c(int * param_1)
 * Address ranges: 0054916c-005492bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054916c(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int local_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_114 = 0;
  local_118 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_120 = &LAB_005492bd;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((char)param_1[6] == '\0') {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_130 = "AppObjList not open (active)";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  if ((char)local_8[0x10] != '\x02') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_118,local_110);
    FUN_004040f0(&local_114,3);
    FUN_00403d94(local_114);
  }
  *(undefined1 *)(local_8 + 0x10) = 1;
  if (local_8[0xc] == 0) {
    iVar2 = FUN_0049206c((int *)local_8[7]);
    local_8[0xc] = iVar2;
  }
  piVar3 = (int *)FUN_00549b80((int)local_8);
  FUN_00493768((int *)local_8[0xc],piVar3);
  (**(code **)(*local_8 + 0x38))();
  FUN_00549fd0((int)local_8);
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_118,2);
  FUN_00403dd4(&local_10,2);
  return;
}

