/*
 * FUN_00451864 at 00451864
 * undefined __register FUN_00451864(int param_1, char param_2)
 * Address ranges: 00451864-004518a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451864(int param_1,char param_2)

{
  int iVar1;
  undefined3 in_register_00000009;
  
  if (param_2 != *(char *)(param_1 + 0x78)) {
    *(char *)(param_1 + 0x78) = param_2;
    if (param_2 == '\0') {
      FUN_00403094(*(int **)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      iVar1 = (**(code **)(PTR_PTR_0056f9d0 + 0x2c))
                        (PTR_PTR_0056f9d0,CONCAT31(in_register_00000009,1),param_1);
      *(int *)(param_1 + 0x74) = iVar1;
      FUN_004328a0(iVar1,*(int *)(param_1 + 0x4c));
    }
  }
  return;
}

