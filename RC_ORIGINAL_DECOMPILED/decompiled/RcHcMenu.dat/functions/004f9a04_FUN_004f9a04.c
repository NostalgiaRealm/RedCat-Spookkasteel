/*
 * FUN_004f9a04 at 004f9a04
 * undefined __register FUN_004f9a04(int * param_1, undefined4 * param_2)
 * Address ranges: 004f9a04-004f9a62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f9a04(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  byte bVar5;
  byte local_24 [28];
  int *local_8;
  
  bVar5 = 0;
  pbVar3 = local_24;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 4;
  }
  local_8 = param_1;
  cVar1 = FUN_0048d3ac((byte *)(param_1 + 0x82),local_24);
  if (cVar1 == '\0') {
    pbVar3 = local_24;
    piVar4 = local_8 + 0x82;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *(int *)pbVar3;
      pbVar3 = pbVar3 + ((uint)bVar5 * -2 + 1) * 4;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_004f9a64(local_8);
    (**(code **)(*local_8 + 0xd4))();
    FUN_004297c4(local_8);
  }
  return;
}

