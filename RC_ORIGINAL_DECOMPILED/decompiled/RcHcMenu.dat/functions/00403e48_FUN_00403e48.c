/*
 * FUN_00403e48 at 00403e48
 * undefined __register FUN_00403e48(int * param_1, int param_2)
 * Address ranges: 00403e48-00403e70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403e48(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != 0) && (-1 < *(int *)(param_2 + -8))) {
    LOCK();
    *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
    UNLOCK();
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_00402800(iVar2 + -8);
    }
  }
  return;
}

