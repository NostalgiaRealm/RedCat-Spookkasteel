/*
 * FUN_004725dc at 004725dc
 * undefined4 __register FUN_004725dc(int * param_1, int param_2)
 * Address ranges: 004725dc-00472611
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004725dc(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 unaff_EBX;
  undefined4 uVar2;
  
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  while( true ) {
    if ((param_2 == 0) || (piVar1 = *(int **)(param_2 + 0x24), piVar1 == (int *)0x0)) {
      return 0;
    }
    if (param_1 == piVar1) {
      return uVar2;
    }
    if ((piVar1[0x1e] != 0) && (param_1 == *(int **)(piVar1[0x1e] + 0x28))) break;
    param_2 = (**(code **)(*piVar1 + 0x128))();
  }
  return uVar2;
}

