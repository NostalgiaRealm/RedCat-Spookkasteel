/*
 * FUN_0040649c at 0040649c
 * undefined __register FUN_0040649c(int * param_1, int param_2, int param_3)
 * Address ranges: 0040649c-004064c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040649c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 1;
      FUN_00406460(param_1,param_3);
    }
  }
  *param_1 = param_2;
  return;
}

