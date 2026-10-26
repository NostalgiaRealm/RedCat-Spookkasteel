/*
 * FUN_00483698 at 00483698
 * undefined __register FUN_00483698(int * param_1)
 * Address ranges: 00483698-004838d8;0048390d-00483928;00483950-0048397a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483698(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int *in_FS_OFFSET;
  int iStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  int iStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  int local_60;
  int local_5c [2];
  char local_54 [40];
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_18;
  undefined1 local_11;
  undefined *local_10;
  int local_c;
  int *local_8;
  
  puStack_70 = &stack0xfffffffc;
  local_60 = 0;
  local_5c[0] = 0;
  local_c = 0;
  local_10 = (undefined *)0x0;
  puStack_74 = &LAB_0048397b;
  iStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_78;
  local_8 = param_1;
  if (param_1[0x1c] == 0) {
    puStack_7c = (undefined1 *)0x4836d5;
    FUN_00482cb8((int)param_1);
    puStack_7c = (undefined1 *)0x4836df;
    FUN_00482d18(local_8,'\x01');
    if (*(char *)((int)local_8 + 0x69) != '\0') {
      puStack_7c = (undefined1 *)0x4836f0;
      bVar3 = FUN_00483670(local_8);
      if (bVar3) goto LAB_00483950;
    }
    puStack_7c = (undefined1 *)0x483703;
    FUN_00481830(local_8[0x1e]);
    puStack_80 = &LAB_00483949;
    iStack_84 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_84;
    puStack_88 = (undefined1 *)0x48371c;
    puStack_7c = &stack0xfffffffc;
    local_11 = FUN_00481f8c(local_8[0x1e]);
    puStack_8c = &LAB_00483929;
    iStack_90 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_90;
    puStack_94 = (undefined1 *)0x483738;
    puStack_88 = &stack0xfffffffc;
    FUN_00483324((int)local_8,(int *)&local_10);
    puStack_98 = &LAB_004838d9;
    iStack_9c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_9c;
    puStack_94 = &stack0xfffffffc;
    if ((local_8[0x23] == 0) &&
       (puStack_94 = &stack0xfffffffc, uVar4 = FUN_0047fc20(local_8[0x22]), (char)uVar4 != '\0')) {
      FUN_00403db0(&local_c);
    }
    else {
      FUN_0047faa8((undefined *)local_8[0x22],&local_c);
    }
    FUN_00483000(local_8,local_5c);
    if (local_5c[0] == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
      local_2a = 4;
      local_2c = 0;
      FUN_0040a170(local_54,"MTS CONTEXT OBJECT");
    }
    FUN_0047faa8(local_10,&local_60);
    iVar2 = local_c;
    iVar1 = *(int *)(&DAT_00571544 + (uint)*(byte *)((int)local_8 + 0x6a) * 4);
    uVar5 = thunk_FUN_00479cd0(local_c);
    FUN_0047fe48(uVar5);
    if (local_c == 0) {
      FUN_00483a3c((int)local_8,(undefined *)local_8[0x22]);
    }
    FUN_0047fc9c(local_8[0x1c],0x40005,0xffffffff);
    FUN_0047fc9c(local_8[0x1c],0x40004,0xffffffff);
    FUN_0047fc9c(local_8[0x1c],0x4040011,0xffffffff);
    FUN_00482f8c((int)local_8);
    FUN_004830a8((int)local_8);
    if (*(char *)((int)local_8 + 0x66) != '\0') {
      FUN_004819d8(local_8[0x1e],(*(byte *)(local_8 + 8) & 0x10) != 0);
    }
    FUN_00483bf8(local_8);
    FUN_00480a24(local_8[0x1e]);
    *in_FS_OFFSET = iVar2;
    *in_FS_OFFSET = iVar1;
    FUN_00481fe4(local_8[0x1e],local_11);
    return;
  }
LAB_00483950:
  *in_FS_OFFSET = iStack_78;
  puStack_70 = &LAB_00483982;
  puStack_74 = (undefined1 *)0x483965;
  FUN_00403db0(&local_60);
  puStack_74 = (undefined1 *)0x48396d;
  FUN_00406aa0(local_5c);
  puStack_74 = (undefined1 *)0x48397a;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

