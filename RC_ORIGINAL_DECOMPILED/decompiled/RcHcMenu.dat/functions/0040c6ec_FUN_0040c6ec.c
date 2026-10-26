/*
 * FUN_0040c6ec at 0040c6ec
 * undefined __register FUN_0040c6ec(LCID param_1, LCTYPE param_2, undefined4 * param_3, int * param_4)
 * Address ranges: 0040c6ec-0040c735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040c6ec(LCID param_1,LCTYPE param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  CHAR local_104 [256];
  
  iVar1 = GetLocaleInfoA(param_1,param_2,local_104,0x100);
  if (iVar1 < 1) {
    FUN_00403e04(param_4,param_3);
  }
  else {
    FUN_00403e98(param_4,(undefined4 *)local_104,iVar1 - 1);
  }
  return;
}

