/*
 * FUN_00432930 at 00432930
 * undefined __register FUN_00432930(int * param_1, char param_2)
 * Address ranges: 00432930-00432957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432930(int *param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00432920(param_1);
  if ((bool)param_2 != bVar1) {
    if (param_2 == '\0') {
      FUN_0042fbdc((int *)0x0);
    }
    else {
      FUN_0042fbdc(param_1);
    }
  }
  return;
}

