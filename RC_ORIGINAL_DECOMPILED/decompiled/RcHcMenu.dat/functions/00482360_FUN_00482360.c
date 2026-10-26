/*
 * FUN_00482360 at 00482360
 * undefined __register FUN_00482360(int param_1, char param_2)
 * Address ranges: 00482360-00482487;004824a6-0048256a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482360(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_48;
  undefined1 *puStackY_44;
  undefined1 *puStackY_40;
  undefined1 *puStackY_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_20 = &LAB_00482588;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_2c = (undefined1 *)0x48238b;
  local_8 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573958);
  puStack_2c = &LAB_0048256b;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (param_2 == '\0') {
    thunk_FUN_00479b65(*(undefined4 *)(local_8 + 0x24));
    iVar1 = *(int *)(*(int *)(local_8 + 0x28) + 8) + -1;
    if (-1 < iVar1) {
      do {
        piVar3 = (int *)FUN_00412384(*(undefined4 **)(local_8 + 0x28),iVar1);
        if (*(char *)((int)piVar3 + 0x62) == '\0') {
          FUN_00467184(piVar3);
        }
        else {
          FUN_00403094(piVar3);
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    FUN_00481c2c(local_8,'\0');
    if (*(char *)(local_8 + 0x41) == '\0') {
      puStackY_3c = (undefined1 *)0x482538;
      uVar2 = thunk_FUN_00479b59(*(undefined4 *)(local_8 + 0x24));
      puStackY_3c = (undefined1 *)0x48253d;
      FUN_0047fe48(uVar2);
      puStackY_3c = (undefined1 *)0x482542;
      iVar1 = FUN_0047f0a8();
      puStackY_3c = *(undefined1 **)(iVar1 + 0x24);
      puStackY_40 = (undefined1 *)0x48254b;
      thunk_FUN_00479b65(puStackY_3c);
    }
    else if (*(char *)(local_8 + 0x45) == '\0') {
      if (*PTR_DAT_0057201c != '\0') {
        puStackY_3c = &LAB_0047f910;
        puStackY_40 = (undefined1 *)0x0;
        puStackY_44 = (undefined1 *)0x0;
        uStackY_48 = 0x1d;
        thunk_FUN_00479a3b(PTR_DAT_0057201c);
        FUN_0047c761();
      }
      puStackY_40 = (undefined1 *)0x48252a;
      FUN_0047c6e1();
    }
    *(undefined4 *)(local_8 + 0x24) = 0;
  }
  else {
    if (*(short *)(local_8 + 0xc2) != 0) {
      (**(code **)(local_8 + 0xc0))(*(undefined4 *)(local_8 + 0xc4),local_8);
    }
    if (*(int *)(local_8 + 0x48) == 0) {
      puStackY_40 = (undefined1 *)0x4823d6;
      FUN_00406a48((undefined4 *)PTR_PTR_005725b4,(int *)&local_c);
      puStackY_40 = (undefined1 *)0x4823e1;
      FUN_00466d84(local_c,local_8);
    }
    puStackY_40 = (undefined1 *)0x4823e6;
    iVar1 = FUN_0047f0a8();
    if (iVar1 != local_8) {
      puStackY_40 = (undefined1 *)0x4823f0;
      iVar1 = FUN_0047f0a8();
      puStackY_40 = (undefined1 *)0x4823f7;
      FUN_00481e4c(iVar1,'\x01');
    }
    if (*(char *)(local_8 + 0x41) == '\0') {
      puStackY_40 = (undefined1 *)0x0;
      puStackY_44 = (undefined1 *)(local_8 + 0x24);
      puStackY_3c = (undefined1 *)0x0;
      uVar2 = thunk_FUN_00479b70(puStackY_44);
      FUN_0047fe48(uVar2);
    }
    else {
      puStackY_40 = (undefined1 *)0x482408;
      FUN_00481390(local_8);
    }
    puStackY_44 = &LAB_00482488;
    uStackY_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_48;
    puStackY_40 = &stack0xfffffffc;
    FUN_00481c2c(local_8,'\x01');
    if (*(int *)(local_8 + 0x50) != 0) {
      FUN_00482060(local_8,*(LPCSTR *)(local_8 + 0x50));
    }
    if (*(int *)(local_8 + 0x54) != 0) {
      FUN_004820f0(local_8,*(LPCSTR *)(local_8 + 0x54));
    }
    FUN_00481fe4(local_8,7);
    FUN_004806d0(local_8);
    *in_FS_OFFSET = uStackY_48;
  }
  *in_FS_OFFSET = puStackY_3c;
  puStackY_3c = (undefined1 *)0x48256a;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573958);
  return;
}

