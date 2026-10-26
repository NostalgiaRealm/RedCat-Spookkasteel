/*
 * FUN_004c3ad0 at 004c3ad0
 * undefined __register FUN_004c3ad0(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004c3ad0-004c3cce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 10 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 10 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c3ad0(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  LPCSTR pCVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_180;
  undefined1 *puStack_17c;
  undefined1 *puStack_178;
  undefined4 *local_170;
  int local_16c;
  LPCSTR local_168;
  undefined4 *local_164;
  byte local_160 [256];
  int local_60;
  int local_5c;
  byte local_58 [28];
  byte local_3c [28];
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_178 = &stack0xfffffffc;
  local_164 = (undefined4 *)0x0;
  local_168 = (LPCSTR)0x0;
  local_16c = 0;
  local_170 = (undefined4 *)0x0;
  local_5c = 0;
  local_60 = 0;
  puStack_17c = &LAB_004c3d01;
  uStack_180 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_180;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_00403224(param_2,(int)&DAT_004bca60);
  if (*(int *)(iVar3 + 4) == 0) {
    FUN_00402fe0(*local_8,local_160);
    FUN_00403fd4(&local_60,local_160);
    FUN_004040f0(&local_5c,3);
    FUN_00403d94(local_5c);
  }
  local_14 = (int *)0x0;
  pCVar8 = (LPCSTR)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffe68;
  local_1c = 0;
  bVar1 = FUN_00491e60((int)local_10,local_3c);
  if (bVar1) {
    do {
      uVar4 = FUN_004917c4(local_10,local_3c);
      if ((char)uVar4 != '\0') {
        local_18 = (int *)FUN_00492440(local_10,local_3c);
        uVar4 = FUN_0040320c(local_18,(int)&PTR_FUN_004740c8);
        if ((char)uVar4 != '\0') {
          local_20 = FUN_00403224(local_18,(int)&PTR_FUN_004740c8);
          local_14 = (int *)(**(code **)(*(int *)(local_20 + 0x30) + 0x38))
                                      (*(int *)(local_20 + 0x30),1);
          piVar5 = (int *)FUN_00494858(local_14);
          FUN_00492408(piVar5,local_58);
          iVar3 = FUN_00494858(local_14);
          puVar11 = *(undefined4 **)(iVar3 + 0x3c);
          piVar5 = (int *)FUN_00494858(local_14);
          FUN_0049145c(piVar5,local_58,(int *)&local_164);
          puVar9 = (undefined4 *)local_10[0xf];
          puVar10 = local_164;
          FUN_0049145c(local_10,local_3c,(int *)&local_168);
          pCVar8 = local_168;
          FUN_00409bd8(local_1c,(int *)&local_170);
          FUN_0040407c(&local_16c,(undefined4 *)local_10[0xf],local_170);
          iVar3 = local_16c;
          iVar6 = FUN_00403224(local_c,(int)&DAT_004bca60);
          uVar7 = FUN_004c490c(local_8,*(ULONG *)(iVar6 + 4),iVar3,pCVar8,puVar9,puVar10,puVar11);
          bVar1 = SCARRY4(local_1c,1);
          local_1c = local_1c + 1;
          if (bVar1) {
            thunk_FUN_00402874(uVar7);
          }
          FUN_00403094(local_14);
          local_14 = (int *)0x0;
        }
      }
      cVar2 = FUN_00491eac((int)local_10,local_3c);
    } while (cVar2 != '\0');
  }
  *in_FS_OFFSET = pCVar8;
  FUN_00403094(local_14);
  return;
}

