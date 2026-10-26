/*
 * FUN_0048d930 at 0048d930
 * undefined __register FUN_0048d930(uint * param_1)
 * Address ranges: 0048d930-0048d9e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048d930(uint *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  bool bVar7;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  puStack_1c = (undefined1 *)0x48d941;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_20 = &LAB_0048d9e8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = (uint *)0x0;
  iVar1 = 0;
  local_10 = 0;
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  puStack_1c = &stack0xfffffffc;
  do {
    piVar2 = (int *)FUN_00497394(iVar1,uVar5,uVar4);
    local_18 = FUN_00497868(piVar2,local_10);
    uVar6 = true;
    local_14 = (uint *)0x0;
    do {
      iVar1 = FUN_00490590(local_18,local_14);
      puVar3 = FUN_00404140(*(uint **)(iVar1 + 0x30),local_8);
      uVar4 = extraout_ECX_00;
      uVar5 = extraout_EDX_00;
      if ((bool)uVar6) {
        puVar3 = (uint *)FUN_00490590(local_18,local_14);
        uVar4 = extraout_ECX_01;
        uVar5 = extraout_EDX_01;
        local_c = puVar3;
      }
      bVar7 = SCARRY4((int)local_14,1);
      local_14 = (uint *)((int)local_14 + 1);
      if (bVar7) {
        puVar3 = (uint *)thunk_FUN_00402874((uint)puVar3);
        uVar4 = extraout_ECX_02;
        uVar5 = extraout_EDX_02;
      }
      if (local_c != (uint *)0x0) break;
      puVar3 = (uint *)FUN_004905c0(local_18);
      uVar6 = puVar3 == local_14;
      uVar4 = extraout_ECX_03;
      uVar5 = extraout_EDX_03;
    } while (!(bool)uVar6 && (int)local_14 <= (int)puVar3);
    bVar7 = SCARRY4(local_10,1);
    local_10 = local_10 + 1;
    if (bVar7) {
      puVar3 = (uint *)thunk_FUN_00402874((uint)puVar3);
      uVar4 = extraout_ECX_04;
      uVar5 = extraout_EDX_04;
    }
    if (local_c != (uint *)0x0) break;
    iVar1 = FUN_00497394(puVar3,uVar5,uVar4);
    iVar1 = FUN_00497724(iVar1);
    uVar4 = extraout_ECX_05;
    uVar5 = extraout_EDX_05;
  } while (local_10 < iVar1);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0048d9ef;
  puStack_20 = (undefined1 *)0x48d9e7;
  FUN_00403db0((int *)&local_8);
  return;
}

