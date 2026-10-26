/*
 * FUN_0040303c at 0040303c
 * undefined __register FUN_0040303c(int * param_1)
 * Address ranges: 0040303c-00403060
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040303c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  do {
    iVar1 = *(int *)(*piVar2 + -0x40);
    piVar2 = *(int **)(*piVar2 + -0x24);
    if (iVar1 != 0) {
      FUN_0040484c((int)param_1,iVar1);
    }
  } while (piVar2 != (int *)0x0);
  FUN_00402800((int)param_1);
  return;
}

