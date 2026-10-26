/*
 * FUN_0044a214 at 0044a214
 * undefined __register FUN_0044a214(int * param_1)
 * Address ranges: 0044a214-0044a24f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044a214(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  
  FUN_0043442c(param_1);
  piVar1 = (int *)param_1[0x82];
  if (piVar1 != (int *)0x0) {
    param_1[0x82] = 0;
    cVar2 = FUN_00403270(piVar1,extraout_EDX,extraout_ECX);
    if (cVar2 != '\0') {
      FUN_0044c24c(param_1,piVar1,extraout_ECX_00);
    }
  }
  return;
}

