/*
 * FUN_004839cc at 004839cc
 * undefined __register FUN_004839cc(int * param_1, uint * param_2)
 * Address ranges: 004839cc-00483a16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004839cc(int *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 8) & 2) == 0;
  if (!bVar1) {
    FUN_00403e04(param_1 + 0x22,param_2);
    return;
  }
  FUN_00404140((uint *)param_1[0x22],param_2);
  if (!bVar1) {
    FUN_00482c54(param_1);
    FUN_00483cd0(param_1,(undefined *)param_2);
    FUN_00403e04(param_1 + 0x22,param_2);
  }
  return;
}

