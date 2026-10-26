/*
 * FUN_0050806c at 0050806c
 * undefined __register FUN_0050806c(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0050806c-005081db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00508122) */
/* WARNING: Removing unreachable block (ram,0x00508183) */

void FUN_0050806c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int iVar4;
  int extraout_ECX_00;
  int iVar5;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *piVar6;
  byte bVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  byte local_9;
  int local_8;
  
  bVar7 = 0;
  local_18 = *(int **)(param_1 + 0x1f0);
  local_9 = 0;
  local_8 = param_1;
  do {
    uVar1 = *(ushort *)(local_8 + 0x26a) - 1;
    if (SBORROW4((uint)*(ushort *)(local_8 + 0x26a),1)) {
      uVar1 = thunk_FUN_00402874(uVar1);
      param_3 = extraout_ECX;
    }
    if ((byte)uVar1 == local_9) {
      FUN_0041bb48((int *)local_18[3],-0x7ffffff2,param_3);
      FUN_0041c318((int *)local_18[5],0x8000000d);
    }
    else {
      FUN_0041bb48((int *)local_18[3],-0x7fffffee,param_3);
      FUN_0041c318((int *)local_18[5],*(undefined4 *)(local_8 + 0x60));
    }
    if (local_9 < 6) {
      uVar1 = (uint)local_9 * 0x21 + 5;
      if (SCARRY4((uint)local_9 * 0x21,5)) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      local_14 = 0x1b;
      local_10 = uVar1;
    }
    else {
      uVar1 = local_9 - 6;
      if (SBORROW4((uint)local_9,6)) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      uVar2 = (uint)((longlong)(int)uVar1 * 0x21);
      if ((longlong)(int)uVar2 != (longlong)(int)uVar1 * 0x21) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      uVar1 = uVar2 + 5;
      if (SCARRY4(uVar2,5)) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      local_14 = 0x2a;
      local_10 = uVar1;
    }
    uVar1 = local_14 + 0xf;
    if (SCARRY4(local_14,0xf)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    uVar2 = uVar1 + 1;
    if (SCARRY4(uVar1,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    piVar3 = &local_28;
    iVar4 = local_10 + 0x21;
    piVar6 = piVar3;
    if (SCARRY4(local_10,0x21)) {
      piVar3 = (int *)thunk_FUN_00402874((uint)piVar3);
      iVar4 = extraout_ECX_00;
    }
    iVar5 = iVar4 + 1;
    if (SCARRY4(iVar4,1)) {
      thunk_FUN_00402874((uint)piVar3);
      iVar5 = extraout_ECX_01;
    }
    FUN_00411624(local_10,local_14,iVar5,piVar6,uVar2);
    piVar3 = &local_28;
    piVar6 = (int *)(local_8 + 0x7b8 + (uint)local_9 * 0x10);
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_0041cb34(local_18,local_28,local_24,local_1c,local_20);
    FUN_00507b68(local_8,&local_28,*(undefined **)(&DAT_00571de8 + (uint)local_9 * 4));
    local_9 = local_9 + 1;
    param_3 = extraout_ECX_02;
  } while (local_9 != 0xc);
  return;
}

