/*
 * FUN_004819d8 at 004819d8
 * undefined __register FUN_004819d8(int param_1, char param_2)
 * Address ranges: 004819d8-00481bc1;00481bd3-00481bf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004819d8(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  short sVar3;
  HANDLE hObject;
  int iVar4;
  LPVOID *ppv;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined *local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined *local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  puStack_40 = &stack0xfffffffc;
  local_14 = 0;
  local_c = (undefined *)0x0;
  puStack_38 = &LAB_00481bf1;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_44 = &LAB_00481bc2;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x34) == 0) {
    uStack_54 = 0;
    uStack_60 = 0;
    sVar3 = thunk_FUN_004798e2(local_10);
    puVar1 = puStack_40;
    puVar2 = puStack_34;
    if ((sVar3 != 0) && (*(char *)(local_8 + 0x3e) == '\0')) {
      if (param_2 == '\0') {
        hObject = OpenFileMappingA(4,0,"SMBuffer");
        if (hObject == (HANDLE)0x0) {
          *in_FS_OFFSET = 0;
          goto LAB_00481bd3;
        }
        CloseHandle(hObject);
      }
      if (*(int *)(local_8 + 0x34) == 0) {
        iVar4 = FUN_0047f0a8();
        if (*(int *)(iVar4 + 0x34) == 0) {
          iVar4 = FUN_0047f0a8();
          ppv = (LPVOID *)FUN_00406aa0((int *)(iVar4 + 0x34));
          CoCreateInstance((IID *)PTR_DAT_00572494,(LPUNKNOWN)0x0,1,(IID *)&DAT_00481c0c,ppv);
        }
        if (*(char *)(local_8 + 0x41) == '\0') {
          iVar4 = FUN_0047f0a8();
          FUN_00406ab8((int *)(local_8 + 0x34),*(int **)(iVar4 + 0x34));
        }
      }
      if (*(int *)(local_8 + 0x34) != 0) {
        FUN_00450eb0(*(int *)PTR_DAT_005723fc,(int *)&local_c);
        if (local_c == (undefined *)0x0) {
          FUN_00406a48((undefined4 *)PTR_PTR_005722fc,(int *)&local_c);
        }
        if (*(char *)(local_8 + 0x41) == '\0') {
          local_24 = local_c;
          local_20 = 0xb;
          local_1c = *(undefined4 *)(local_8 + 0x48);
          local_18 = 0xb;
          FUN_0040a894((byte *)"%s.%s",&local_24,1,&local_14);
          FUN_00403e48((int *)&local_c,local_14);
        }
        FUN_004041f4(local_c);
        sVar3 = (**(code **)(**(int **)(local_8 + 0x34) + 0xc))();
        if (sVar3 == 0) {
          FUN_00406aa0((int *)(local_8 + 0x34));
        }
        else {
          uVar5 = FUN_004027e8(0x8006);
          *(undefined4 *)(local_8 + 0x38) = uVar5;
          piVar6 = FUN_0047f92c((int *)&DAT_0047d3d0,'\x01',local_8,'\0',0x482300,local_8,0x8006,
                                uVar5,0x1b,0);
          FUN_004121d8(*(int **)(local_8 + 0x2c),(int)piVar6);
        }
        *(bool *)(local_8 + 0x3e) = *(int *)(local_8 + 0x34) == 0;
      }
      *in_FS_OFFSET = 0;
      goto LAB_00481bd3;
    }
  }
  puStack_34 = puVar2;
  puStack_40 = puVar1;
  *in_FS_OFFSET = uStack_60;
LAB_00481bd3:
  *in_FS_OFFSET = uStack_54;
  FUN_00403db0(&local_14);
  FUN_00403db0((int *)&local_c);
  return;
}

