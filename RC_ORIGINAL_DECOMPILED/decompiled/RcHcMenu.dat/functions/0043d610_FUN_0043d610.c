/*
 * FUN_0043d610 at 0043d610
 * undefined __register FUN_0043d610(int param_1, int param_2)
 * Address ranges: 0043d610-0043d656
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d610(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_0043d5a0(param_1);
  if (-1 < iVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x24);
    iVar2 = piVar1[2];
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    if (iVar3 != param_2) {
      FUN_00412224(piVar1,iVar3);
      FUN_00412400(*(int **)(*(int *)(param_1 + 0x4c) + 0x24),param_2,param_1);
    }
  }
  return;
}

