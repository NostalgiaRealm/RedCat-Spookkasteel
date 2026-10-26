/*
 * FUN_00503494 at 00503494
 * undefined __register FUN_00503494(int * param_1, int param_2)
 * Address ranges: 00503494-00503515
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00503494(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    if (param_2 < param_1[0x83]) {
      FUN_00502dcc(param_1,param_2);
    }
    iVar2 = FUN_00502c08(param_1);
    uVar3 = iVar2 + param_1[0x83];
    if (SCARRY4(iVar2,param_1[0x83])) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    uVar4 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if ((int)uVar4 < param_2) {
      uVar3 = FUN_00502c08(param_1);
      iVar2 = param_2 - uVar3;
      if (SBORROW4(param_2,uVar3)) {
        uVar3 = thunk_FUN_00402874(uVar3);
        iVar2 = extraout_EDX;
      }
      iVar5 = iVar2 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_00402874(uVar3);
        iVar5 = extraout_EDX_00;
      }
      FUN_00502dcc(param_1,iVar5);
    }
  }
  return;
}

