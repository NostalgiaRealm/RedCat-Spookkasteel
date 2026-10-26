/*
 * FUN_005279cc at 005279cc
 * undefined __register FUN_005279cc(int * param_1, int param_2)
 * Address ranges: 005279cc-00527c2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005279cc(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_168;
  char *pcStack_164;
  undefined1 *puStack_160;
  char *pcStack_15c;
  char *pcStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  int local_144;
  int local_140;
  byte local_13c [256];
  int local_3c;
  int local_38;
  byte local_34 [28];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_148 = &stack0xfffffffc;
  local_140 = 0;
  local_144 = 0;
  local_38 = 0;
  local_3c = 0;
  puStack_14c = &LAB_00527c80;
  uStack_150 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_150;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    iStack_154 = 0x527a13;
    FUN_00402fe0(*param_1,local_13c);
    iStack_154 = 0x527a21;
    FUN_00403fd4(&local_3c,local_13c);
    iStack_154 = local_3c;
    pcStack_158 = ".ConvertFromSortOrder: ";
    pcStack_15c = " Parameter cannot be nil";
    puStack_160 = (undefined1 *)0x527a3b;
    FUN_004040f0(&local_38,3);
    puStack_160 = (undefined1 *)0x527a4d;
    FUN_00403d94(local_38);
    puVar1 = puStack_148;
  }
  puStack_148 = puVar1;
  if (*(int *)(local_c + 4) == 0) {
    puStack_160 = (undefined1 *)0x527a66;
    FUN_00402fe0(*local_8,local_13c);
    puStack_160 = (undefined1 *)0x527a77;
    FUN_00403fd4(&local_144,local_13c);
    puStack_160 = (undefined1 *)local_144;
    pcStack_164 = ".ConvertFromSortOrder: ";
    pcStack_168 = "AppObjDesc is nil";
    FUN_004040f0(&local_140,3);
    FUN_00403d94(local_140);
  }
  puStack_160 = (undefined1 *)0x527ab4;
  FUN_00520830(local_8);
  local_8[0xa0] = *(int *)(local_c + 4);
  puStack_160 = (undefined1 *)0x527ace;
  iVar3 = FUN_0048ec24(*(int *)(local_c + 0x10));
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    puStack_160 = (undefined1 *)0x527ad8;
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_18 = uVar4 + 1;
    local_10 = 0;
    do {
      puStack_160 = (undefined1 *)0x527af8;
      FUN_0048f02c(*(int **)(local_c + 0x10),local_10,(undefined4 *)local_34);
      puStack_160 = (undefined1 *)0x527b03;
      cVar2 = FUN_005275fc((int)local_8,(undefined4 *)local_34);
      if (cVar2 == '\0') {
        puStack_160 = (undefined1 *)0x527b14;
        FUN_005274dc(local_8,(undefined4 *)local_34,'\x01');
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  puStack_160 = (undefined1 *)0x527b24;
  iVar3 = FUN_00527214(local_8);
  puStack_160 = (undefined1 *)0x527b2f;
  (**(code **)(**(int **)(iVar3 + 0x2a4) + 4))();
  puStack_160 = (undefined1 *)0x527b37;
  iVar3 = FUN_00527214(local_8);
  puStack_160 = (undefined1 *)0x527b48;
  (**(code **)(**(int **)(iVar3 + 0x2a4) + 8))
            (*(int **)(iVar3 + 0x2a4),*(undefined4 *)(local_c + 0x14));
  puStack_160 = (undefined1 *)0x527b50;
  FUN_005200dc((uint)local_8);
  pcStack_164 = &LAB_00527c2b;
  pcStack_168 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_168;
  puStack_160 = &stack0xfffffffc;
  iVar3 = FUN_0048ec24(*(int *)(local_c + 0x18));
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_18 = uVar4 + 1;
    local_10 = 0;
    do {
      FUN_0048f02c(*(int **)(local_c + 0x18),local_10,(undefined4 *)local_34);
      cVar2 = FUN_005275fc((int)local_8,(undefined4 *)local_34);
      if (cVar2 == '\0') {
        FUN_005274dc(local_8,(undefined4 *)local_34,'\0');
      }
      cVar2 = FUN_005275fc((int)local_8,(undefined4 *)local_34);
      if (cVar2 != '\0') {
        local_14 = FUN_005270b0(local_8,(undefined4 *)local_34);
        cVar2 = FUN_0048f780(*(int **)(local_c + 0x18),local_34);
        if (cVar2 == '\0') {
          FUN_0051cc08(local_14,'\0');
        }
        else {
          FUN_0051cc08(local_14,'\x01');
        }
        (**(code **)(*(int *)local_8[0x9e] + 0xc))((int *)local_8[0x9e],local_14);
      }
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *in_FS_OFFSET = pcStack_168;
  puStack_160 = &LAB_00527c32;
  pcStack_164 = (char *)0x527c2a;
  FUN_005200f8(local_8);
  return;
}

