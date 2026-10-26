/*
 * FUN_00409aa8 at 00409aa8
 * undefined __register FUN_00409aa8(byte * param_1, int * param_2)
 * Address ranges: 00409aa8-00409b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00409aa8(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar2 = FUN_00404030((int)param_1);
  pbVar5 = param_1 + iVar2;
  iVar2 = 0;
  for (pbVar3 = param_1; pbVar3 < pbVar5; pbVar3 = pbVar3 + 1) {
    bVar1 = *pbVar3;
    if (bVar1 == 10) {
      iVar2 = iVar2 + 1;
    }
    else if (bVar1 == 0xd) {
      if (pbVar3[1] == 10) {
        pbVar3 = pbVar3 + 1;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    else if (((byte)(&DAT_0056f16c)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0) {
      pbVar3 = pbVar3 + 1;
    }
  }
  if (iVar2 == 0) {
    FUN_00403e04(param_2,(undefined4 *)param_1);
  }
  else {
    FUN_00403e98(param_2,(undefined4 *)0x0,(uint)(pbVar5 + (iVar2 - (int)param_1)));
    pbVar3 = (byte *)*param_2;
    while (pbVar4 = param_1, pbVar4 < pbVar5) {
      bVar1 = *pbVar4;
      if (bVar1 == 10) {
        *pbVar3 = 0xd;
        pbVar3[1] = 10;
        pbVar3 = pbVar3 + 2;
        param_1 = pbVar4 + 1;
      }
      else if (bVar1 == 0xd) {
        *pbVar3 = 0xd;
        pbVar3[1] = 10;
        pbVar3 = pbVar3 + 2;
        param_1 = pbVar4 + 1;
        if (pbVar4[1] == 10) {
          param_1 = pbVar4 + 2;
        }
      }
      else {
        if (((byte)(&DAT_0056f16c)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0) {
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
        }
        *pbVar3 = *pbVar4;
        pbVar3 = pbVar3 + 1;
        param_1 = pbVar4 + 1;
      }
    }
  }
  return;
}

