/*
 * FUN_004195e4 at 004195e4
 * undefined __register FUN_004195e4(int param_1, char param_2)
 * Address ranges: 004195e4-00419629
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004195e4(int param_1,char param_2)

{
  int *piVar1;
  char acStack_10c [256];
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_0040400c(acStack_10c,*(undefined4 **)(param_1 + 8),0xff);
    piVar1 = (int *)FUN_00403384(piVar1,acStack_10c);
    if (piVar1 != (int *)0x0) {
      if (param_2 == '\0') {
        *piVar1 = 0;
      }
      else {
        *piVar1 = param_1;
      }
    }
  }
  return;
}

