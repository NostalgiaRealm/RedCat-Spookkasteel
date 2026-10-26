/*
 * FUN_0051eff4 at 0051eff4
 * undefined __register FUN_0051eff4(int * param_1, undefined4 param_2, int param_3, int param_4)
 * Address ranges: 0051eff4-0051f051
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051eff4(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  
  if (SCARRY4(param_4,param_1[0xd])) {
    thunk_FUN_00402874(param_4 + param_1[0xd]);
  }
  piVar1 = (int *)FUN_0051e1b8(param_1);
  iVar2 = param_3 + param_1[0xc];
  if (SCARRY4(param_3,param_1[0xc])) {
    piVar1 = (int *)thunk_FUN_00402874((uint)piVar1);
    iVar2 = extraout_ECX;
  }
  FUN_00403270(piVar1,param_2,iVar2);
  FUN_00432efc((int)param_1,param_2,param_3,param_4);
  return;
}

