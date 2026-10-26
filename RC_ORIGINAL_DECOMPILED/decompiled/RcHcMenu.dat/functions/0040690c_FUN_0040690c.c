/*
 * FUN_0040690c at 0040690c
 * undefined __register FUN_0040690c(int param_1)
 * Address ranges: 0040690c-00406969
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040690c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_0056f020;
  if ((DAT_0056f020 != (int *)0x0) && (DAT_0056f020[1] == param_1)) {
    DAT_0056f020 = (int *)*DAT_0056f020;
    FUN_00402800((int)piVar2);
    return;
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (piVar1[1] == param_1)) break;
    piVar2 = (int *)*piVar2;
  }
  *piVar2 = *piVar1;
  FUN_00402800((int)piVar1);
  return;
}

