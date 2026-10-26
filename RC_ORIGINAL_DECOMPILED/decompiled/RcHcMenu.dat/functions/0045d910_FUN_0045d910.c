/*
 * FUN_0045d910 at 0045d910
 * undefined __register FUN_0045d910(uint param_1, int param_2)
 * Address ranges: 0045d910-0045da13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045d910(uint param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int iVar4;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar5;
  int extraout_EDX;
  uint extraout_EDX_00;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 8) < param_2) {
    if (param_2 % *(int *)(param_1 + 0xc) == 0) {
      lVar1 = (longlong)(param_2 / *(int *)(param_1 + 0xc)) * (longlong)*(int *)(param_1 + 0xc);
      local_c = (uint)lVar1;
      if ((int)local_c != lVar1) {
        local_c = thunk_FUN_00402874(local_c);
      }
    }
    else {
      lVar1 = (longlong)(param_2 / *(int *)(param_1 + 0xc)) * (longlong)*(int *)(param_1 + 0xc);
      uVar2 = (uint)lVar1;
      if ((int)uVar2 != lVar1) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_c = uVar2 + *(int *)(param_1 + 0xc);
      if (SCARRY4(uVar2,*(int *)(param_1 + 0xc))) {
        local_c = thunk_FUN_00402874(local_c);
      }
    }
    if (*(int *)(param_1 + 8) == 0) {
      lVar1 = (longlong)(int)local_c * (longlong)*(int *)(param_1 + 0x14);
      uVar2 = (uint)lVar1;
      if ((int)uVar2 != lVar1) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if ((int)uVar2 < 0) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      puVar3 = FUN_0040960c(uVar2);
      *(undefined4 **)(param_1 + 0x10) = puVar3;
    }
    else {
      lVar1 = (longlong)(int)local_c * (longlong)*(int *)(param_1 + 0x14);
      iVar5 = (int)lVar1;
      if (iVar5 != lVar1) {
        thunk_FUN_00402874(param_1);
        iVar5 = extraout_EDX;
      }
      FUN_00402818((int *)(param_1 + 0x10),iVar5);
      lVar1 = (longlong)(int)local_c * (longlong)*(int *)(param_1 + 0x14);
      iVar5 = (int)lVar1;
      uVar2 = param_1;
      if (iVar5 != lVar1) {
        uVar2 = thunk_FUN_00402874(param_1);
        iVar5 = extraout_ECX;
      }
      iVar4 = iVar5 + -1;
      if (SBORROW4(iVar5,1)) {
        thunk_FUN_00402874(uVar2);
        iVar4 = extraout_ECX_00;
      }
      lVar1 = (longlong)*(int *)(param_1 + 8) * (longlong)*(int *)(param_1 + 0x14);
      uVar2 = (uint)lVar1;
      if ((int)uVar2 != lVar1) {
        thunk_FUN_00402874(param_1);
        iVar4 = extraout_ECX_01;
        uVar2 = extraout_EDX_00;
      }
      FUN_0045a9c0(*(int *)(param_1 + 0x10),uVar2,iVar4);
    }
    *(uint *)(param_1 + 8) = local_c;
  }
  return;
}

