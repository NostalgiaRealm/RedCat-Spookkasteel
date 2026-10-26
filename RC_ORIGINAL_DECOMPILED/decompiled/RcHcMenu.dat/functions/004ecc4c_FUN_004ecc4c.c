/*
 * FUN_004ecc4c at 004ecc4c
 * undefined __register FUN_004ecc4c(int * param_1, int * param_2, undefined4 param_3, char param_4)
 * Address ranges: 004ecc4c-004ed05f;004ed0bd-004ed0f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 12 for TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot 12 for
   TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004ecc4c(int *param_1,int *param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *in_FS_OFFSET;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  byte local_7c [4];
  undefined4 uStackY_78;
  undefined1 *puStackY_70;
  undefined *puStackY_6c;
  int iStackY_68;
  char *pcStackY_64;
  int in_stack_ffffffa0;
  int in_stack_ffffffa4;
  undefined *in_stack_ffffffa8;
  undefined *puVar9;
  undefined4 **ppuVar10;
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *puStack_48;
  undefined1 *puStack_38;
  undefined *puStack_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  
  local_24 = &stack0xfffffffc;
  iVar8 = 0x32;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  LOCK();
  UNLOCK();
  local_28 = (undefined4 *)&LAB_004ed0f5;
  local_2c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  local_30 = (undefined4 *)0x4ecc82;
  FUN_00403db0((int *)&local_28);
  local_30 = (undefined4 *)0x4ecc8a;
  FUN_00403db0((int *)&local_2c);
  local_30 = (undefined4 *)0x4ecc92;
  FUN_00403db0((int *)&local_30);
  local_30 = (undefined4 *)0x4ecc9f;
  piVar4 = (int *)FUN_004cf200(param_1);
  local_30 = (undefined4 *)0x4eccaa;
  piVar4 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_004ea51c);
  local_30 = (undefined4 *)0x4eccb5;
  (**(code **)(*piVar4 + 100))();
  puStack_34 = &DAT_004ed060;
  puStack_38 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_38;
  local_30 = (undefined4 *)&stack0xfffffffc;
  FUN_00459af0(-0x11);
  bVar1 = FUN_004940cc(param_2,(byte *)&local_4c);
  if (bVar1) {
    do {
      piVar5 = (int *)FUN_00494c5c(param_2,(byte *)&local_4c);
      if ((((((piVar5 != (int *)0x0) && (cVar2 = (**(code **)(*piVar5 + 0x4c))(), cVar2 != '\0')) &&
            (iVar8 = FUN_00496d84((int)piVar5), (*(byte *)(iVar8 + 0x18) & 0x40) == 0)) &&
           ((iVar8 = FUN_00496d84((int)piVar5), (*(byte *)(iVar8 + 0x18) & 8) == 0 ||
            (*(char *)((int)piVar4 + 0x25) != '\0')))) &&
          ((iVar8 = FUN_00496d84((int)piVar5), (*(byte *)(iVar8 + 0x18) & 4) == 0 ||
           ((char)piVar4[9] != '\0')))) && (cVar2 = FUN_00496c8c(piVar5), cVar2 != '\0')) {
        puStack_48 = (undefined *)0x4ecd80;
        FUN_004ecb0c((int *)&stack0xffffffe4,piVar5,piVar4,(int *)&local_50,'\0');
        FUN_00403e48((int *)&local_24,(int)local_50);
        iVar8 = FUN_00496d84((int)piVar5);
        if ((*(byte *)(iVar8 + 0x19) & 1) == 0) {
          puStack_48 = &DAT_004ed110;
          local_4c = (undefined *)0x4ecddf;
          piVar5 = (int *)FUN_00494858(param_2);
          local_4c = (undefined *)0x4ecdea;
          FUN_0049145c(piVar5,(byte *)&local_4c,(int *)&stack0xffffffa8);
          local_50 = &DAT_004ed11c;
          puStack_38 = local_24;
          puVar9 = (undefined *)0x4ece02;
          local_4c = in_stack_ffffffa8;
          FUN_004040f0((int *)&local_28,5);
          in_stack_ffffffa8 = puVar9;
        }
        else {
          puStack_48 = &DAT_004ed110;
          local_4c = (undefined *)0x4ecdaa;
          piVar5 = (int *)FUN_00494858(param_2);
          local_4c = (undefined *)0x4ecdb5;
          FUN_0049145c(piVar5,(byte *)&local_4c,(int *)&local_54);
          local_4c = local_54;
          local_50 = &DAT_004ed11c;
          puStack_38 = local_24;
          in_stack_ffffffa8 = (undefined *)0x4ecdcd;
          FUN_004040f0((int *)&local_2c,5);
        }
      }
      cVar2 = FUN_004940f4(param_2,(byte *)&local_4c);
    } while (cVar2 != '\0');
  }
  cVar2 = '\0';
  piVar5 = (int *)&stack0xffffffa4;
  puStack_48 = (undefined *)0x4ece24;
  piVar6 = (int *)FUN_004949bc(param_2);
  puStack_48 = (undefined *)0x4ece31;
  FUN_004ecb0c((int *)&stack0xffffffe4,piVar6,piVar4,piVar5,cVar2);
  FUN_00403e48((int *)&local_24,in_stack_ffffffa4);
  puStack_48 = (undefined *)0x4ece4a;
  puStack_48 = (undefined *)FUN_00494954(param_2);
  local_4c = (undefined *)0x4ece53;
  iVar8 = FUN_00494858(param_2);
  puVar9 = puStack_48;
  puStack_48 = (undefined *)0x4ece5c;
  FUN_00491818(iVar8,(int)puVar9,(int *)&stack0xffffffa0);
  local_4c = &DAT_004ed11c;
  local_50 = local_24;
  local_54 = &DAT_004ed134;
  puStack_48 = (undefined *)in_stack_ffffffa0;
  FUN_004040f0((int *)&local_30,5);
  if (((param_4 == '\0') || (param_4 == '\x01')) &&
     (bVar1 = FUN_004940cc(param_2,(byte *)&local_4c), bVar1)) {
    do {
      piVar5 = (int *)FUN_00494c5c(param_2,(byte *)&local_4c);
      if (piVar5 != (int *)0x0) {
        FUN_00494974(param_2,local_7c);
        cVar2 = FUN_0048d3ac((byte *)&local_4c,local_7c);
        if ((((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar5 + 0x4c))(), cVar2 != '\0')) &&
            (bVar3 = FUN_00495bac((int)piVar5), bVar3 != 0)) &&
           ((param_4 != '\0' || (cVar2 = FUN_00496c8c(piVar5), cVar2 != '\0')))) {
          pcStackY_64 = (char *)0x4ecf11;
          FUN_004ecb0c((int *)&stack0xffffffe4,piVar5,piVar4,&local_80,'\x01');
          FUN_00403e48((int *)&local_24,local_80);
          pcStackY_64 = " AND (";
          iStackY_68 = 0x4ecf2d;
          piVar5 = (int *)FUN_00494858(param_2);
          iStackY_68 = 0x4ecf38;
          FUN_0049145c(piVar5,(byte *)&local_4c,&local_84);
          iStackY_68 = local_84;
          puStackY_6c = &DAT_004ed11c;
          puStackY_70 = local_24;
          local_54 = &DAT_004ed134;
          uStackY_78 = 0x4ecf55;
          FUN_004040f0((int *)&local_30,6);
        }
      }
      cVar2 = FUN_004940f4(param_2,(byte *)&local_4c);
    } while (cVar2 != '\0');
  }
  if ((local_28 != (undefined4 *)0x0) || (local_2c != (undefined4 *)0x0)) {
    ppuVar10 = &local_28;
    FUN_0040407c(&local_88,local_28,local_2c);
    iVar8 = FUN_00404030(local_88);
    uVar7 = iVar8 - 2;
    if (SBORROW4(iVar8,2)) {
      uVar7 = thunk_FUN_00402874(uVar7);
    }
    FUN_0040407c(&local_8c,local_28,local_2c);
    FUN_00404238(local_8c,3,uVar7,(int *)ppuVar10);
    iVar8 = FUN_00494858(param_2);
    FUN_0040407c(&local_90,(undefined4 *)"UPDATE ",*(undefined4 **)(iVar8 + 0x3c));
    (**(code **)(*piVar4 + 0x60))(piVar4,local_90);
    FUN_0040407c(&local_94,(undefined4 *)&DAT_004ed160,local_28);
    (**(code **)(*piVar4 + 0x60))(piVar4,local_94);
    FUN_0040407c(&local_98,(undefined4 *)"WHERE ",local_30);
    (**(code **)(*piVar4 + 0x60))(piVar4,local_98);
    FUN_004d5b68(piVar4);
    (**(code **)(*piVar4 + 0x14))();
  }
  FUN_00403094(piVar4);
  FUN_00459b04();
  *in_FS_OFFSET = (int)local_54;
  *in_FS_OFFSET = (int)puStack_48;
  FUN_00403dd4(&local_9c,8);
  FUN_00403dd4((int *)&stack0xffffffa0,5);
  FUN_00403dd4((int *)&local_30,4);
  return;
}

