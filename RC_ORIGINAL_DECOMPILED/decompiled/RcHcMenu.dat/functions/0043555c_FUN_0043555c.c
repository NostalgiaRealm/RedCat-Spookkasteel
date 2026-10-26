/*
 * FUN_0043555c at 0043555c
 * undefined __register FUN_0043555c(int * param_1, char param_2)
 * Address ranges: 0043555c-00435578
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043555c(int *param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = FUN_0044879c(param_1);
  if (piVar1 != (int *)0x0) {
    FUN_0044c304(piVar1,(int)param_1,param_2);
  }
  return;
}

