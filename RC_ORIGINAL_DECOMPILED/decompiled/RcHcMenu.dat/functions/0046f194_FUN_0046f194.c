/*
 * FUN_0046f194 at 0046f194
 * int __register FUN_0046f194(int param_1, byte param_2, undefined4 * param_3, undefined1 param_4)
 * Address ranges: 0046f194-0046f1db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0046f194(int param_1,byte param_2,undefined4 *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00412e80(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0046627c);
  FUN_0046f9ac(iVar2,param_4);
  FUN_00403e04((int *)(iVar2 + 0x2c),param_3);
  FUN_0046f9d0(iVar2,param_2);
  return iVar2;
}

