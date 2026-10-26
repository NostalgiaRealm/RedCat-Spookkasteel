/*
 * FUN_10013920 at 10013920
 * undefined FUN_10013920(void)
 * Address ranges: 10013920-1001399d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10013920(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float local_10;
  undefined1 local_c [12];
  
  piVar1 = *(int **)(param_1 + 4);
  FUN_1000d810(piVar1,param_1 + 0x1c);
  iVar2 = 0;
  local_10 = 0.0;
  if (0 < *piVar1) {
    do {
      FUN_10014560(local_c);
      fVar3 = (float10)FUN_10014550();
      if ((float10)local_10 < fVar3) {
        local_10 = (float)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  *(float *)(param_1 + 0x28) = local_10;
  return 1;
}

