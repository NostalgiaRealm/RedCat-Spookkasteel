/*
 * FUN_0041d040 at 0041d040
 * undefined __register FUN_0041d040(int * param_1, byte param_2)
 * Address ranges: 0041d040-0041d0af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041d040(int *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  
  bVar2 = ~*(byte *)(param_1 + 2) & param_2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x14))();
      if (param_1[1] == 0) {
        piVar1 = FUN_0040cfa8((int *)&DAT_0041071c,'\x01',(undefined4 *)PTR_PTR_0057223c);
        FUN_0040382c(piVar1);
      }
    }
    if ((bVar2 & 2) != 0) {
      FUN_0041d0dc((int)param_1);
    }
    if ((bVar2 & 4) != 0) {
      FUN_0041d108((int)param_1);
    }
    if ((bVar2 & 8) != 0) {
      FUN_0041d138((int)param_1);
    }
    *(byte *)(param_1 + 2) = bVar2 | *(byte *)(param_1 + 2);
  }
  return;
}

