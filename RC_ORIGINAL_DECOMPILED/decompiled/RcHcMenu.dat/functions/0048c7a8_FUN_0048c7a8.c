/*
 * FUN_0048c7a8 at 0048c7a8
 * undefined __register FUN_0048c7a8(int * param_1)
 * Address ranges: 0048c7a8-0048c8ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048c7a8(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 *local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_124 = 0;
  local_10 = 0;
  local_14 = 0;
  local_118 = (undefined1 *)0x0;
  puStack_12c = &LAB_0048c900;
  pcStack_130 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_130;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    (**(code **)(*local_8 + 8))(local_8,&local_118,*local_8,"AppProp <",".GetValue: ",local_14);
    puStack_12c = local_118;
    pcStack_130 = "> is not initialized";
    FUN_004040f0(&local_10,5);
    FUN_00403d94(local_10);
  }
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 != '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_120,local_114);
    (**(code **)(*local_8 + 8))(local_8,&local_124,*local_8,"AppProp <",".GetValue: ",local_120);
    puStack_12c = (undefined1 *)local_124;
    pcStack_130 = "> is NULL";
    FUN_004040f0(&local_11c,5);
    FUN_00403d94(local_11c);
  }
  local_c = local_8[0x10];
  *in_FS_OFFSET = pcStack_130;
  puStack_128 = &LAB_0048c907;
  puStack_12c = (undefined1 *)0x48c8f2;
  FUN_00403dd4(&local_124,4);
  puStack_12c = (undefined1 *)0x48c8ff;
  FUN_00403dd4(&local_14,2);
  return;
}

