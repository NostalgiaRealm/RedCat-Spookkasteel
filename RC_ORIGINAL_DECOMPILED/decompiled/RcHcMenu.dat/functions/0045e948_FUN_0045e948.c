/*
 * FUN_0045e948 at 0045e948
 * undefined __register FUN_0045e948(undefined4 * param_1, int * param_2)
 * Address ranges: 0045e948-0045e994
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045e948(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_00403e04(param_2,param_1);
  pbVar1 = FUN_00409f04((undefined *)*param_2);
  while( true ) {
    iVar3 = FUN_00404030(*param_2);
    if ((iVar3 < 1) || ((0x20 < *pbVar1 && (*pbVar1 != 0x2e)))) break;
    puVar2 = FUN_004041f4((undefined *)*param_2);
    FUN_00404364(param_2,(int)pbVar1 - (int)puVar2);
    pbVar1 = FUN_00409f04((undefined *)*param_2);
  }
  return;
}

