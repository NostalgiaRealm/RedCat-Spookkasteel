/*
 * FUN_0041c2ec at 0041c2ec
 * undefined __register FUN_0041c2ec(int * param_1, undefined4 param_2)
 * Address ranges: 0041c2ec-0041c30f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c2ec(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte abStack_18 [8];
  undefined4 local_10;
  
  puVar2 = &DAT_0056f614;
  pbVar3 = abStack_18;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pbVar3 = (byte *)((int)pbVar3 + 4);
  }
  local_10 = param_2;
  FUN_0041c29c(param_1,abStack_18);
  return;
}

