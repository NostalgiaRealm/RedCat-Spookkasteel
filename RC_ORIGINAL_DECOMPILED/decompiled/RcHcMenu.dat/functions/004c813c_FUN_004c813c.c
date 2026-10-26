/*
 * FUN_004c813c at 004c813c
 * undefined __register FUN_004c813c(int * param_1)
 * Address ranges: 004c813c-004c8418
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c813c(int *param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined *local_4c;
  tagRECT local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  RECT local_24;
  byte local_11;
  int local_10 [2];
  int *local_8;
  
  puStack_50 = &stack0xfffffffc;
  local_4c = (undefined *)0x0;
  puStack_54 = &LAB_004c8419;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  local_38 = *(undefined4 *)(param_1[0x4b] + 8);
  local_34 = *(undefined4 *)(param_1[0x4b] + 0x10);
  local_30 = *(undefined4 *)(param_1[0x4b] + 0xc);
  local_2c = *(undefined4 *)(param_1[0x4b] + 0x14);
  local_28 = *(undefined4 *)(param_1[0x4b] + 0x18);
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    *(undefined1 *)((int)local_8 + 0x161) = 1;
    *(undefined1 *)((int)local_8 + 0x132) = 0;
  }
  else if (*(char *)((int)local_8 + 0x161) == '\x01') {
    if ((*(char *)((int)local_8 + 0x131) == '\0') || (local_8[0x4e] == 0)) {
      *(undefined1 *)((int)local_8 + 0x161) = 0;
    }
    else {
      *(undefined1 *)((int)local_8 + 0x161) = 3;
    }
  }
  FUN_0041ce68(local_8[0x48]);
  FUN_00411624(0,0,local_8[0xe],&local_24.left,local_8[0xf]);
  if (*(char *)((int)local_8 + 0x133) == '\0') {
    if ((byte)(*(char *)((int)local_8 + 0x161) - 2U) < 2) {
      local_11 = 0;
    }
    else {
      local_11 = 4;
    }
    FUN_004ab470((int *)local_8[0x48],&local_24.left,(int)&local_38,local_11);
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
  }
  else {
    if (((byte)(*(char *)((int)local_8 + 0x161) - 2U) < 2) ||
       (((*(char *)((int)local_8 + 0x145) != '\0' && (*(char *)((int)local_8 + 0x161) != '\x01')) ||
        ((*(byte *)(local_8 + 8) & 0x10) != 0)))) {
      if ((byte)(*(char *)((int)local_8 + 0x161) - 2U) < 2) {
        local_11 = 6;
      }
      else {
        local_11 = 5;
      }
      FUN_004ab470((int *)local_8[0x48],&local_24.left,(int)&local_38,local_11);
    }
    else if ((char)local_8[0x53] == '\0') {
      FUN_0041c318(*(int **)(local_8[0x48] + 0x14),*(undefined4 *)(local_8[0x4b] + 8));
      FUN_0041c9f8((int *)local_8[0x48],&local_24);
    }
    InflateRect(&local_24,-1,-1);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  if ((byte)(*(char *)((int)local_8 + 0x161) - 2U) < 2) {
    if ((*(char *)((int)local_8 + 0x161) == '\x03') &&
       ((*(char *)((int)local_8 + 0x133) == '\0' || (*(char *)((int)local_8 + 0x145) == '\0')))) {
      if (DAT_00571cd0 == 0) {
        FUN_004c8004(local_8,uVar3,uVar2,(int)&stack0xfffffffc);
      }
      FUN_0041c2ec(*(int **)(local_8[0x48] + 0x14),DAT_00571cd0);
      FUN_0041c9f8((int *)local_8[0x48],&local_24);
    }
    local_10[0] = 1;
    local_10[1] = 1;
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
  }
  piVar4 = local_10;
  FUN_00432714((int)local_8,(int *)&local_4c);
  FUN_004c7dec(local_8[0x4d],(int *)local_8[0x48],&local_24.left,&local_48,(char)local_8[0x58],
               '\x01',*(byte *)((int)local_8 + 0x161),local_8[0x52],local_8[0x50],
               *(byte *)((int)local_8 + 0x13d),local_4c,piVar4);
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_004c8420;
  puStack_54 = (undefined1 *)0x4c8418;
  FUN_00403db0((int *)&local_4c);
  return;
}

