/*
 * FUN_00477d60 at 00477d60
 * undefined __register FUN_00477d60(int param_1)
 * Address ranges: 00477d60-0047811f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00477d60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBX;
  byte *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  byte *local_90;
  int local_8c;
  byte *local_88;
  int local_84;
  VARIANTARG local_80;
  VARIANTARG local_70;
  VARIANTARG local_60;
  VARIANTARG local_50;
  VARIANTARG local_40;
  byte *pbVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_10;
  undefined1 local_c;
  char *local_8;
  
  local_10 = 0x11;
  do {
    local_8 = (char *)0x0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  *in_FS_OFFSET = &stack0xffffffdc;
  cVar1 = *(char *)(param_1 + 0x44);
  if (cVar1 == '\x01') {
    if ((((*(byte *)(param_1 + 0x54) & 1) == 0) ||
        (uVar7 = FUN_00477048(param_1), (char)uVar7 == '\0')) ||
       (uVar7 = FUN_00478668(param_1,*(char **)(param_1 + 0x38)), (char)uVar7 == '\0')) {
      uVar7 = FUN_00478644(param_1,"NULL");
      if ((char)uVar7 == '\0') {
        uVar7 = FUN_00478644(param_1,*(char **)(param_1 + 0x3c));
        if ((char)uVar7 == '\0') {
          uVar7 = FUN_00478644(param_1,*(char **)(param_1 + 0x40));
          if ((char)uVar7 == '\0') {
            FUN_004054ac(&local_60,*(undefined4 **)(param_1 + 0x38));
            uVar7 = &local_60;
            local_40.n1._12_4_ = 0x477fbf;
            iVar4 = FUN_00475d68(*(int *)(param_1 + 4),'\0',0,0,0,(VARIANTARG *)uVar7);
            *(undefined1 *)(iVar4 + 0x2c) = 0;
          }
          else {
            FUN_004053dc(&local_50,0);
            uVar7 = &local_50;
            local_40.n1._12_4_ = 0x477f95;
            iVar4 = FUN_00475d68(*(int *)(param_1 + 4),'\x01',0,0,0,(VARIANTARG *)uVar7);
            *(undefined1 *)(iVar4 + 0x2c) = 2;
          }
        }
        else {
          FUN_004053dc(&local_40,1);
          uVar7 = &local_40;
          local_40.n1._12_4_ = 0x477f5e;
          iVar4 = FUN_00475d68(*(int *)(param_1 + 4),'\x01',0,0,0,(VARIANTARG *)uVar7);
          *(undefined1 *)(iVar4 + 0x2c) = 2;
        }
      }
      else {
        local_40.n1._12_4_ = 0x477f24;
        uVar7 = PTR_DAT_00572068;
        iVar4 = FUN_00475d68(*(int *)(param_1 + 4),'\x01',0,0,0,(VARIANTARG *)PTR_DAT_00572068);
        *(undefined1 *)(iVar4 + 0x2c) = 2;
      }
    }
    else {
      FUN_00403e48((int *)&local_8,*(int *)(param_1 + 0x38));
      FUN_004770d8(param_1);
      if (*(char *)(param_1 + 0x44) != '\x04') {
        uVar7 = 0;
        FUN_004785f0(param_1,(int *)&stack0xffffffec);
        local_c = 0xb;
        piVar6 = &local_10;
        local_10 = unaff_EBX;
        FUN_00406a48((undefined4 *)PTR_PTR_00572338,(int *)&stack0xffffffe8);
        FUN_00466e30(unaff_ESI,piVar6,0,uVar7);
      }
      FUN_004770d8(param_1);
      iVar4 = FUN_00409758(local_8,"count");
      if ((iVar4 == 0) && (*(char *)(param_1 + 0x44) == '\x0e')) {
        FUN_00403e48((int *)&local_8,0x478148);
        FUN_004770d8(param_1);
      }
      FUN_004054ac((VARIANTARG *)&stack0xffffffd8,(undefined4 *)local_8);
      uVar7 = (VARIANTARG *)0x0;
      iVar4 = FUN_00475d68(*(int *)(param_1 + 4),'\x03',0,0,0,(VARIANTARG *)&stack0xffffffd8);
      if (*(char *)(param_1 + 0x44) == '\x05') {
        *(undefined4 *)(iVar4 + 0x28) = 0;
      }
      else {
        uVar2 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
        *(undefined4 *)(iVar4 + 0x28) = uVar2;
        do {
          iVar3 = FUN_00477710(param_1);
          FUN_004121d8(*(int **)(iVar4 + 0x28),iVar3);
          if ((*(char *)(param_1 + 0x44) != '\x10') && (*(char *)(param_1 + 0x44) != '\x05')) {
            iVar3 = 0;
            FUN_004785f0(param_1,(int *)&stack0xffffffd4);
            local_c = 0xb;
            pbVar5 = (byte *)&local_10;
            local_40.n1._12_4_ = 0x477ec6;
            local_10 = iVar3;
            FUN_00406a48((undefined4 *)PTR_PTR_00572584,(int *)&stack0xffffffd0);
            FUN_00466e30(pbVar5,pbVar5,0,iVar3);
          }
          if (*(char *)(param_1 + 0x44) == '\x10') {
            FUN_004770d8(param_1);
          }
        } while ((*(char *)(param_1 + 0x44) != '\x05') && (*(char *)(param_1 + 0x44) != '\0'));
      }
      FUN_00478220(param_1,iVar4);
    }
  }
  else if (cVar1 == '\x02') {
    FUN_004054ac(&local_70,*(undefined4 **)(param_1 + 0x38));
    uVar7 = &local_70;
    local_40.n1._12_4_ = 0x477fe9;
    iVar4 = FUN_00475d68(*(int *)(param_1 + 4),'\0',0,0,0,(VARIANTARG *)uVar7);
    *(undefined1 *)(iVar4 + 0x2c) = 0;
  }
  else if (cVar1 == '\x03') {
    FUN_004054ac(&local_80,*(undefined4 **)(param_1 + 0x38));
    uVar7 = &local_80;
    local_40.n1._12_4_ = 0x478013;
    iVar4 = FUN_00475d68(*(int *)(param_1 + 4),'\x01',0,0,0,(VARIANTARG *)uVar7);
    if (*(char *)(param_1 + 0x4c) == '\0') {
      *(undefined1 *)(iVar4 + 0x20) = 1;
    }
    else {
      *(undefined1 *)(iVar4 + 0x20) = 6;
    }
    *(undefined1 *)(iVar4 + 0x2c) = 2;
  }
  else if (cVar1 == '\x04') {
    FUN_004770d8(param_1);
    uVar7 = (VARIANTARG *)0x47803c;
    FUN_00477710(param_1);
    if (*(char *)(param_1 + 0x44) != '\x05') {
      uVar7 = (VARIANTARG *)0x0;
      FUN_004785f0(param_1,&local_84);
      local_10 = local_84;
      local_c = 0xb;
      piVar6 = &local_10;
      FUN_00406a48((undefined4 *)PTR_PTR_005721c8,(int *)&local_88);
      FUN_00466e30(local_88,piVar6,0,uVar7);
    }
  }
  else {
    uVar7 = (VARIANTARG *)0x0;
    FUN_004785f0(param_1,&local_8c);
    local_10 = local_8c;
    local_c = 0xb;
    piVar6 = &local_10;
    FUN_00406a48((undefined4 *)PTR_PTR_005722e4,(int *)&local_90);
    FUN_00466e30(local_90,piVar6,0,uVar7);
  }
  FUN_004770d8(param_1);
  *in_FS_OFFSET = uVar7;
  FUN_00403dd4((int *)&local_90,4);
  FUN_00404878(&local_80,&DAT_00401108,5);
  FUN_00403dd4((int *)&stack0xffffffd0,2);
  FUN_00405bcc((VARIANTARG *)&stack0xffffffd8);
  FUN_00403dd4((int *)&stack0xffffffe8,2);
  FUN_00403db0((int *)&local_8);
  return;
}

