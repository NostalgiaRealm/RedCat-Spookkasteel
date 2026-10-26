/*
 * FUN_0053f338 at 0053f338
 * undefined __register FUN_0053f338(int * param_1, int param_2)
 * Address ranges: 0053f338-0053f4d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053f338(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_150;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 local_138 [7];
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_140 = &LAB_0053f4d6;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0053eb9c((int)param_1);
  if ((char)uVar1 != '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_150 = "SortOrder can only be assigned if list not Active.";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  if (local_8[0xf0] == 0) {
    piVar2 = FUN_00496f60((int *)&DAT_0048e950,'\x01',local_8[0x84],0,(undefined4 *)"Intern");
    local_8[0xf0] = (int)piVar2;
  }
  FUN_0049708c(local_8[0xf0],local_c);
  iVar3 = FUN_0048ec24(*(int *)(local_8[0xf0] + 0x10));
  if (iVar3 < 1) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  (**(code **)(*(int *)local_8[0xef] + 4))();
  FUN_0048f02c(*(int **)(local_8[0xf0] + 0x10),0,local_138);
  (**(code **)(*(int *)local_8[0xef] + 0xc))((int *)local_8[0xef],local_138);
  *in_FS_OFFSET = pcStack_150;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

