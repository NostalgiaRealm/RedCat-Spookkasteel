/*
 * FUN_00483bac at 00483bac
 * undefined __register FUN_00483bac(int * param_1, uint * param_2)
 * Address ranges: 00483bac-00483bf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483bac(int *param_1,uint *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(byte *)(param_1 + 8) & 2) == 0;
  if (!(bool)uVar1) {
    FUN_00403e04(param_1 + 0x21,param_2);
    return;
  }
  FUN_00482c54(param_1);
  FUN_00404140((uint *)param_1[0x21],param_2);
  if (!(bool)uVar1) {
    FUN_00403e04(param_1 + 0x21,param_2);
    FUN_00482d18(param_1,'\0');
  }
  return;
}

