/*
 * FUN_004028e8 at 004028e8
 * undefined __register FUN_004028e8(byte * param_1, int param_2, int param_3, byte * param_4)
 * Address ranges: 004028e8-00402927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004028e8(byte *param_1,int param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    *param_4 = 0;
    return;
  }
  if (param_2 < 1) {
    param_2 = 1;
LAB_004028fe:
    iVar2 = ((uint)bVar1 - param_2) + 1;
    if (-1 < param_3) {
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      goto LAB_00402909;
    }
  }
  else if (param_2 <= (int)(uint)bVar1) goto LAB_004028fe;
  param_3 = 0;
LAB_00402909:
  *param_4 = (byte)param_3;
  pbVar3 = param_1 + param_2;
  for (; param_4 = param_4 + 1, param_3 != 0; param_3 = param_3 + -1) {
    *param_4 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  }
  return;
}

