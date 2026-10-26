/*
 * FUN_004c32b8 at 004c32b8
 * undefined __register FUN_004c32b8(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004c32b8-004c3546
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 8 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 8 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c32b8(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_19c;
  undefined1 *puStack_198;
  undefined1 *puStack_194;
  int local_164;
  undefined4 *local_160;
  int local_15c;
  undefined4 *local_158;
  int local_154;
  byte local_150 [256];
  int local_50;
  int local_4c;
  byte local_48 [28];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_194 = &stack0xfffffffc;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  local_158 = (undefined4 *)0x0;
  local_15c = 0;
  local_154 = 0;
  local_4c = 0;
  local_50 = 0;
  puStack_198 = &LAB_004c36cb;
  uStack_19c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_19c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_00403224(param_2,(int)&DAT_004bca60);
  uVar5 = extraout_ECX;
  if (*(int *)(iVar3 + 4) == 0) {
    FUN_00402fe0(*local_8,local_150);
    FUN_00403fd4(&local_50,local_150);
    FUN_004040f0(&local_4c,3);
    FUN_00403d94(local_4c);
    uVar5 = extraout_ECX_00;
  }
  local_18 = (int *)0x0;
  piVar6 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffe4c;
  local_18 = FUN_00459fec((int *)&PTR_FUN_0045984c,'\x01',uVar5);
  iVar3 = FUN_00492a88((int)local_10);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_28 = uVar4 + 1;
    local_20 = 0;
    do {
      (**(code **)(*local_18 + 0x40))();
      local_14 = FUN_00492940((int)local_10,local_20);
      if ((*(byte *)(local_14 + 8) & 0x10) == 0) {
        iVar3 = FUN_0048ec24(*(int *)(local_14 + 0x18));
        uVar4 = iVar3 - 1;
        if (SBORROW4(iVar3,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        if (-1 < (int)uVar4) {
          local_2c = uVar4 + 1;
          local_24 = 0;
          do {
            FUN_0048f02c(*(int **)(local_14 + 0x18),local_24,(undefined4 *)local_48);
            cVar1 = FUN_00492f80(local_10,local_48);
            if (cVar1 != '\0') {
              local_48[0] = 1;
            }
            uVar5 = FUN_004917c4(local_10,local_48);
            if ((char)uVar5 != '\0') {
              FUN_0049145c(local_10,local_48,&local_154);
              (**(code **)(*local_18 + 0x34))(local_18,local_154);
            }
            local_24 = local_24 + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
        if ((*(byte *)(local_14 + 8) & 8) == 0) {
          FUN_00409bd8(local_20,&local_164);
          FUN_004040f0((int *)&local_160,3);
          bVar2 = 0;
          piVar6 = local_18;
          puVar7 = local_160;
          iVar3 = FUN_00403224(local_c,(int)&DAT_004bca60);
          FUN_004c464c(local_8,*(int *)(iVar3 + 4),local_10[0xf],piVar6,bVar2,puVar7);
        }
        else {
          FUN_00409bd8(local_20,&local_15c);
          FUN_004040f0((int *)&local_158,3);
          bVar2 = 2;
          piVar6 = local_18;
          puVar7 = local_158;
          iVar3 = FUN_00403224(local_c,(int)&DAT_004bca60);
          FUN_004c464c(local_8,*(int *)(iVar3 + 4),local_10[0xf],piVar6,bVar2,puVar7);
        }
      }
      local_20 = local_20 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  *in_FS_OFFSET = piVar6;
  FUN_00403094(local_18);
  return;
}

