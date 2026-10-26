/*
 * FUN_00491170 at 00491170
 * undefined __register FUN_00491170(int * param_1, byte * param_2, int * param_3)
 * Address ranges: 00491170-0049138b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00491170(int *param_1,byte *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int *in_FS_OFFSET;
  int iStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  int local_13c [4];
  byte local_12c [256];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  int *local_10;
  byte *local_c;
  int *local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_13c[0] = 0;
  local_13c[3] = 0;
  local_13c[2] = 0;
  local_13c[1] = 0;
  local_28 = 0;
  local_2c = 0;
  local_20 = 0;
  puStack_148 = &LAB_0049138c;
  iStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_14c;
  puVar2 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*param_2 == 0) {
    FUN_00402fe0(*param_1,local_12c);
    FUN_00403fd4(&local_2c,local_12c);
    FUN_004040f0(&local_28,3);
    FUN_00403d94(local_28);
    param_3 = extraout_ECX;
    puVar2 = puStack_144;
  }
  puStack_144 = puVar2;
  cVar3 = FUN_0048e148((int)local_c,local_8[0xd],param_3);
  if (cVar3 == '\0') {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(local_13c + 2,local_12c);
    FUN_0048e1ec((int)local_c,local_13c + 1);
    FUN_004040f0(local_13c + 3,4);
    FUN_00403d94(local_13c[3]);
  }
  local_18 = local_8;
  uVar4 = *local_c - 2;
  if (SBORROW4((uint)*local_c,2)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_24 = uVar4 + 1;
    local_14 = 0;
    do {
      uVar4 = local_14;
      if (9 < local_14) {
        uVar4 = thunk_FUN_00402874(local_14);
      }
      piVar5 = (int *)FUN_004923e0((int)local_18,(int)*(short *)(local_c + uVar4 * 2 + 2));
      local_1c = FUN_00403224(piVar5,(int)&PTR_FUN_004740c8);
      piVar5 = (int *)FUN_00497394(local_1c,extraout_EDX,extraout_ECX_00);
      local_18 = (int *)FUN_0049756c(piVar5,*(int *)(local_1c + 0x30));
      if (*(char *)(local_1c + 0x38) != '\0') {
        uVar4 = local_14;
        if (9 < local_14) {
          uVar4 = thunk_FUN_00402874(local_14);
        }
        FUN_00409bd8((int)*(short *)(local_c + uVar4 * 2 + 2),local_13c);
        FUN_004040f0(&local_20,3);
      }
      local_14 = local_14 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  iVar1 = local_20;
  FUN_004040f0(local_10,4);
  *in_FS_OFFSET = iVar1;
  FUN_00403dd4(local_13c,4);
  FUN_00403dd4(&local_2c,2);
  FUN_00403db0(&local_20);
  return;
}

