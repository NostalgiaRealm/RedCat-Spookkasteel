/*
 * FUN_004096cc at 004096cc
 * undefined __register FUN_004096cc(byte * param_1, int * param_2)
 * Address ranges: 004096cc-00409705
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004096cc(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = FUN_00404030((int)param_1);
  FUN_00404364(param_2,uVar2);
  pbVar3 = (byte *)*param_2;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    bVar1 = *param_1;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    *pbVar3 = bVar1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  return;
}

