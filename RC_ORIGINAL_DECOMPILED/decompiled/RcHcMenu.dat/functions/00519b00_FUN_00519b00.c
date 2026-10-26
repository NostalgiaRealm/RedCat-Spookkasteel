/*
 * FUN_00519b00 at 00519b00
 * undefined __register FUN_00519b00(int * param_1)
 * Address ranges: 00519b00-00519b43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00519b00(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  WPARAM WVar4;
  
  iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
  if (-1 < iVar2 + -1) {
    WVar4 = 0;
    do {
      bVar1 = FUN_00519a90(param_1,WVar4);
      if (bVar1) {
        piVar3 = (int *)FUN_005199dc(param_1,WVar4);
        FUN_00403094(piVar3);
      }
      WVar4 = WVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0042c68c(param_1);
  return;
}

