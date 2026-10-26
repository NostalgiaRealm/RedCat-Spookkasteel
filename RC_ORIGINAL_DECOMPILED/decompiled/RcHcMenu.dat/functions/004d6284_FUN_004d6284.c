/*
 * FUN_004d6284 at 004d6284
 * undefined __register FUN_004d6284(int * param_1, int param_2)
 * Address ranges: 004d6284-004d63a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d6284(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_004d63a6;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_c = param_2;
  local_8 = param_1;
  uVar2 = FUN_004d6094((int)param_1,param_2);
  if ((char)uVar2 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_134 = "invalid bookmark";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  cVar1 = (**(code **)(*local_8 + 0x38))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  (**(code **)(*local_8 + 0x28))(local_8,local_c);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

