/*
 * FUN_004c89b8 at 004c89b8
 * undefined __register FUN_004c89b8(int * param_1, byte param_2)
 * Address ranges: 004c89b8-004c8aae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c89b8(int *param_1,byte param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  uVar3 = 0;
  local_10 = 0;
  puStack_18 = &LAB_004c8aaf;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_9 = param_2;
  local_8 = param_1;
  if (param_2 == *(byte *)(param_1 + 0x4f)) goto LAB_004c8a99;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0) {
    puVar1 = &stack0xfffffffc;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
LAB_004c8a0d:
      puStack_14 = puVar1;
      if ((*(byte *)(local_8 + 8) & 1) == 0) goto LAB_004c8a16;
    }
    else {
      FUN_00432714((int)param_1,&local_10);
      uVar3 = extraout_ECX;
      param_1 = extraout_EDX;
      puVar1 = puStack_14;
      if (local_10 != 0) goto LAB_004c8a0d;
LAB_004c8a16:
      FUN_00432744((int)local_8,(uint *)0x0);
      uVar3 = extraout_ECX_00;
      param_1 = extraout_EDX_00;
      if ((*(int *)(&DAT_00571b64 + (uint)local_9 * 4) != 0) && (local_8[0x1c] == 0)) {
        FUN_00406a48(*(undefined4 **)(&DAT_00571b64 + (uint)local_9 * 4),local_8 + 0x1c);
        FUN_00432858((int)local_8,'\x01');
        uVar3 = extraout_ECX_01;
        param_1 = extraout_EDX_01;
      }
    }
    piVar2 = (int *)FUN_004c69dc(local_9,param_1,uVar3);
    FUN_004c70b4(local_8[0x4d],piVar2);
    FUN_004c88fc(local_8,2);
    *(undefined1 *)(local_8 + 0x51) = 0;
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  *(byte *)(local_8 + 0x4f) = local_9;
  (**(code **)(*local_8 + 0x74))();
LAB_004c8a99:
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004c8ab6;
  puStack_18 = (undefined1 *)0x4c8aae;
  FUN_00403db0(&local_10);
  return;
}

