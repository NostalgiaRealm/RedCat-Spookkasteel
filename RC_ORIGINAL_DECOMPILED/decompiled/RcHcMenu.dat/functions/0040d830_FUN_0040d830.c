/*
 * FUN_0040d830 at 0040d830
 * undefined4 __register FUN_0040d830(undefined * param_1, int param_2)
 * Address ranges: 0040d830-0040d852
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040d830(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  if (DAT_005735bc != '\0') {
    pbVar2 = FUN_004041f4(param_1);
    uVar1 = FUN_0040d7b8(pbVar2,param_2 + -1);
  }
  return uVar1;
}

