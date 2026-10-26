/*
 * FUN_00495828 at 00495828
 * int * __register FUN_00495828(undefined4 * param_1)
 * Address ranges: 00495828-004958c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00495828(undefined4 *param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  piVar1 = (int *)FUN_00402fdc(param_1);
  piVar1 = FUN_004957e4(piVar1,'\x01',extraout_ECX);
  piVar1[1] = param_1[1];
  FUN_00404e28((VARIANT *)(piVar1 + 2),(VARIANTARG *)(param_1 + 2));
  piVar1[0xb] = param_1[0xb];
  FUN_00403e04(piVar1 + 7,(undefined4 *)param_1[7]);
  FUN_00403e04(piVar1 + 8,(undefined4 *)param_1[8]);
  FUN_00403e04(piVar1 + 9,(undefined4 *)param_1[9]);
  FUN_00403e04(piVar1 + 10,(undefined4 *)param_1[10]);
  *(undefined2 *)(piVar1 + 6) = *(undefined2 *)(param_1 + 6);
  return piVar1;
}

