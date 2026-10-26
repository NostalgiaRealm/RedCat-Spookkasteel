/*
 * FUN_004a0478 at 004a0478
 * undefined __register FUN_004a0478(int * param_1, byte * param_2)
 * Address ranges: 004a0478-004a05b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 18 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 18 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a0478(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *in_FS_OFFSET;
  int in_stack_fffffec4;
  int iStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte *local_120;
  undefined1 local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  byte *local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_118 = 0;
  puStack_128 = &LAB_004a05b5;
  iStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_12c;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_00409dd0(param_2);
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    local_120 = local_c;
    local_11c = 0xb;
    FUN_0040a894((byte *)" File \"%s\" not found",&local_120,0,&local_118);
    in_stack_fffffec4 = local_118;
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  FUN_0049fa18(local_8);
  piVar2 = FUN_0049f0ec(&LAB_0049eb10,extraout_EDX,extraout_ECX);
  iVar3 = FUN_0049f478(piVar2,local_c);
  local_8[9] = iVar3;
  if (local_8[9] != 0) {
    (**(code **)(*local_8 + 0x78))(local_8,*(undefined4 *)(local_8[9] + 8));
  }
  if (*(char *)((int)local_8 + 0x3d) != '\0') {
    (**(code **)(*local_8 + 0x60))();
  }
  if ((char)local_8[8] != '\0') {
    FUN_004a0aa4(local_8);
  }
  (**(code **)(*local_8 + 0x10))(local_8,local_8);
  *in_FS_OFFSET = in_stack_fffffec4;
  FUN_00403db0(&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

