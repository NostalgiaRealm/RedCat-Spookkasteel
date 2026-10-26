/*
 * FUN_004785f0 at 004785f0
 * undefined __register FUN_004785f0(int param_1, int * param_2)
 * Address ranges: 004785f0-00478634
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004785f0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  if (puVar1 == *(undefined4 **)(param_1 + 0x30)) {
    FUN_00406a48((undefined4 *)PTR_PTR_005723f8,param_2);
    return;
  }
  FUN_00403e98(param_2,puVar1,(int)*(undefined4 **)(param_1 + 0x30) - (int)puVar1);
  FUN_004040f0(param_2,3);
  return;
}

