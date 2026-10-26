/*
 * FUN_00524ec4 at 00524ec4
 * undefined __register FUN_00524ec4(int * param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 00524ec4-00524f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00524ec4(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  
  if ((*param_2 == 0) || (param_2[1] == -1)) {
    FUN_00411624(0xffffffff,0xffffffff,0xffffffff,param_3,0xffffffff);
  }
  else {
    *param_3 = *(undefined4 *)(*param_2 + 0x14);
    param_3[2] = *(undefined4 *)(*param_2 + 0x1c);
    uVar3 = FUN_005235f8(param_1);
    iVar5 = param_2[1] - param_1[0x84];
    if (SBORROW4(param_2[1],param_1[0x84])) {
      uVar3 = thunk_FUN_00402874(uVar3);
      iVar5 = extraout_EDX;
    }
    uVar4 = (uint)((longlong)(int)uVar3 * (longlong)iVar5);
    if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * (longlong)iVar5) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    param_3[1] = uVar4;
    iVar5 = FUN_005235f8(param_1);
    uVar3 = iVar5 + param_3[1];
    if (SCARRY4(iVar5,param_3[1])) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    param_3[3] = uVar3;
    cVar2 = FUN_005237c4(param_1);
    if (cVar2 != '\0') {
      piVar1 = param_3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      if (SBORROW4(iVar5,1)) {
        thunk_FUN_00402874((uint)param_3);
      }
      piVar1 = param_3 + 3;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      if (SBORROW4(iVar5,1)) {
        thunk_FUN_00402874((uint)param_3);
      }
    }
  }
  return;
}

