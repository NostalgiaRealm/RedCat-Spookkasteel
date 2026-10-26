/*
 * FUN_00549c18 at 00549c18
 * undefined __register FUN_00549c18(int * param_1, int param_2)
 * Address ranges: 00549c18-00549dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00549c18(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_140;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_124;
  int local_120 [3];
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_120[0] = 0;
  local_124 = 0;
  local_120[2] = 0;
  local_120[1] = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_130 = &LAB_00549dcc;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_140 = "Sortorder can\'t be nil";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_12c;
  }
  puStack_12c = puVar1;
  if (local_8[7] == 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(local_120 + 1,local_114);
    FUN_004040f0(local_120 + 2,5);
    FUN_00403d94(local_120[2]);
  }
  if (*(int *)(local_c + 4) != local_8[7]) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_124,local_114);
    FUN_004040f0(local_120,3);
    FUN_00403d94(local_120[0]);
  }
  FUN_0049708c(local_8[0xf],local_c);
  if ((char)local_8[6] != '\0') {
    (**(code **)(*local_8 + 0x6c))();
    FUN_00403270((int *)local_8[0x1f],extraout_EDX,extraout_ECX);
  }
  *in_FS_OFFSET = pcStack_140;
  FUN_00403dd4(&local_124,4);
  FUN_00403dd4(&local_14,2);
  return;
}

