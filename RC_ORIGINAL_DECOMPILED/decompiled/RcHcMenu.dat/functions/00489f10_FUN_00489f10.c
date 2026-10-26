/*
 * FUN_00489f10 at 00489f10
 * undefined __register FUN_00489f10(int * param_1, byte * param_2)
 * Address ranges: 00489f10-0048a032;0048a08e-0048a0bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4897ec slot 28 for TStringProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4897ec slot 28 for
   TStringProp. Original bytes unchanged; names and types still inferred. */

void FUN_00489f10(int *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  undefined1 local_15;
  int local_14;
  char local_d;
  byte *local_c;
  int *local_8;
  
  local_1c = 0;
  local_14 = 0;
  puStack_2c = (undefined1 *)0x489f2f;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_30 = &LAB_0048a0bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x489f45;
  puStack_2c = &stack0xfffffffc;
  iVar2 = FUN_00404030((int)local_c);
  if (iVar2 == 0) {
    puStack_38 = (undefined1 *)0x489f51;
    iVar2 = FUN_0048a430((int)local_8);
    if ((*(byte *)(iVar2 + 0x18) & 0x80) != 0) {
      puStack_38 = (undefined1 *)0x489f5f;
      cVar1 = (**(code **)(*local_8 + 0x4c))();
      if (cVar1 == '\0') {
LAB_00489f73:
        local_d = '\x01';
      }
      else {
        puStack_38 = (undefined1 *)0x489f6b;
        cVar1 = (**(code **)(*local_8 + 0x50))();
        if (cVar1 == '\0') goto LAB_00489f73;
        local_d = '\0';
      }
      puStack_38 = (undefined1 *)0x489f80;
      (**(code **)(*local_8 + 0x60))();
      goto LAB_0048a096;
    }
  }
  puStack_38 = (undefined1 *)0x489f8d;
  iVar2 = FUN_0048a430((int)local_8);
  if ((*(byte *)(iVar2 + 0x19) & 4) != 0) {
    puStack_38 = (undefined1 *)0x489f9e;
    FUN_00409690(local_c,&local_1c);
    puStack_38 = (undefined1 *)0x489fa9;
    FUN_00403e48((int *)&local_c,local_1c);
  }
  puStack_38 = (undefined1 *)0x489fb1;
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
LAB_00489fd7:
    local_d = '\x01';
  }
  else {
    puStack_38 = (undefined1 *)0x489fbd;
    cVar1 = (**(code **)(*local_8 + 0x50))();
    if (cVar1 != '\0') goto LAB_00489fd7;
    puStack_38 = (undefined1 *)0x489fcf;
    iVar2 = FUN_00409838((undefined *)local_8[0xe],local_c);
    if (iVar2 != 0) goto LAB_00489fd7;
    local_d = '\0';
  }
  if (local_d != '\0') {
    local_15 = (undefined1)local_8[0xc];
    puStack_38 = (undefined1 *)0x489ffd;
    FUN_00403e48(&local_14,local_8[0xe]);
    puStack_38 = (undefined1 *)0x48a00b;
    FUN_00403e04(local_8 + 0xe,(undefined4 *)local_c);
    puStack_38 = (undefined1 *)0x48a013;
    FUN_004969e4((int)local_8);
    puStack_3c = &LAB_0048a033;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    puStack_38 = &stack0xfffffffc;
    FUN_0045fa7c(local_8);
    *in_FS_OFFSET = uStack_40;
    puStack_38 = (undefined1 *)0x48a096;
    FUN_0045f9d8(local_8);
  }
LAB_0048a096:
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0048a0c3;
  puStack_30 = (undefined1 *)0x48a0ab;
  FUN_00403db0(&local_1c);
  puStack_30 = (undefined1 *)0x48a0b3;
  FUN_00403db0(&local_14);
  puStack_30 = (undefined1 *)0x48a0bb;
  FUN_00403db0((int *)&local_c);
  return;
}

