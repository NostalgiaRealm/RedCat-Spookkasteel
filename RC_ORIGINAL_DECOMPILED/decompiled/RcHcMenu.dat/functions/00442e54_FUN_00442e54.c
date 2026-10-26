/*
 * FUN_00442e54 at 00442e54
 * undefined __register FUN_00442e54(int * param_1, uint * param_2)
 * Address ranges: 00442e54-00442e7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00442e54(int *param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00404140((uint *)param_1[9],param_2);
  if (!(bool)in_ZF) {
    FUN_00403e04(param_1 + 9,param_2);
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}

