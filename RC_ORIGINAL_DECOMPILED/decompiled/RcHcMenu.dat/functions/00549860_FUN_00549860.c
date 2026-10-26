/*
 * FUN_00549860 at 00549860
 * undefined __register FUN_00549860(int * param_1)
 * Address ranges: 00549860-0054998b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00549860(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_114 = 0;
  local_118 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_124 = &LAB_0054998c;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((char)param_1[6] == '\0') {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_134 = "AppObjList not open (active)";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  if ((char)local_8[0x10] == '\x02') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_118,local_110);
    FUN_004040f0(&local_114,3);
    FUN_00403d94(local_114);
  }
  (**(code **)(*local_8 + 0x48))();
  *(undefined1 *)(local_8 + 0x10) = 2;
  piVar2 = (int *)FUN_00549f00((int)local_8);
  FUN_00403270(piVar2,extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_118,2);
  FUN_00403dd4(&local_10,2);
  return;
}

