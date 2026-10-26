/*
 * FUN_0055a384 at 0055a384
 * undefined __register FUN_0055a384(int * param_1, undefined1 param_2)
 * Address ranges: 0055a384-0055a5ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055a384(int *param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  uint uVar2;
  uint extraout_EDX;
  int iVar3;
  int iVar4;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_18 = &LAB_0055a5bb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined1 *)(param_1 + 0xd4) = param_2;
  local_9 = param_2;
  local_8 = param_1;
  if (((char)param_1[0xd4] == '\x01') || ((char)param_1[0xd4] == '\x02')) {
    param_1[0xd7] = *(int *)(param_1[0xd5] + 0x174);
    puStack_14 = &stack0xfffffffc;
    FUN_00432714(param_1[0xd5],(int *)&local_10);
    FUN_00403e04(local_8 + 0xd8,local_10);
    FUN_00432744(local_8[0xd5],(uint *)0x0);
    (**(code **)(*(int *)local_8[0xd5] + 0x5c))((int *)local_8[0xd5],0);
    FUN_004aeaf0((int *)local_8[0xd5],*(int *)(*(int *)PTR_DAT_00572108 + 0xc0));
    FUN_0043262c((int *)local_8[0xcb],0,extraout_ECX);
    (**(code **)(*(int *)local_8[0xcb] + 0x5c))((int *)local_8[0xcb],0);
    piVar1 = (int *)(local_8[0xcb] + 0x38);
    uVar2 = *(int *)(local_8[0xd5] + 0x38) - *piVar1;
    if (SBORROW4(*(int *)(local_8[0xd5] + 0x38),*piVar1)) {
      thunk_FUN_00402874(local_8[0xcb]);
      uVar2 = extraout_EDX;
    }
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    piVar1 = (int *)(local_8[0xd5] + 0x30);
    iVar4 = iVar3 + *piVar1;
    if (SCARRY4(iVar3,*piVar1)) {
      thunk_FUN_00402874(local_8[0xd5]);
      iVar4 = extraout_EDX_00;
    }
    FUN_00431f34((int *)local_8[0xcb],iVar4);
    piVar1 = (int *)(local_8[0xcb] + 0x3c);
    uVar2 = *(int *)(local_8[0xd5] + 0x3c) - *piVar1;
    if (SBORROW4(*(int *)(local_8[0xd5] + 0x3c),*piVar1)) {
      thunk_FUN_00402874(local_8[0xcb]);
      uVar2 = extraout_EDX_01;
    }
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    piVar1 = (int *)(local_8[0xd5] + 0x34);
    iVar4 = iVar3 + *piVar1;
    if (SCARRY4(iVar3,*piVar1)) {
      thunk_FUN_00402874(local_8[0xd5]);
      iVar4 = extraout_EDX_02;
    }
    FUN_00431f54((int *)local_8[0xcb],iVar4);
    FUN_00432744(local_8[0xcb],(uint *)0x0);
    FUN_00432958((int *)local_8[0xcb],extraout_EDX_03,extraout_ECX_00);
    FUN_0043262c((int *)local_8[0xcb],CONCAT31((int3)((uint)extraout_EDX_04 >> 8),1),extraout_ECX_01
                );
    (**(code **)(*(int *)local_8[0xcb] + 0x5c))((int *)local_8[0xcb],1);
    FUN_0044c24c(local_8,(int *)local_8[0xcb],extraout_ECX_02);
  }
  else if ((char)param_1[0xd4] == '\0') {
    (**(code **)(*(int *)param_1[0xd5] + 0x5c))((int *)param_1[0xd5],1);
    local_8[0xd5] = 0;
    FUN_0043262c((int *)local_8[0xcb],0,extraout_ECX_03);
    (**(code **)(*(int *)local_8[0xcb] + 0x5c))((int *)local_8[0xcb],0);
    FUN_00432744(local_8[0xcb],(uint *)0x0);
    FUN_0055a280((int)local_8);
    FUN_0055a1a8((int)local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0055a5c2;
  puStack_18 = (undefined1 *)0x55a5ba;
  FUN_00403db0((int *)&local_10);
  return;
}

