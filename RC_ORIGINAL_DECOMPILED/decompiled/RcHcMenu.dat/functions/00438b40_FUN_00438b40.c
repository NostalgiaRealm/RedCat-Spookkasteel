/*
 * FUN_00438b40 at 00438b40
 * undefined __register FUN_00438b40(int param_1, short param_2)
 * Address ranges: 00438b40-00438b98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438b40(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_00438b1c(param_1);
  iVar3 = (int)(short)iVar3;
  if (-1 < iVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x24) + 0x16c);
    iVar2 = piVar1[2];
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = (short)iVar2 + -1;
    }
    if (iVar3 != param_2) {
      FUN_00412224(piVar1,iVar3);
      FUN_00412400(*(int **)(*(int *)(param_1 + 0x24) + 0x16c),(int)param_2,param_1);
    }
  }
  return;
}

