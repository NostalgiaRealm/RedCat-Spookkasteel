/*
 * FUN_005033ec at 005033ec
 * undefined __register FUN_005033ec(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 005033ec-00503465
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005033ec(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  
  uVar1 = param_2 - param_1[0x83];
  if (SBORROW4(param_2,param_1[0x83])) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = uVar1 + 1;
  if (SCARRY4(uVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar1 = (uint)((longlong)(int)uVar2 * (longlong)param_1[0x80]);
  if ((longlong)(int)uVar1 != (longlong)(int)uVar2 * (longlong)param_1[0x80]) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar3 = FUN_00432178(param_1);
  iVar4 = param_2 - param_1[0x83];
  if (SBORROW4(param_2,param_1[0x83])) {
    thunk_FUN_00402874((uint)param_1);
    uVar3 = extraout_ECX;
    iVar4 = extraout_EDX;
  }
  iVar5 = (int)((longlong)iVar4 * (longlong)param_1[0x80]);
  if ((longlong)iVar5 != (longlong)iVar4 * (longlong)param_1[0x80]) {
    thunk_FUN_00402874((uint)param_1);
    uVar3 = extraout_ECX_00;
    iVar5 = extraout_EDX_00;
  }
  FUN_00411624(0,iVar5,uVar3,param_3,uVar1);
  return;
}

