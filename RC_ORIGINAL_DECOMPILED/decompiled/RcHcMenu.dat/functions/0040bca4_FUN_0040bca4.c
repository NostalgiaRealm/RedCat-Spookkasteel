/*
 * FUN_0040bca4 at 0040bca4
 * undefined __register FUN_0040bca4(int * param_1, byte * param_2, undefined1 * param_3)
 * Address ranges: 0040bca4-0040bcf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040bca4(int *param_1,byte *param_2,undefined1 *param_3)

{
  undefined4 local_104 [64];
  
  if (param_2 == (byte *)0x0) {
    FUN_0040b530(&DAT_0040bcfc,0,param_3,&stack0xfffffffc);
  }
  else {
    FUN_0040b530(param_2,param_2,param_3,&stack0xfffffffc);
  }
  FUN_00403e98(param_1,local_104,0);
  return;
}

