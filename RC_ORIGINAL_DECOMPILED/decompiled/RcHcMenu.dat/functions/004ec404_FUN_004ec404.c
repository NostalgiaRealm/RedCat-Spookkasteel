/*
 * FUN_004ec404 at 004ec404
 * undefined __register FUN_004ec404(int * param_1, int * param_2)
 * Address ranges: 004ec404-004ec746;004ec7a1-004ec7f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 10 for TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 10 for
   TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004ec404(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  int local_180;
  int local_17c;
  int local_178;
  char *local_174;
  VARIANT local_170;
  undefined *local_160;
  int local_15c;
  byte local_158 [256];
  int local_58;
  int local_54;
  byte local_50 [4];
  undefined *puStackY_4c;
  char *pcStackY_48;
  char *pcStackY_44;
  char *pcStackY_40;
  undefined *puStackY_3c;
  undefined4 *puStackY_38;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  char *local_20;
  
  local_20 = &stack0xfffffffc;
  local_2c = &stack0xfffffffc;
  iVar8 = 0x2f;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_24 = (undefined4 *)&LAB_004ec7f4;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  FUN_00403db0((int *)&local_20);
  piVar10 = (int *)&LAB_004ec747;
  puVar9 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffcc;
  puStackY_38 = (undefined4 *)0x4ec454;
  FUN_00459af0(-0x11);
  puStackY_38 = (undefined4 *)0x4ec45c;
  piVar4 = (int *)FUN_004cf200(param_1);
  puStackY_38 = (undefined4 *)0x4ec467;
  piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_004ea51c);
  puStackY_38 = (undefined4 *)0x4ec472;
  iVar8 = FUN_00494858(param_2);
  puStackY_38 = (undefined4 *)0x4ec482;
  FUN_0040407c(&local_54,(undefined4 *)"INSERT INTO ",*(undefined4 **)(iVar8 + 0x3c));
  puStackY_38 = (undefined4 *)0x4ec48d;
  (**(code **)(*piVar4 + 0x60))(piVar4,local_54);
  puStackY_38 = (undefined4 *)0x4ec498;
  bVar2 = FUN_004940cc(param_2,local_50);
  puVar1 = &stack0xfffffffc;
  if (bVar2) {
    do {
      puStackY_38 = (undefined4 *)&stack0xffffffcc;
      puVar9 = (undefined4 *)&stack0xffffffd0;
      pcStackY_40 = (char *)0x4ec4b5;
      FUN_00494e38(param_2,local_50,'\0',puVar9,puStackY_38);
      if (piVar10 == (int *)0x0) {
        pcStackY_40 = (char *)0x4ec4cb;
        FUN_00402fe0(*param_1,local_158);
        pcStackY_40 = (char *)0x4ec4d9;
        FUN_00403fd4(&local_58,local_158);
        pcStackY_40 = (char *)0x4ec4e6;
        FUN_00404038(&local_58,
                     (undefined4 *)
                     ".DoInsertAppObj: Cannot insert object with unallocated native props");
        pcStackY_40 = (char *)0x4ec4f8;
        FUN_00403d94(local_58);
      }
      pcStackY_40 = (char *)0x4ec500;
      piVar5 = (int *)FUN_00494858(param_2);
      pcStackY_40 = (char *)0x4ec508;
      uVar6 = FUN_004917c4(piVar5,local_50);
      if (((char)uVar6 != '\0') && ((*(byte *)(puVar9 + 6) & 8) == 0)) {
        pcStackY_40 = (char *)0x4ec525;
        cVar3 = (**(code **)(*piVar10 + 0x4c))();
        if (cVar3 == '\0') {
          pcStackY_40 = (char *)0x4ec539;
          FUN_00402fe0(*param_1,local_158);
          pcStackY_40 = (char *)0x4ec54a;
          FUN_00403fd4(&local_15c,local_158);
          pcStackY_40 = (char *)0x4ec55a;
          FUN_00404038(&local_15c,
                       (undefined4 *)
                       ".DoInsertAppObj: Cannot insert object with uninitialized native props");
          pcStackY_40 = (char *)0x4ec56f;
          FUN_00403d94(local_15c);
        }
        if ((*(byte *)(puVar9 + 6) & 0x10) != 0) {
          pcStackY_40 = (char *)0x4ec583;
          (**(code **)(*param_1 + 0x3c))(param_1,piVar10);
        }
        pcStackY_40 = (char *)0x4ec58b;
        cVar3 = (**(code **)(*piVar10 + 0x50))();
        if (cVar3 == '\0') {
          puStackY_38 = (undefined4 *)&DAT_004ec8fc;
          puStackY_3c = (undefined *)0x4ec5b1;
          FUN_00409bd8(local_2c,(int *)&local_160);
          puStackY_3c = local_160;
          pcStackY_40 = "_Param";
          pcStackY_44 = (char *)0x4ec5c9;
          FUN_004040f0((int *)&local_24,3);
          pcStackY_44 = (char *)0x4ec5d7;
          (**(code **)(*piVar4 + 4))(piVar4,local_24,&local_28);
          pcStackY_44 = (char *)0x4ec5e6;
          iVar8 = FUN_004d4de4((int *)&PTR_FUN_004ccb54,'\x01',local_24);
          pcStackY_44 = (char *)0x4ec5f7;
          FUN_00496550(piVar10,&local_170);
          pcStackY_44 = (char *)0x4ec605;
          FUN_004d4ebc(iVar8,(undefined4 *)&local_170);
          pcStackY_44 = (char *)0x4ec613;
          (**(code **)(*(int *)piVar4[8] + 0xc))((int *)piVar4[8],iVar8);
        }
        else {
          puStackY_38 = (undefined4 *)0x4ec59c;
          FUN_00403e48((int *)&local_28,0x4ec8ec);
        }
        if (local_2c == (undefined1 *)0x0) {
          puStackY_38 = (undefined4 *)0x4ec621;
          piVar5 = (int *)FUN_00494858(param_2);
          puStackY_38 = (undefined4 *)0x4ec62c;
          FUN_0049145c(piVar5,local_50,(int *)&stack0xffffffe4);
          puStackY_38 = (undefined4 *)0x4ec637;
          uVar7 = FUN_00403e48((int *)&local_20,(int)local_28);
        }
        else {
          puStackY_3c = &DAT_004ec918;
          pcStackY_40 = (char *)0x4ec649;
          piVar5 = (int *)FUN_00494858(param_2);
          pcStackY_40 = (char *)0x4ec657;
          FUN_0049145c(piVar5,local_50,(int *)&local_174);
          pcStackY_40 = local_174;
          pcStackY_44 = (char *)0x4ec66a;
          FUN_004040f0((int *)&stack0xffffffe4,3);
          pcStackY_44 = local_20;
          pcStackY_48 = ", ";
          local_50[0] = 0x82;
          local_50[1] = 0xc6;
          local_50[2] = 0x4e;
          local_50[3] = 0;
          puVar9 = local_28;
          uVar7 = FUN_004040f0((int *)&local_20,3);
        }
        bVar2 = SCARRY4((int)local_2c,1);
        local_2c = local_2c + 1;
        if (bVar2) {
          puStackY_38 = (undefined4 *)0x4ec68d;
          thunk_FUN_00402874(uVar7);
        }
      }
      puStackY_38 = (undefined4 *)0x4ec698;
      cVar3 = FUN_004940f4(param_2,local_50);
      puVar1 = local_2c;
    } while (cVar3 != '\0');
  }
  local_2c = puVar1;
  if (0 < (int)local_2c) {
    puStackY_38 = (undefined4 *)&DAT_004ec924;
    pcStackY_40 = ")";
    pcStackY_44 = (char *)0x4ec6c3;
    puStackY_3c = unaff_EDI;
    FUN_004040f0(&local_178,3);
    pcStackY_44 = (char *)0x4ec6d1;
    (**(code **)(*piVar4 + 0x60))(piVar4,local_178);
    pcStackY_44 = " VALUES (";
    pcStackY_48 = local_20;
    puStackY_4c = &DAT_004ec950;
    local_50[0] = 0xee;
    local_50[1] = 0xc6;
    local_50[2] = 0x4e;
    local_50[3] = 0;
    FUN_004040f0(&local_17c,3);
    local_50[0] = 0xfc;
    local_50[1] = 0xc6;
    local_50[2] = 0x4e;
    local_50[3] = 0;
    (**(code **)(*piVar4 + 0x60))(piVar4,local_17c);
    puStackY_38 = (undefined4 *)0x4ec704;
    FUN_004d5b68(piVar4);
  }
  puStackY_38 = (undefined4 *)0x4ec70c;
  iVar8 = FUN_004949bc(param_2);
  puStackY_38 = (undefined4 *)0x4ec711;
  iVar8 = FUN_00496d84(iVar8);
  if ((*(byte *)(iVar8 + 0x18) & 8) != 0) {
    puStackY_38 = (undefined4 *)0x4ec71f;
    uVar6 = FUN_004949bc(param_2);
    puStackY_38 = (undefined4 *)0x4ec72c;
    (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar6);
  }
  puStackY_38 = (undefined4 *)0x4ec734;
  FUN_00403094(piVar4);
  puStackY_38 = (undefined4 *)0x4ec73d;
  FUN_00459b04();
  *in_FS_OFFSET = puVar9;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_004ec7fb;
  local_24 = (undefined4 *)0x4ec7be;
  FUN_00403dd4(&local_180,4);
  local_24 = (undefined4 *)0x4ec7c9;
  FUN_00405bcc(&local_170);
  local_24 = (undefined4 *)0x4ec7d9;
  FUN_00403dd4((int *)&local_160,2);
  local_24 = (undefined4 *)0x4ec7e6;
  FUN_00403dd4(&local_58,2);
  local_24 = (undefined4 *)0x4ec7f3;
  FUN_00403dd4((int *)&local_28,4);
  return;
}

