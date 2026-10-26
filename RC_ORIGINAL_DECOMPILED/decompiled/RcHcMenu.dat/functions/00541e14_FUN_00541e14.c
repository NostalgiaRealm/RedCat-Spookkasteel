/*
 * FUN_00541e14 at 00541e14
 * undefined __register FUN_00541e14(int param_1, int * param_2)
 * Address ranges: 00541e14-00541e45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00541e14(int param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte local_28 [28];
  int *local_c;
  int local_8;
  
  bVar4 = 0;
  local_c = param_2;
  local_8 = param_1;
  FUN_00495f2c(param_2,local_28);
  pbVar2 = local_28;
  puVar3 = (undefined4 *)(local_8 + 0x240);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + ((uint)bVar4 * -2 + 1) * 4;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}

