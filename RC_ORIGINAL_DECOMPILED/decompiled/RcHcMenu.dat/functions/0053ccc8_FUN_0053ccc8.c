/*
 * FUN_0053ccc8 at 0053ccc8
 * undefined __register FUN_0053ccc8(int param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 0053ccc8-0053cddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053ccc8(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  
  if (0 < param_3) {
    uVar2 = param_2 - param_1;
    if (SBORROW4(param_2,param_1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    uVar2 = iVar3 + param_1;
    if (SCARRY4(iVar3,param_1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar4 = (**(code **)(**(int **)(param_4 - 4) + 4))();
    iVar3 = uVar2 - uVar4;
    if (SBORROW4(uVar2,uVar4)) {
      thunk_FUN_00402874(uVar4);
      iVar3 = extraout_EDX;
    }
    cVar1 = FUN_0054823c(*(int **)(param_4 - 4),iVar3);
    if (cVar1 == '\0') {
      FUN_00403d94("Assertion failure");
    }
    FUN_004d6cb4(*(int **)(*(int *)(param_4 - 4) + 0x88),*(undefined4 *)(param_4 - 8));
    iVar3 = FUN_00494814(*(int **)(param_4 - 0xc),*(int **)(param_4 - 8),
                         *(uint *)(*(int *)(param_4 - 4) + 0x3c),8);
    if (iVar3 < 1) {
      iVar3 = FUN_00494814(*(int **)(param_4 - 0xc),*(int **)(param_4 - 8),
                           *(uint *)(*(int *)(param_4 - 4) + 0x3c),8);
      if (iVar3 < 0) {
        iVar3 = param_3 + -1;
        if (SBORROW4(param_3,1)) {
          thunk_FUN_00402874(param_4);
          iVar3 = extraout_ECX_00;
        }
        FUN_0053ccc8(param_1,uVar2,iVar3,param_4);
      }
    }
    else {
      iVar3 = param_3 + -1;
      if (SBORROW4(param_3,1)) {
        thunk_FUN_00402874(param_4);
        iVar3 = extraout_ECX;
      }
      FUN_0053ccc8(uVar2,param_2,iVar3,param_4);
    }
  }
  return;
}

