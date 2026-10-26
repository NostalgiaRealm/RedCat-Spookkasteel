/*
 * FUN_0047f0d4 at 0047f0d4
 * undefined __register FUN_0047f0d4(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0047f0d4-0047f1ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047f0d4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte local_42c [35];
  byte local_409 [1024];
  byte local_9;
  int *local_8;
  
  bVar8 = 0;
  local_8 = param_1;
  FUN_00403db0(param_1);
  pbVar4 = local_409;
  for (pbVar6 = *(byte **)(param_4 + -4);
      ((bVar1 = *pbVar6, bVar1 == 0 || (bVar1 == 0x20)) || (bVar1 == 0x2e)); pbVar6 = pbVar6 + 1) {
    if (bVar1 == 0) {
      return;
    }
  }
  local_9 = 0x2e;
  if (*pbVar6 == 0x22) {
    local_9 = 0x22;
    pbVar6 = pbVar6 + 1;
  }
  while( true ) {
    puVar5 = &DAT_0047f1cc;
    pbVar7 = local_42c;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pbVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      pbVar7 = pbVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    local_42c[(int)(uint)local_9 >> 3] =
         local_42c[(int)(uint)local_9 >> 3] | '\x01' << (local_9 & 7);
    bVar1 = *pbVar6;
    uVar3 = (uint)bVar1;
    if ((local_42c[(int)uVar3 >> 3] >> (uVar3 & 7) & 1) != 0) break;
    if (((byte)PTR_DAT_005725fc[(int)uVar3 >> 3] >> (uVar3 & 7) & 1) == 0) {
      if (bVar1 == 0x5c) {
        bVar1 = pbVar6[1];
        pbVar7 = pbVar6 + 1;
        if (((byte)PTR_DAT_005725fc[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0) {
          *pbVar4 = bVar1;
          pbVar4 = pbVar4 + 1;
          pbVar7 = pbVar6 + 2;
        }
        pbVar6 = pbVar7;
        if (*pbVar6 == 0) {
          pbVar6 = pbVar6 + -1;
        }
      }
    }
    else {
      *pbVar4 = bVar1;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    }
    *pbVar4 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar4 = pbVar4 + 1;
  }
  FUN_00403e98(local_8,(undefined4 *)local_409,(int)pbVar4 - (int)local_409);
  if ((local_9 == 0x22) && (*pbVar6 != 0)) {
    pbVar6 = pbVar6 + 1;
  }
  *(byte **)(param_4 + -4) = pbVar6;
  return;
}

